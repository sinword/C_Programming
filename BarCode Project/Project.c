#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int scan(FILE* file,int* len,int num[]){
	int flag = 0;
	char arr[99];
	int a_len=1;
	do{
		fscanf(file,"%c",&arr[0]);
	}while(isspace(arr[0]));
	while(1){
		fscanf(file,"%c",&arr[a_len]);
		if(isspace(arr[a_len])){
			arr[a_len] = '\0';
			break;
		}
		a_len++;
	}
	if(a_len>3){
		flag++;
	}else{
		*len = atoi(arr);
	}
	if(*len%6!=5){
		flag++;
	}
	if(*len>150){
		flag++;
	}
	int i;
	for(i=0;i<*len;i++){
		a_len=1;
		do{
			fscanf(file,"%c",&arr[0]);
		}while(isspace(arr[0]));
		while(1){
			fscanf(file,"%c",&arr[a_len]);
			if(isspace(arr[a_len])){
				arr[a_len] = '\0';
				break;
			}
			a_len++;
		}
		if(a_len>3){
			flag++;
		}else{
			num[i] = atoi(arr);
		}
		if(num[i]>200||num[i]<1){
			flag++;
		}
	}
	if(flag){
		return -1;
	}
	return 0;
}
int sampling(int len,int num[],int exp[]){
	int i,max=0,min=9999;
	for(i=0;i<len;i++){
		if(num[i]>max)
			max = num[i];
	}
	min = max;
	for(i=0;i<len;i++){
		if(num[i]<min)
			min = num[i];
	}
	int j;
	for(i=min-(len*0.1);i<=max;i++){
		double l1 = (double)i*0.95;
		double l2 = (double)i*1.05;
		double u1 = (double)i*2*0.95;
		double u2 = (double)i*2*1.05;
		int count = 0;
		for(j=0;j<len;j++){
			if(l1<=num[j]&&l2>=num[j]){
				exp[j] = 0;
			}else if(u1<=num[j]&&u2>=num[j]){
				exp[j] = 1;
			}else{
				count++;
				break;
			}
		}
		if(count==0){
			
			return 0;
		}
	}
	return -1;	
}
int decode(int len,int exp[],char str[]){
	int tab[12][5] = {{0,0,0,1,1},{0,1,0,0,1},{1,0,0,0,0},
					  {1,0,1,0,0},{1,1,0,0,0},{0,0,1,0,1},
					  {0,1,1,0,0},{0,0,0,0,1},{1,0,0,1,0},
					  {1,0,0,0,1},{0,0,1,0,0},{0,0,1,1,0}};
	char syntax[12] = {'0','1','2','3','4','5','6','7','8','9','-','#'};
	int dire = 0;
	int i,lc=0,rc=0;
	for(i=0;i<5;i++){
		if(exp[i] == tab[11][i])
			lc++;
	}
	if(lc==5)
		dire = 0;
	for(i=0;i<5;i++){
		if(exp[len-1-i] == tab[11][i])
			rc++;
	}
	if(rc==5)
		dire = 1;
	if(lc!=5&&rc!=5){  
		return -1;
	}
	if(dire==1){
		int tmp[200];
		for(i=0;i<len;i++){
			tmp[i] = exp[len-1-i];
		}
		for(i=0;i<len;i++){
			exp[i] = tmp[i];
		}
	}
	int np = 0;
	int bc = 0;
	while(len-np>5){
		int j,flag,m_flag=0;
		for(i=0;i<12;i++){
			flag=0;
			for(j=0;j<5;j++){
				if(exp[np+j]!=tab[i][j]){
					flag=1;
					break;
				}
			}
			if(flag)
				continue;
			else{
				str[bc++] = syntax[i];
				m_flag++;
			}
		}
		if(!m_flag){
			return -1;
		}
		if(exp[np+5]==0){
			np+=6;
		}else{
			return -1; 
		}
	}
	int j,flag,m_flag=0;
		for(i=0;i<12;i++){
			flag=0;
			for(j=0;j<5;j++){
				if(exp[np+j]!=tab[i][j]){
					flag=1;
					break;
				}
			}
			if(flag)
				continue;
			else{
				str[bc++] = syntax[i];
				str[bc++] = '\0';
				np+=6;
				m_flag++;
			}
		}
		if(!m_flag){
			return -1;
		}

	return 0;
}
int weight(char chr){
	switch(chr){
		case '0':
			return 0;
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
		case '-':
			return 10;
	}
}
int errcode(char* str){
	int len = 0;
	while(str[len]!='\0'){
		len++;
	}
	char c = str[len-3];
	char k = str[len-2];
	int i,sum=0;
	for(i=1;i<len-3;i++){
		sum+=((len-4-i)%10+1)*weight(str[i]);
	}
	sum%=11;
	if(sum!=weight(c)){
		printf("bad C\n");
		return -1;
	}
	sum=0;
	for(i=1;i<len-2;i++){
		sum+=((len-3-i)%9+1)*weight(str[i]);
	}
	sum%=11;
	if(sum!=weight(k)){
		printf("bad K\n");
		return -1;
	}
	return 0;
}
int main(){
	int time=1;
	FILE * file;
	char str[999];
	printf("Enter file name:");
	scanf("%s",str);
	file = fopen(str,"r");
	while(1){
		int num[200] = {0};
		int exp[200] = {0};
		char str[200] = {'\0'};
		int val;
		int i;
		int scanResult = scan(file,&val,num);
		if(val==0){
				return 0;
		}
		printf("Case %d: ",time);
		if(scanResult==0){
		int samplingResult = sampling(val,num,exp);
		if(samplingResult==0){
			int decodeResult = decode(val,exp,str);
			if(decodeResult==0){
				if(errcode(str)==0){
					int len = 0;
					while(str[len]!='\0'){
						len++;
					}
					for(i=1;i<len-3;i++)
						printf("%c",str[i]);
						printf("\n");
				}
			}else{
				printf("bad code\n");
			}
		}else{
			printf("bad code\n");
		}
	}else{
		printf("bad code\n");
	}
		time++;
	}
	return 0;
} 

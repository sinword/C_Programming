#include <stdio.h>

int main(){
	FILE *fp1, *fp2, *fp3;
	char buff[255];
	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "r");
	fp3 = fopen("file3.txt", "a");
	while(fscanf(fp1, "%s", buff) != EOF){
		printf("%s", buff);
		fprintf(fp3, "%s", buff);
	}
	while(fscanf(fp2, "%s", buff) != EOF){
		printf("%s", buff);
		fprintf(fp3, "%s", buff);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}

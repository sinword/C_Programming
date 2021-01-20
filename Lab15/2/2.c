#include <stdio.h>
#include <stdlib.h>

typedef struct client{
	int acc;
	int balance;
	int status;
}Client;

/*
1 20
2 50
3 5
*/

int main(){
	FILE *new, *old, *trans;
	new = fopen("newmast.txt", "w");
	old = fopen("oldmast.txt", "r");
	trans = fopen("trans.txt", "w");
	char arr[100];
	Client client[100], temp;
	int num = 0;
	while(fscanf(old, "%d %d", &client[num].acc, &client[num].balance) != EOF){
		client[num].status = 0;
		num++;
	}
	int origin = num;
	printf("%d\n", num);
	printf("Enter an account and payment.\naccount = -1 to end.\n");
	scanf("%d %d", &temp.acc, &temp.balance);
	while(temp.acc != -1){
		int test = 0;
		fprintf(trans, "%d %d\n", temp.acc, temp.balance);
		for(int i=0;i<num;i++){
			if(client[i].acc == temp.acc){
				client[i].balance += temp.balance;
				client[i].status = 1;
				test = 1;
			}
		}
		if(test == 0){
			num++;
			client[num-1].acc = temp.acc;
			client[num-1].balance = temp.balance;
			client[num-1].status = 2;
		}
		printf("Enter an account and payment.\naccount = -1 to end.\n");
		scanf("%d %d", &temp.acc, &temp.balance);
	}

	old = fopen("oldmast.txt", "w");
	//printf("%d\n", num);
	fprintf(new, "Account\t  Balance\n");
	for(int i=0;i<num;i++){
		fprintf(new, "%d\t  %d", client[i].acc, client[i].balance);
		fprintf(old, "%d %d\n", client[i].acc, client[i].balance);
		if(client[i].status == 0){
			fprintf(new, "\t\tNo purchase.", client[i].acc, client[i].balance);
		}
		if(client[i].status == 2){
			fprintf(new, "\t\tNew member.", client[i].acc, client[i].balance);
		}
		fprintf(new, "\n");
	}

}

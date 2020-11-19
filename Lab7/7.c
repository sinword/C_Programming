#include <stdio.h>

int t(int n, int s, int a, int d){
	if(n == 1){
		printf("%d --> %d\n", s, d);
	}
	else{
		t(n-1, s, d, a);
		t(1, s, a, d);
		t(n-1, a, s, d);
	}
	
}

int main(){
	int n = 5;
	int s = 1;
	int a = 2;
	int d = 3;
	t(n,1,2,3);
}

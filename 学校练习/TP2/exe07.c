#include<stdio.h>

int main(){
	int n;
	int sum = 0; 
	printf("un entier:");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		sum += i;
	}	
	printf("%d ", sum);
	printf("\n");
	return 0;
}
#include<stdio.h>

int main(){
	int n;
	printf("un entier:");
	scanf("%d", &n);
	if(n < 0){
		for(int i = 1; i >= n; i--){
			printf("%d ", i);
		}	
	}
	else{
		for(int i = 1; i <= n; i++){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
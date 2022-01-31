#include<stdio.h> 

void rectangleFixe (int n, int k){
	for(int m = 0; m < n; m++){
		for(int i = 1; i <= k; i++){
			printf("%d ", i);
		}
		printf("\n");
	}
}

void rectangleSomme (int n, int k){
	for(int m = 1; m <= n; m++){
		for(int i = 1; i <= k; i++){
			printf("%d ", m + i);
		}
		printf("\n");
	}
}

void rectangleSommeDetail (int n, int k){
	for(int m = 1; m <= n; m++){
		for(int i = 1; i <= k; i++){
			printf("%d+%d ", m, i);
		}
		printf("\n");
	}
}

int main(){
	int n = 0;
	int k = 0;
	printf("Ecriez un entier n pour rang:");
	scanf("%d", &n);
	printf("Ecriez un entier k pour colone:");
	scanf("%d", &k);
	rectangleFixe(n,k);
	printf("\n---------------------------------\n");
	rectangleSomme(n,k);
	printf("\n---------------------------------\n");
	rectangleSommeDetail(n,k);
	printf("\n---------------------------------\n");
	return 0;
}
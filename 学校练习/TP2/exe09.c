#include<stdio.h> 

void printXa (int n){
	for(int i = 0; i < n; i++){
		printf("x");
	}
}

void printXb (int n){
	for(int m = 0; m < n; m++){
		for(int i = 0; i < n; i++){
			printf("x");
		}
		printf("\n");
	}
}

void printXc (int n){
	for(int m = 0; m < n; m++){
		for(int i = 0; i <= m; i++){
			printf("x");
		}
		printf("\n");
	}
}

void printXd (int n){
	int count =0;
	for(int m = 0; m < n; m++){
		for(int i = 0; i < n - count; i++){
			printf("x");	
		}
		printf("\n");
		count++;
	}
}

void printXe (int n){
	int count =0;
	for(int m = 0; m < n; m++){
		for(int i = 0; i < n; i++){
			if(count > i){
				printf(" ");				
			}
			else{
				printf("x");
			}	
		}
		printf("\n");
		count++;
	}
}

void printXf (int n){
	int count = n - 1;
	for(int m = 0; m < n; m++){
		for(int i = 0; i < n; i++){
			if(count <= i){
				printf("x");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		count--;
	}
}

int main(){

	int n = 0;
	printf("Ecriez un entier n:");
	scanf("%d", &n);
	printXa(n);
	printf("\n---------------------------------\n");
	printXb(n);
	printf("\n---------------------------------\n");
	printXc(n);
	printf("\n---------------------------------\n");
	printXd(n);
	printf("\n---------------------------------\n");
	printXe(n);
	printf("\n---------------------------------\n");
	printXf(n);
	return 0;

}
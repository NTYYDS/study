#include<stdio.h> 
#include<stdlib.h>

void ChiffreParChiffre (int n){
	if(n != 0){
		n = abs(n);
		while(n > 0){
			printf("%d ", n%10);	
			n/=10;
		}	
	}
	else{
		printf("%d", n);
	}
}

int nbChiffres(int n){
	int count = 0;
	if(n != 0){
		n = abs(n);
		while(n > 0){	
			n/=10;
			count++;
		}	
	}
	else{
		count = 1;
	}
	return count;
}

void affiche(int n, int m){
	int count = nbChiffres(m);
	int arr[count];
	if(n > count){
		for(int i = 0; i < n - count; i++){
			arr[i] = 0;
		}
		printf("%d", n);
	}
	else{
		printf("error");
	}
}

int main(){
	int n = 0;
	int m = 0;
	printf("Ecriez un entier n:");
	scanf("%d", &n);
	ChiffreParChiffre(n);
	printf("\n---------------------------------\n");
	printf("count = %d", nbChiffres(n));
	printf("\n---------------------------------\n");
	printf("Ecriez un entier m:");
	scanf("%d", &m);
	affiche(n,m);
	printf("\n---------------------------------\n");
	return 0;
}
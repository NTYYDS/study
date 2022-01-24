#include<stdio.h> 

int ChercheMax (int arr[], int l){
	int max = arr[0];
	for(int i=1; i < l; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int ChercheMin (int arr[], int l){
	int min = arr[0];
	for(int i=1; i < l; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int Sum1(int arr[],int l){
	int sum1 = 0;
	for(int i=0; i < l; i++){
		sum1 += arr[i+1];
	}
	return sum1;
} 

int main (){
	int n = 0;
	int arr[100];
	int i = 0;
	int sum = 0;
	int sum1 = 0;
	while(n != -1){
		printf("entrez un entier se terminant par -1:");
		scanf("%d", &n);
		getchar();
		if(n == -1){
			break;
		}
		sum += n;
		arr[i] = n;
		i++;
	}
	int max = 0; 
	int min = 0;
	max = ChercheMax(arr, i);	
	min = ChercheMin(arr, i);
	printf("max = %d,min = %d\n", max, min);	
	printf("sum = %d\n",sum);
	sum1 = Sum1(arr,i-1);
	printf("sum1 = %d\n",sum1);
	return 0;
}
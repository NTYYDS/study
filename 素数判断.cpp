#include<stdio.h> 
#include<math.h> 

int nombrepremier(int n){
	int count;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			count++;
			printf("%d��������", n);
			break;
		}
	}
	if(count == 0){
		printf("%d������",n);
	}
	return 0;
}

int main (){
	int m, n;
	printf("������m��ֵ��"); 
	scanf("%d", &m);
	nombrepremier(m);
	return 0;
}


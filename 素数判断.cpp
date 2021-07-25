#include<stdio.h> 
#include<math.h> 

void nombrepremier(int n){
	int count;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			count++;
			printf("%d不是素数", n);
			break;
		}
	}
	if(count == 0){
		printf("%d是素数",n);
	}
}

int main (){
	int m, n;
	printf("请输入m的值："); 
	scanf("%d", &m);
	nombrepremier(m);
	return 0;
}


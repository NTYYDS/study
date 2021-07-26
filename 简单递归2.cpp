#include<stdio.h> 

int Fibonacci(int a){
	if(a<=2){
		return 1;
	}
	else{
		return Fibonacci(a-1) + Fibonacci(a-2);
	}
}

int main(){
	int n, ret;
	printf("ÇëÊäÈëÊý×Ö£º");
	scanf("%d", &n) ;
	ret = Fibonacci(n);
	printf("%d", ret);
	}

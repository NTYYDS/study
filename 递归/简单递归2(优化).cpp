#include<stdio.h> 

int Fibonacci(int a){
	int x, y, z;
	x = y = z = 1;
	while(a>2){
		z = x+y;
		x = y;
		y = z;
		a--;
	}
	return z;
}

int main(){
	int n, ret;
	printf("请输入数字：");
	scanf("%d", &n) ;
	ret = Fibonacci(n);
	printf("%d", ret);
	return 0;
}

#include<stdio.h>

/*输入值确认是否为完数 
void wanshu(int a){
	int sum;
	int i;
	for(i=1; i<=a/2; i++){
		if(a%i==0){
			sum = sum + i;
		}
	}
	if(sum==a){
		printf("%d是完数", a);
	}
	else{
		printf("%d不是完数", a);
		
	}
}

int main (){
	int m;
	printf("请输入m的值："); 
	scanf("%d", &m);	
	if(m<=0){
		printf("输入错误"); 
	} 
	wanshu(m);
	return 0;
}

*/

//寻找范围内完数 
void wanshu(int a){
	int sum;
	int i;
	for(i=1; i<=a/2; i++){
		if(a%i==0){
			sum = sum + i;
		}
	}
	if(sum==a){
		printf("%d是完数\n", a);
	}
	sum = 0;//非常重要！！ 需要将sum每次清零，否则sum会不断累加 
}

int main (){
	int m, n;
	printf("请确定查找范围："); 
	scanf("%d", &m);
	for(n=1; n<=m; n++){
		wanshu(n);			
	}
	return 0;
}

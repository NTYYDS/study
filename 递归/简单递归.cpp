#include<stdio.h> 

//将输入的数字，通过空格拆分 例：1234-> 1 2 3 4  
void chaifen(int a){
	if(a>9){
		chaifen(a/10);
	}
	printf("%d ", a%10);
}

int main(){
	int n;
	printf("请输入数字：");
	scanf("%d", &n) ;
	chaifen(n);
	}

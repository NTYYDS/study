#include<stdio.h> 

//����������֣�ͨ���ո��� ����1234-> 1 2 3 4  
void chaifen(int a){
	if(a>9){
		chaifen(a/10);
	}
	printf("%d ", a%10);
}

int main(){
	int n;
	printf("���������֣�");
	scanf("%d", &n) ;
	chaifen(n);
	}

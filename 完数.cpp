#include<stdio.h>

/*����ֵȷ���Ƿ�Ϊ���� 
int wanshu(int a){
	int sum;
	int i;
	for(i=1; i<=a/2; i++){
		if(a%i==0){
			sum = sum + i;
		}
	}
	if(sum==a){
		printf("%d������", a);
	}
	else{
		printf("%d��������", a);
		
	}
	return 0;
}
int main (){
	int m;
	printf("������m��ֵ��"); 
	scanf("%d", &m);	
	if(m<=0){
		printf("�������"); 
	} 
	wanshu(m);
	return 0;
}

*/

//Ѱ�ҷ�Χ������ 
int wanshu(int a){
	int sum;
	int i;
	for(i=1; i<=a/2; i++){
		if(a%i==0){
			sum = sum + i;
		}
	}
	if(sum==a){
		printf("%d������\n", a);
	}
	sum = 0;//�ǳ���Ҫ���� ��Ҫ��sumÿ�����㣬����sum�᲻���ۼ� 
	return 0;
}

int main (){
	int m, n;
	printf("��ȷ�����ҷ�Χ��"); 
	scanf("%d", &m);
	for(n=1; n<=m; n++){
		wanshu(n);			
	}
	return 0;
}

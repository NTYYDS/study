#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>

void menu (){
	printf("******************************************\n");
	printf("**********0.�˳�     1.��ʼ��Ϸ***********\n");
	printf("******************************************\n");	 
}
 
 void game(){
 	//��������� 
 	int n, ret;
 	ret = rand()%100+1;//����1-100�����   rand����Χ��0-32767�� 
 	//������ 
 	while(1){
 		printf("������²����֣�");
		scanf("%d", &n); 
		if(n<ret){
		    printf("С��\n");
		}
		else if(n>ret){
			printf("����\n");
		} 
		else{
			printf("�ش���ȷ\n");
			break; 
		}
	 } 

 }
 
int main (){
	int input; 	
	srand((unsigned int)time(NULL));  //����ʱ��������������ʼ����ֻ��Ҫ����һ�Σ���˲�����game������  ����ǰ�����ʱ��-�������ʼʱ��1970.1.1.0:0:0��= xxxx�� 
	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input) ;
		switch (input){
			case 1:
				game(); //��������Ϸ 
				break;
			case 0:
				printf("�˳���Ϸ"); 
				break;
			default:
				printf("ѡ�����"); 
				break;
		}
	} while(input); 
	return 0;
}

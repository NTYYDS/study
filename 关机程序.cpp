#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
	char input[20];
	//shutdown -s -t 60
	//system()- ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
    printf("���Խ���60s��ػ�������ȡ�������룺ȡ���ػ�\n\") ;
	scanf("%s", &input);
	if(strcmp(input, "ȡ���ػ�") == 0){
		system("shutdown -a");
		printf("ȡ���ɹ�\n");
	}
	else{
		printf("�������\n"); 
		goto again;
	} 
	return 0;
}

#include<stdio.h>
#include<string.h>

int main (){
	char arr1[10] = "facai";
	char arr2[20] = "!!!!!!!!!!";
	strcpy(arr1, arr2);//��arr2���Ƶ�arr1�� ��ע���Ⱥ�˳�� 
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
	char input[20];
	//shutdown -s -t 60
	//system()- 执行系统命令
	system("shutdown -s -t 60");
again:
    printf("电脑将在60s后关机，若需取消则输入：取消关机\n\") ;
	scanf("%s", &input);
	if(strcmp(input, "取消关机") == 0){
		system("shutdown -a");
		printf("取消成功\n");
	}
	else{
		printf("输入错误\n"); 
		goto again;
	} 
	return 0;
}

#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>

void menu (){
	printf("******************************************\n");
	printf("**********0.退出     1.开始游戏***********\n");
	printf("******************************************\n");	 
}
 
 void game(){
 	//生成随机数 
 	int n, ret;
 	ret = rand()%100+1;//生成1-100随机数   rand（范围在0-32767） 
 	//猜数字 
 	while(1){
 		printf("请输入猜测数字：");
		scanf("%d", &n); 
		if(n<ret){
		    printf("小了\n");
		}
		else if(n>ret){
			printf("大了\n");
		} 
		else{
			printf("回答正确\n");
			break; 
		}
	 } 

 }
 
int main (){
	int input; 	
	srand((unsigned int)time(NULL));  //利用时间戳设置随机数起始点且只需要调用一次，因此不放在game函数中  （当前计算机时间-计算机起始时间1970.1.1.0:0:0）= xxxx秒 
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input) ;
		switch (input){
			case 1:
				game(); //猜数字游戏 
				break;
			case 0:
				printf("退出游戏"); 
				break;
			default:
				printf("选择错误"); 
				break;
		}
	} while(input); 
	return 0;
}

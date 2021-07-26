#include<stdio.h> 
#include<math.h>

int NombrePremier(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else if(n>2){
		if(n%2==0){
			return 0;
		}
		else{
			for(int i=3; i<=sqrt(n); i+=2){
		        if(n%i == 0){
		        	return 0;
		        }
	        }
		}
	}
}

int main (){
	int m, n;
again:
	printf("请输入m的值:"); 
	scanf("%d", &m);
	if(m<=0){
		printf("输入错误,请重新输入\n"); 
		goto again;	
	}
	n = NombrePremier(m);
	if(n==0){
		printf("%d不是素数", m);
	}
	else{
		printf("%d是素数", m);
	}
	return 0;
}

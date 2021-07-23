#include<stdio.h> 
#include<math.h>

int NombrePremier(int n){
	int count;
	if(n==1){
		printf("1不是素数");
		count++; 
	}
	else if(n==2){
		printf("2是素数");
		count++; 
	}
	else if(n>2){
		if(n%2==0){
			printf("%d不是素数", n);
		    count++;
		}
		else{
			for(int i=3; i<=sqrt(n); i+=2){
		        if(n%i == 0){
			        count++;
			        printf("%d不是素数", n);
		     	    break;
		        }
	        }
		}
	}
	if(count==0){
		printf("%d是素数",n);
	}
	return 0;
}

int main (){
	int m;
	printf("请输入m的值:"); 
	scanf("%d", &m);
	NombrePremier(m);
	return 0;
}


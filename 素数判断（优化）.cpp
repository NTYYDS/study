#include<stdio.h> 
#include<math.h>

int NombrePremier(int n){
	int count;
	if(n==1){
		printf("1��������");
		count++; 
	}
	else if(n==2){
		printf("2������");
		count++; 
	}
	else if(n>2){
		if(n%2==0){
			printf("%d��������", n);
		    count++;
		}
		else{
			for(int i=3; i<=sqrt(n); i+=2){
		        if(n%i == 0){
			        count++;
			        printf("%d��������", n);
		     	    break;
		        }
	        }
		}
	}
	if(count==0){
		printf("%d������",n);
	}
	return 0;
}

int main (){
	int m;
	printf("������m��ֵ:"); 
	scanf("%d", &m);
	NombrePremier(m);
	return 0;
}


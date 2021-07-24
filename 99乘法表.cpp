#include<stdio.h> 

int main (){
	int m, n;
	for(m=1; m<10; m++) {
		for(n=1; n<=m; n++){
			printf("%dx%d=%-2d ", n, m, m*n);//为了右边对齐和美观 用%-2d 
		}
		printf("\n");
	}
	return 0;
}



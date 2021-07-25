#include<stdio.h>
#include<string.h>

int main (){
	char arr1[10] = "facai";
	memset(arr1, '*', 2); //void * memset( void * prt, int value, size_t num ); 这里中间存放的是*的ASCII 
	printf("%s\n", arr1);
	return 0;
}

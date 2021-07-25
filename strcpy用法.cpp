#include<stdio.h>
#include<string.h>

int main (){
	char arr1[10] = "facai";
	char arr2[20] = "!!!!!!!!!!";
	strcpy(arr1, arr2);//把arr2复制到arr1中 （注意先后顺序） 
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}

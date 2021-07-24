#include<stdio.h> 


int ChercheMax (int arr[], int sz){
	int max = arr[0];//不直接令max=0是因为以防数组中元素都是负数 所以max直接取数组的第一个元素 
	for(int i=1; i<sz; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("数组中最大值为:%d", max);
	return 0;
}
 
 
int main (){
	int arr[] = {-1,-2,-3,-4,5,-6,-7};
	int sz;
	sz = sizeof(arr)/sizeof(arr[0]);
	ChercheMax(arr,sz);
	return 0;

}

#include<stdio.h> 


int ChercheMax (int arr[], int sz){
	int max = arr[0];//��ֱ����max=0����Ϊ�Է�������Ԫ�ض��Ǹ��� ����maxֱ��ȡ����ĵ�һ��Ԫ�� 
	for(int i=1; i<sz; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("���������ֵΪ:%d", max);
	return 0;
}
 
 
int main (){
	int arr[] = {-1,-2,-3,-4,5,-6,-7};
	int sz;
	sz = sizeof(arr)/sizeof(arr[0]);
	ChercheMax(arr,sz);
	return 0;

}

#include<stdio.h>

int bubble_sort(int arr[],int sz)
{
	int i, j, sum;
	for(i = 0; i < sz -1; i++)
	{
		int a;
		for(j = 0; j < sz - 1 - i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				a = 1;		
			}
		}
		sum++;
		if(a == 0)
		{
			return sum;
		}
	}
}
int main(){
	int sum;
	int arr[] = {1,2,8,4,5,6,7,3,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);	
	sum = bubble_sort(arr,sz);//冒泡排序
	for(int i=0; i<sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("大循环次数：%d", sum);
	return 0;
}

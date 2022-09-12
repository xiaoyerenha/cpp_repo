#include<iostream>
using namespace std;

void bubbleSort(int * p, int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				//int temp = p[j];
				//p[j] = p[j+1];
				//p[j+1] = temp;
				int temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
			
		}
	}
} 

int main()
{
	//指针，数组和函数
	//案例：封装一个函数，利用冒泡排序，实现对整型数组升序
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	
	cout << "排序前：" << endl;
	for(int i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	bubbleSort(arr,len);
	
	cout << "排序后：" << endl;
	for(int i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	 
	system("pause");
	return 0;
}

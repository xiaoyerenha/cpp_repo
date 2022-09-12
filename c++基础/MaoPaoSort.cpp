#include<iostream>
using namespace std;

int main()
{
	//冒泡排序，实现升序
	
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	cout << "排序前：" << endl;
	for(int i=0;i<length;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//算法开始
	//总共排序轮数：元素个数 - 1 
	for(int i=0;i<length-1;i++)
	{
		//内层循环对比： 元素个数 - 当前轮数 - 1 
		for(int j=0;j<length-i-1;j++)
		{
			//如果第一个数字比第二个大，交换两个数字
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			} 
		}
	} 
	
	cout << "排序后：" << endl;
	for(int i=0;i<length;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	
	//1. 数据类型 数组名[数组长度]; 
	int arr[5];
	
	//给数组中的元素进行赋值
	//数组元素的下标是从0开始索引的 
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50; 
	
	//访问数据元素
	cout << arr[0] << endl;
	
	//2. 数据类型 数组名[数组长度] = {值1, 值2...}; 
	//如果在初始化数据时，没有全部填写完，会用0来填补剩余数据 
	int arr2[5] = {10,20,30};
	
	//利用循环访问数组的元素
	for(int i=0;i<5;i++)
	{
		cout << arr2[i] << endl;
	} 
	
	//3. 数据类型 数组名[] = {值1, 值2...}; 
	//定义数组时，必须有初始长度 
	int arr3[] = {10,20,30,40,50,60};
	int length = sizeof(arr3)/sizeof(arr3[0]);
	
	for(int i=0;i<length;i++)
	{
		cout << arr3[i] << endl;
	} 
	
	system("pause");
	return 0;	
} 

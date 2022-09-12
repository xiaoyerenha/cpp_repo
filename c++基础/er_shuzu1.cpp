#include<iostream>
using namespace std;

int main()
{
	//二维数组 
	//1. 数据类型 数组名[行数][列数]; 
	int arr[2][3];
	
	//给数组中的元素进行赋值
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6; 
	
	//访问数据元素
	cout << arr[0][0] << endl;
	
	//2. 数据类型 数组名[行数][列数] = {{值1,...},{值2,...},...}; 
	int arr2[2][3] = {{1,2,3},{4,5,6}};
	
	//利用循环访问数组的元素
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	} 
	
	//3. 数据类型 数组名[行数][列数] = {值1,值2,...};
	int arr3[2][3] = {10,20,30,40,50,60};
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	} 
	
	//4. 数据类型 数组名[][列数] = {值1,值2,...};
	int arr4[][3] = {100,200,300,400,500,600};
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	} 
	
	system("pause");
	return 0;	
} 

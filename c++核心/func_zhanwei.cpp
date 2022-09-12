#include<iostream>
using namespace std;

//函数占位参数
void func(int a,int)
{
	cout << "this is func" << endl;
} 

//占位参数还可以有默认参数
void func1(int a,int = 10)
{
	cout << "this is func" << endl;
}  

int main()
{
	func(10,10);
	func1(10);
	
	system("pause");
	return 0;
	
} 

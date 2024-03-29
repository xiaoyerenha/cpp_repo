#include<iostream>
using namespace std;

//函数默认参数

int func(int a,int b, int c)
{
	return a+b+c;
} 

//注意
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值 
int func1(int a,int b=20, int c=30)
{
	return a+b+c;
} 

//2.如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数 
int func2(int a=10, int b=10);

int func2(int a, int b)
{
	return a+b;
} 


int main()
{
	cout << func(10,20,30) << endl;
	cout << func1(10) << endl;
	//如果传入自己数据，就用自己的数据，如果没有，那么就用默认值 
	cout << func1(10,30) << endl;
	
	system("pause");
	return 0;
}

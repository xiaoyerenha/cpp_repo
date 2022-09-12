#include<iostream>
using namespace std;

//交换函数

//1.值传递
void swap01(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
} 

//2.地址传递
void swap02(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}  

//3.引用传递
void swap03(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
} 

int main()
{
	int a = 10;
	int b = 20;
	
	//swap01(a,b);  //值传递，形参不修饰实参 
	//swap02(&a,&b); //地址传递，形参修饰实参 
	swap03(a,b); //引用传递，形参修饰实参 
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
} 

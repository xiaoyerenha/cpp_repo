#include<iostream>
using namespace std;

int main()
{
	
	//1.const修饰指针 常量指针 
	int a = 10;
	int b = 20;
	
	const int * p = &a; 
	//指针指向的值不可以改，指针的指向可以改
	//*p = 20; //错误
	p = &b; 
	
	//2.const修饰常量 指针常量 
	int * const p2 = &a;
	//指针的指向不可以改，指针指向的值可以改
	*p2 = 100;
	//p2 = &b; //错误
	 
	//3.const修饰指针和常量 
	const int * const p3 = &a;
	//指针的指向和指针指向的值都不可以改
	//*p3 = 100; //错误 
	//p3 = &b;  //错误 
	
	system("pause");
	return 0;
} 

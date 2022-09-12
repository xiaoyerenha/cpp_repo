/*
    Name:函数模板基本语法 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/13 19:11:54
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//交换不同数据类型的函数
template<typename T>
void swapFunc(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
} 

void test01() {
	int a = 10;
	int b = 20;
	
	//第一种调用方法 
	//swapFunc(a,b);
	//cout << "a = " << a << " b = " << b << endl; 
	
	//第二种调用方法 
	swapFunc<int>(a,b);
	cout << "a = " << a << " b = " << b << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:普通函数与函数模板的区别 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/15 16:02:38
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//普通函数调用时可以发生自动类型转换（隐式类型转换）
//函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
int myAdd1(int a, int b) {
	 
	return a + b;
}

//函数模板 
template<typename T>
T myAdd2(T a, T b) {
	
	return a + b;
} 

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	
	cout << myAdd1(a,b) << endl;
	cout << myAdd1(a,c) << endl;
}

void test02() {
	int a = 10;
	int b = 20;
	char c = 'c';
	
	cout << myAdd2(a,b) << endl;
	cout << myAdd2<int>(a,c) << endl;
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


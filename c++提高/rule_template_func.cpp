/*
    Name:普通函数与函数模板的调用规则 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/15 16:15:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//如果函数模板和普通函数都可以实现，优先调用普通函数
//可以通过空模板参数列表来强制调用函数模板
//函数模板也可以发生重载
//如果函数模板可以产生更好的匹配，优先调用函数模板

//普通函数
void myPrint(int a); //{
//	
//	cout << "调用的普通函数" << endl;
//} 

//函数模板
template<typename T>
void myPrint(T a) {
	
	cout << "调用的函数模板" << endl;
} 

//函数模板重载 
template<typename T>
void myPrint(T a, T b) {
	
	cout << "调用的函数模板重载" << endl;
}

void test01() {
	int a = 10;
	//myPrint(a);
}

void test02() {
	int a = 10;
	myPrint<>(a);
}

void test03() {
	int a = 10;
	int b = 20; 
	myPrint(a,b);
}

int main()
{
    //test01();//调用的普通函数
    test02();//调用的函数模板
    
    test03();
    
    return 0;
}


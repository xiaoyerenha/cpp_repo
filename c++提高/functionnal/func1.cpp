/*
    Name:函数对象概念及使用 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/21 17:14:18
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的()时，行为类似函数调用，也叫仿函数

//本质：函数对象(仿函数)是一个类，不是一个函数

//使用特点：
//函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态
//函数对象可以作为参数传递

class myAdd {
	public:
		//1.函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
		int operator()(int a,int b) { 
			return a + b;
		}
};

class myPrint {
	public:
		myPrint() {
			cnt = 0;
		}
		void operator()(string str) {
			cnt++;
			cout << str << endl;
		}
		
		//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
		int cnt;
};

//3.函数对象可以作为参数传递
void doPrint(myPrint &mp,string str) {
	
	mp(str);
	mp(str);
	cout << "myPrint调用次数：" << mp.cnt << endl;
	
}

void test01() {
	
	myAdd md;
	cout << md(10,20) << endl;
	
}

void test02() {
	myPrint mp;
	mp("hello");
	mp("hello");
	mp("hello");
	cout << "myPrint调用次数：" << mp.cnt << endl;
}

void test03() {
	
	myPrint mp;
	doPrint(mp,"world");
	
}

int main()
{
    //test01();
    //test02();
    test03();
    
    return 0;
}


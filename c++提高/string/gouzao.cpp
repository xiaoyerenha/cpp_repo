/*
    Name:string基本概念和构造函数 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 16:28:10
    Description:
*/

//string是C++风格的字符串，而string本质上是一个类

//char *是一个指针
//string是一个类，类内部封装了char *，管理这个字符串，是一个char *型的容器
//string类内部封装了很多成员方法：find, copy, delete, replace, insert
//string管理char *所分配的内存，由类内部进行负责

//string构造函数
//string(); //创建一个空的字符串 例如: string str;
//string(const char* s); //使用字符串s初始化
//string(const string& str); //使用一个string对象初始化另一个string对象
//string(int n, char c); //使用n个字符c初始化 
 

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string s1;
	cout << "s1 = " << s1 << endl;
	
	const char* c = "hello world";
	string s2(c);
	cout << "s2 = " << s2 << endl;
	
	string s3(s2);
	cout << "s3 = " << s3 << endl;
	
	string s4(5,'c');
	cout << "s4 = " << s4 << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


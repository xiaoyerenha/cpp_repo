/*
    Name:string插入和删除 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:27:07
    Description:
*/

//string& insert(int pos, const char* s); //插入字符串
//string& insert(int pos, const string& str); //插入字符串
//string& insert(int pos, int n, char c); //在指定位置插入n个字符c
//string& erase(int pos, int n = npos); //删除从Pos开始的n个字符

//插入和删除的起始下标都是从0开始

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string str = "cvbn";
	const char* s = "dfg";
	string ss = "er";
	
	str.insert(1,s);
	cout << "str = " << str << endl;
	
	str.insert(0,ss);
	cout << "str = " << str << endl;
	
	str.insert(3,5,'p');
	cout << "str = " << str << endl;
	
	str.erase(3,3);
	cout << "str = " << str << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


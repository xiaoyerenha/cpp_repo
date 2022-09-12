/*
    Name:string字符串拼接 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 17:16:48
    Description:
*/

//string& operator+=(const char* str); //重载+=操作符
//string& operator+=(const char c); //重载+=操作符
//string& operator+=(const string& str); //重载+=操作符
//string& append(const char *s); //把字符串s连接到当前字符串结尾
//string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string &s); //同operator+=(const string& str)
//string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	const char* str = "hello";
	string s1;
	s1 += str;
	cout << "s1 = " << s1 << endl;
	
	char c = 'c';
	s1 += c;
	cout << "s1 = " << s1 << endl;
	
	string s2 = "s2";
	s2 += s1;
	cout << "s2 = " << s2 << endl;
	
	string s3 = "s3";
	s3.append(str);
	cout << "s3 = " << s3 << endl;
	
	s3.append(str,3); // const char *str
	cout << "s3 = " << s3 << endl;
	
	s3.append(s1);
	cout << "s3 = " << s3 << endl;
	
	string s4 = "s4";
	s4.append(s3,0,3);
	cout << "s4 = " << s4 << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


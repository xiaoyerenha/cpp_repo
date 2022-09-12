/*
    Name:string赋值操作 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 16:42:58
    Description:
*/

//string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
//string& operator=(const string &s); //把字符串s赋给当前的字符串
//string& operator=(char c); //字符赋值给当前的字符串
//string& assign(const char *s); //把字符串s赋给当前的字符串
//string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string &s); //把字符串s赋给当前字符串
//string& assign(int n, char c); //用n个字符c赋给当前字符串

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	const char* s = "hello";
	string s1 = s;
	cout << "s1 = " << s1 << endl;
	
	string s2 = s1;
	cout << "s2 = " << s2 << endl;
	
	//char c = 'h'; 报错 
//	string s3 = c;
//	cout << "s3 = " << s3 << endl;
	
	const char* s3 = "hellonew";
	string s4;
	s4.assign(s3);
	cout << "s4 = " << s4 << endl; 
	
	s4.assign(s3,5);
	cout << "s4 = " << s4 << endl;
	
	s4.assign(s2);
	cout << "s4 = " << s4 << endl; 
	
	s4.assign(5,'f');
	cout << "s4 = " << s4 << endl;
	
} 

int main()
{
    test01();
    
    return 0;
}


/*
    Name:string查找和替换 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 17:37:37
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
//int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
//int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
//int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
//int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
//int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
//int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n,const char* s); //替换从pos开始的n个字符为字符串s

//find查找是从左往后，rfind从右往左
//find找到字符串后返回查找的第一个字符位置，找不到返回-1
//replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串

void test01() {
	
	string s1 = "zxcvbnm";
	string str = "cv";
	int ret = s1.find(str,1);
	cout << ret << endl;
	
	const char* s = "bnm";
	ret = s1.find(s);
	cout << ret << endl;
	
	string s2 = "bnmvbnm";
	ret = s2.find(s,0,1);//从pos位置查找s的前n个字符第一次位置
	cout << ret << endl;
	
	char c = 'n';
	ret = s2.find(c,2);
	cout << ret << endl;
	
	ret = s2.rfind(str);
	cout << ret << endl;
	
} 

void test02() {
	
	string str1 = "shj";
	const char* s= "111";
	string str2 = "zxcvbnm";
	
	str2.replace(1,3,str1);
	cout << str2 << endl;
	
	str2.replace(0,2,s);
	cout << str2 << endl;
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


/*
    Name:string字符串比较 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:16:53
    Description:
*/

//字符串比较是按字符的ASCII码进行对比
//= 返回 0
//> 返回 1
//< 返回 -1

//int compare(const string &s) const; //与字符串s比较
//int compare(const char *s) const; //与字符串s比较

//字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string s1 = "zhello";
	string s2 = "hello";
	
	int ret = s1.compare(s2);
	
	if(ret == 0) {
		cout << "s1 == s2" << endl;
	}
	else if(ret > 0) {
		cout << "s1 > s2" << endl;
	}
	else {
		cout << "s1 < s2" << endl;
	}
	
} 

int main()
{
    test01();
    
    return 0;
}


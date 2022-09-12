/*
    Name:string字符存取 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:21:58
    Description:
*/

//char& operator[](int n); //通过[]方式取字符
//char& at(int n); //通过at方法获取字符

//string字符串中单个字符存取有两种方式，利用 [ ] 或 at

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string str = "zxcvbn";
	
	for(int i=0;i<str.size();i++) {
		cout << str[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<str.size();i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;
	
	//字符修改
	str[0] = 'x';
	str.at(1) = 'o';
	cout << str << endl; 
} 

int main()
{
    test01();
    
    return 0;
}


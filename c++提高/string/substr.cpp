/*
    Name:string�Ӵ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:32:55
    Description:
*/

//string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string str = "asdfghj";
	
	string substr = str.substr(1,3);
	cout << "substr = " << substr << endl;
	
	//ʵ��Ӧ��
	string email = "zhangsan@163.com";
	int pos = email.find('@');
	string username = email.substr(0,pos);
	cout << "username = " << username << endl; 
	
} 

int main()
{ 
    test01();
    
    return 0;
}


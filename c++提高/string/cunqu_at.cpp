/*
    Name:string�ַ���ȡ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:21:58
    Description:
*/

//char& operator[](int n); //ͨ��[]��ʽȡ�ַ�
//char& at(int n); //ͨ��at������ȡ�ַ�

//string�ַ����е����ַ���ȡ�����ַ�ʽ������ [ ] �� at

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
	
	//�ַ��޸�
	str[0] = 'x';
	str.at(1) = 'o';
	cout << str << endl; 
} 

int main()
{
    test01();
    
    return 0;
}


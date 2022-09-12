/*
    Name:string��������͹��캯�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 16:28:10
    Description:
*/

//string��C++�����ַ�������string��������һ����

//char *��һ��ָ��
//string��һ���࣬���ڲ���װ��char *����������ַ�������һ��char *�͵�����
//string���ڲ���װ�˺ܶ��Ա������find, copy, delete, replace, insert
//string����char *��������ڴ棬�����ڲ����и���

//string���캯��
//string(); //����һ���յ��ַ��� ����: string str;
//string(const char* s); //ʹ���ַ���s��ʼ��
//string(const string& str); //ʹ��һ��string�����ʼ����һ��string����
//string(int n, char c); //ʹ��n���ַ�c��ʼ�� 
 

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


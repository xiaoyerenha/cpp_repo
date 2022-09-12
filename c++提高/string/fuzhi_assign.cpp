/*
    Name:string��ֵ���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 16:42:58
    Description:
*/

//string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string &s); //���ַ���s������ǰ���ַ���
//string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
//string& assign(const char *s); //���ַ���s������ǰ���ַ���
//string& assign(const char *s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string &s); //���ַ���s������ǰ�ַ���
//string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	const char* s = "hello";
	string s1 = s;
	cout << "s1 = " << s1 << endl;
	
	string s2 = s1;
	cout << "s2 = " << s2 << endl;
	
	//char c = 'h'; ���� 
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


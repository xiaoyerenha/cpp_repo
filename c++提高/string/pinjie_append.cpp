/*
    Name:string�ַ���ƴ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 17:16:48
    Description:
*/

//string& operator+=(const char* str); //����+=������
//string& operator+=(const char c); //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string &s); //ͬoperator+=(const string& str)
//string& append(const string &s, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

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


/*
    Name:string�����ɾ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:27:07
    Description:
*/

//string& insert(int pos, const char* s); //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�

//�����ɾ������ʼ�±궼�Ǵ�0��ʼ

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string str = "cvbn";
	const char* s = "dfg";
	string ss = "er";
	
	str.insert(1,s);
	cout << "str = " << str << endl;
	
	str.insert(0,ss);
	cout << "str = " << str << endl;
	
	str.insert(3,5,'p');
	cout << "str = " << str << endl;
	
	str.erase(3,3);
	cout << "str = " << str << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


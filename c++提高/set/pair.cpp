/*
    Name:pair���鴴�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 11:07:26
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//�ɶԳ��ֵ����ݣ����ö�����Է�����������

//���ִ�����ʽ��
//pair<type, type> p ( value1, value2 );
//pair<type, type> p = make_pair( value1, value2 );

void test01() {
	
	pair<string,int> p("����",10);
	
	cout << "��һ����" << p.first << " �ڶ�����" << p.second << endl;
	
	pair<string,int> p2 = make_pair("����",20);
	
	cout << "��һ����" << p2.first << " �ڶ�����" << p2.second << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


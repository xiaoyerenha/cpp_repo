/*
    Name:list���ݴ�ȡ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 22:16:06
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//front(); //���ص�һ��Ԫ�ء�
//back(); //�������һ��Ԫ�ء� 

//�ܽ᣺
//list�����в�����ͨ��[]����at��ʽ��������
//���ص�һ��Ԫ�� --- front
//�������һ��Ԫ�� --- back

void test01() {
	
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);
	
	//cout << l.at(0) << endl;//���� ��֧��at��������
	//cout << l[0] << endl; //���� ��֧��[]��ʽ��������
	cout << "��һ��Ԫ�أ�" << l.front() << endl;
	cout << "���һ��Ԫ�أ�" << l.back() << endl;
	
	//list�����ĵ�������˫�����������֧���������
	list<int>::iterator it = l.begin();
	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1 
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:deque���ݴ�ȡ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 16:28:00
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>

//at(int idx); //��������idx��ָ������
//operator[]; //��������idx��ָ������
//front(); //���������е�һ������Ԫ��
//back(); //�������������һ������Ԫ��

//�ܽ�
//�����õ�������ȡdeque������Ԫ�أ�[ ]��atҲ����
//front����������һ��Ԫ��
//back�����������һ��Ԫ�� 

void test01() {
	
	deque<int> d;
	
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);
	d.push_back(400);
	d.push_back(500);
	
	for(int i=0;i<d.size();i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<d.size();i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;
	
	cout << "�����е�һ��Ԫ�أ�" << d.front() << endl;
	cout << "���������һ��Ԫ�أ�" << d.back() << endl;
	
}


int main()
{
    test01();
    
    return 0;
}


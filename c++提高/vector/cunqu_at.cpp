/*
    Name:vector���ݴ�ȡ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:15:55
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//at(int idx); //��������idx��ָ������
//operator[]; //��������idx��ָ������
//front(); //���������е�һ������Ԫ��
//back(); //�������������һ������Ԫ��

//�ܽ�
//�����õ�������ȡvector������Ԫ�أ�[ ]��atҲ����
//front����������һ��Ԫ��
//back�����������һ��Ԫ�� 

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	for(int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<v.size();i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;
	
	cout << "������һ������Ԫ�أ�" << v.front() << endl;
	cout << "�������һ������Ԫ�أ�" << v.back() << endl;
} 

int main()
{
    test01();
    
    return 0;
}


/*
    Name:vector�����ʹ�С 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 20:46:31
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//empty(); //�ж������Ƿ�Ϊ��
//capacity(); //����������
//size(); //����������Ԫ�صĸ���
//resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

//�ܽ� 
//�ж��Ƿ�Ϊ�� --- empty
//����Ԫ�ظ��� --- size
//������������ --- capacity
//����ָ����С --- resize

void printVector(vector<int> &v) {
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	
	if(v.empty()) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "������Ϊ��" << endl;
	}
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	cout << "������������" << v.capacity() << endl;
	cout << "������Ԫ�ظ�����" << v.size() << endl;
	
	printVector(v);
	v.resize(20,99);
	printVector(v);
	
	v.resize(8);
	printVector(v);
	
} 

int main()
{
    test01();
    
    return 0;
}


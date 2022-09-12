/*
    Name:vector�������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:23:19
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector> 

//swap(vec); // ��vec�뱾���Ԫ�ػ���

//�ܽ᣺swap����ʹ�����������������Դﵽʵ�õ������ڴ�Ч��

void printVector(vector<int> &v) {
	for(int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;	
}

void test01() {
	
	vector<int> v1;
	for(int i=0;i<10;i++) {
		v1.push_back(i);
	}
	
	vector<int> v2;
	for(int i=10;i>0;i--) {
		v2.push_back(i);
	}
	
	cout << "����ǰ��" << endl;
	printVector(v1);
	printVector(v2); 
	v1.swap(v2); 
	cout << "������" << endl;
	printVector(v1);
	printVector(v2); 
	
}

void test02() {
	
	vector<int> v;
	for(int i=0;i<100000;i++) {
		v.push_back(i);
	}
	
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	
	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	
	//�����ڴ�
	vector<int>(v).swap(v);//��������
	
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl; 
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


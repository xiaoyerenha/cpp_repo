/*
    Name:vector������������������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/22 22:52:15
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //��׼�㷨ͷ�ļ� 

//������vector
//�㷨��for_each
//��������vector<int>::iterator 

void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	
	//����һ��vector���������� 
	vector<int> v;
	
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40); 
	
//	//ͨ����������������������
//	vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ������ĵ�һ��λ�� 
//	vector<int>::iterator itEnd = v.end();  //���������� ָ����������һ��λ�õ���һ��λ��
//	
//	//��һ�ֱ�����ʽ 
//	while(itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	} 
	
//	//�ڶ��ֱ�����ʽ
//	for(vector<int>::iterator it=v.begin();it<v.end();it++) {
//		cout << *it << endl;
//	} 
	
	//�����ֱ�����ʽ  ����STL�ṩ�����㷨
	for_each(v.begin(),v.end(),myPrint); 
	 
}

int main()
{
    test01();
    
    return 0;
}


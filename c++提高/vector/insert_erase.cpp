/*
    Name:vector�����ɾ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:01:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//push_back(ele); //β������Ԫ��ele
//pop_back(); //ɾ�����һ��Ԫ��
//insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos, int count,ele); //������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos); //ɾ��������ָ���Ԫ��
//erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
//clear(); //ɾ������������Ԫ��

//�ܽ�
//β�� --- push_back
//βɾ --- pop_back
//���� --- insert (λ�õ�����)
//ɾ�� --- erase ��λ�õ�������
//��� --- clear 

void printVector(vector<int> &v) {
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	
	//β�� 
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	printVector(v);
	//βɾ 
	v.pop_back();
	printVector(v);
	
	//����
	v.insert(v.begin(),100);
	printVector(v); 
	
	v.insert(v.begin(),2,100);
	printVector(v); 
	
	//ɾ��
	v.erase(v.begin());
	printVector(v);
	
	//���
	v.erase(v.begin(),v.end());
	v.clear();
	printVector(v); 
	 
	
}

int main()
{
    test01();
    
    return 0;
}


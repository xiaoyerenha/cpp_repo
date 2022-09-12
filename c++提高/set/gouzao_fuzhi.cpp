/*
    Name:set����͸�ֵ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 9:53:22
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
	//����Ԫ�ض����ڲ���ʱ�Զ�������
	
//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ�� 

//set<T> st; //Ĭ�Ϲ��캯����
//set(const set &st); //�������캯��
//set& operator=(const set &st); //���صȺŲ�����

//�ܽ᣺
//set������������ʱ��insert
//set�����������ݵ����ݻ��Զ�����

void printSet(set<int> &s) {
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
} 

void test01() {
	
	set<int> s1;
	
	//set����ֻ�� insert 
	s1.insert(10);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40); 
	
	printSet(s1);
	
	//�������� 
	set<int> s2(s1);
	printSet(s2);
	
	//��ֵ 
	set<int> s3;
	s3 = s2;
	printSet(s3);
}


int main()
{
    test01();
    
    return 0;
}


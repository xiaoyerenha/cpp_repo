/*
    Name:set�����ɾ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:12:22
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//insert(elem); //�������в���Ԫ�ء�
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(elem); //ɾ��������ֵΪelem��Ԫ�ء� 

//�ܽ�
//���� --- insert
//ɾ�� --- erase
//��� --- clear 

void printSet(set<int> &s) {
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	set<int> s;
	
	s.insert(10);
	s.insert(40);
	s.insert(20);
	s.insert(30);
	
	printSet(s);
	
	//ɾ��
	s.erase(s.begin());
	printSet(s); 
	
	s.erase(30);
	printSet(s); 
	
	//���
	//s.erase(s.begin(),s.end());
	s.clear();
	printSet(s);  
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:set��С�ͽ��� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:02:33
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������

//�ܽ᣺
//ͳ�ƴ�С --- size
//�ж��Ƿ�Ϊ�� --- empty
//�������� --- swap

void printSet(set<int> &s) {
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	set<int> s1;
	
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	
	if(s1.empty()) {
		cout << "s1Ϊ��" << endl;
	}
	else {
		cout << "s1��Ϊ��" << endl;
		cout << "s1��Ԫ�ظ�����" << s1.size() << endl;
	}
	
	set<int> s2;
	
	s2.insert(100);
	s2.insert(400);
	s2.insert(300);
	s2.insert(200);
	
	cout << "����ǰ:" << endl;
	printSet(s1);
	printSet(s2);
	
	s1.swap(s2);
	cout << "������:" << endl;
	printSet(s1);
	printSet(s2);
 
}

int main()
{
    test01();
    
    return 0;
}


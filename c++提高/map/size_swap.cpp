/*
    Name:map��С�ͽ��� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 20:55:13
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������

//�ܽ᣺
//ͳ�ƴ�С --- size
//�ж��Ƿ�Ϊ�� --- empty
//�������� --- swap

void printMap(map<int,int> &m) {
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	
	map<int,int> m;
	
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(4,40));
	
	if(m.empty()) {
		cout << "mΪ��" << endl;
	}
	else {
		cout << "m��Ϊ��" << endl;
		cout << "�����е�Ԫ�ظ�����" << m.size() << endl;
	}
	
}

void test02() {
	
	map<int,int> m1;
	
	m1.insert(make_pair(1,10));
	m1.insert(make_pair(2,20));
	m1.insert(make_pair(3,30));
	m1.insert(make_pair(4,40));
	
	map<int,int> m2;
	
	m2.insert(make_pair(10,100));
	m2.insert(make_pair(20,200));
	m2.insert(make_pair(30,300));
	m2.insert(make_pair(40,400));
	
	cout << "����ǰ��" << endl;
	printMap(m1);
	printMap(m2);
	
	cout << "������" << endl;
	m1.swap(m2); 
	printMap(m1);
	printMap(m2); 
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


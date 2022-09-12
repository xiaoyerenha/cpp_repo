/*
    Name:find_if 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:06:42
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//����������Ԫ��

//find_if(iterator beg, iterator end, _Pred);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ��������ν�ʣ�����bool���͵ķº�����

//�ܽ᣺find_if����������ʹ���Ҹ������ṩ�ķº������Ըı䲻ͬ�Ĳ���

class Greater5 {
	public:
		bool operator()(int val) {
			return val > 5;
		}
};

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int>::iterator pos = find_if(v.begin(),v.end(),Greater5());
	
	if(pos != v.end()) {
		cout << "�ҵ��ˣ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
}

class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		string m_Name;
		int m_Age;
};

class Greater15 {
	public:
		bool operator()(const Person &p) {
			return p.m_Age > 15;
		}
};

void test02() {
	
	vector<Person> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	
	vector<Person>::iterator pos = find_if(v.begin(),v.end(),Greater15());
	
	if(pos != v.end()) {
		cout << "�ҵ��ˣ�" << pos->m_Name << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


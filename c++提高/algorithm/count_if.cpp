/*
    Name:count_if
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 23:04:21
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//������ͳ��Ԫ�ظ���

//count_if(iterator beg, iterator end, _Pred);
// ������ͳ��Ԫ�س��ִ���
// beg ��ʼ������
// end ����������
// _Pred ν��

//�ܽ᣺��ֵͳ����count��������ͳ����count_if

//������������ 
class Greater20 {
	public:
		bool operator()(int val) {
			return val > 20;
		}
};

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	
	int num = count_if(v.begin(),v.end(),Greater20());
	cout << "num = " << num << endl;
	
}

//�Զ�����������
class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		string m_Name;
		int m_Age;
};

class Greater25 {
	public:
		bool operator()(const Person &p) {
			return p.m_Age > 25;
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
	
	int num = count_if(v.begin(),v.end(),Greater25());
	cout << "num = " << num << endl;
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


/*
    Name:count
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:48:48
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//ͳ��Ԫ�ظ���

//count(iterator beg, iterator end, value);
// ͳ��Ԫ�س��ִ���
// beg ��ʼ������
// end ����������
// value ͳ�Ƶ�Ԫ��

//�ܽ᣺ ͳ���Զ�����������ʱ����Ҫ������� operator==

//������������ 
void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	int num = count(v.begin(),v.end(),10);
	cout << "num = " << num << endl;
	
}

//�Զ�����������
class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		bool operator==(const Person &p) {
			if(this->m_Age == p.m_Age) {
				return true;
			}
			else {
				return false;
			}
		}
		
		string m_Name;
		int m_Age;
}; 

void test02() {
	
	vector<Person> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("aaa",20);
	Person p4("ccc",30);
	Person p5("aaa",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	
	Person p("aaa",20);
	
	int num = count(v.begin(),v.end(),p);
	cout << "num = " << num << endl;
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


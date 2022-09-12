/*
    Name:vector容器存放自定义数据类型
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/22 23:20:10
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

class Person {
	public:
		Person(string name, int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		string m_Name;
		int m_Age;
};

void test01() {
	
	vector<Person> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	
	for(vector<Person>::iterator it=v.begin();it<v.end();it++) {
		//cout << "姓名：" << (*it).m_Name << " 年龄："  << (*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << " 年龄："  << it->m_Age << endl;
	}
}

//存放自定义数据类型 指针
void test02() {
	
	vector<Person *> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	
	for(vector<Person *>::iterator it=v.begin();it<v.end();it++) {
		cout << "::姓名：" << (*it)->m_Name << " 年龄："  << (*it)->m_Age << endl;
	}
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


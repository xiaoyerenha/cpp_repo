/*
    Name:set容器排序_存放自定义数据类型 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 11:12:11
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set> 

//对于自定义数据类型，set必须指定排序规则才可以插入数据

class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		string m_Name;
		int m_Age;
}; 

class myCompare {
	public:
		bool operator()(const Person &p1,const Person &p2) { //加const 不可修改 
			return p1.m_Age > p2.m_Age;
		}
};


void test01() {
	
	set<Person,myCompare> s1;
	
	Person p1("张三",15);
	Person p2("李四",45);
	Person p3("王五",25);
	Person p4("赵六",35);
	
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	
	for(set<Person,myCompare>::iterator it=s1.begin();it!=s1.end();it++) {
		cout << "姓名：" <<  (*it).m_Name << " 年龄：" << it->m_Age << endl;
	}
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


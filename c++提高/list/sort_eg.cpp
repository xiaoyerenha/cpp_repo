/*
    Name:排序案例 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 22:30:23
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

//总结：
//对于自定义数据类型，必须要指定排序规则，否则编译器不知道如何进行排序
//高级排序只是在排序规则上再进行一次逻辑规则制定，并不复杂

class Person {
	public:
		Person(string name,int age,int len) {
			this->m_Name = name;
			this->m_Age = age;
			this->m_len = len;
		}
		
		string m_Name;
		int m_Age;
		int m_len;
};

void printPerson(const list<Person> &l) {
	
	for(list<Person>::const_iterator it=l.begin();it!=l.end();it++) {
		cout << (*it).m_Name << "   " << (*it).m_Age << "   " << (*it).m_len << endl;
	}
}

bool myCompare(Person &p1, Person &p2) {
	if(p1.m_Age == p2.m_Age) {
		return p1.m_len > p2.m_len;
	}
	else {
		return p1.m_Age < p2.m_Age;
	}
} 

void test01() {
	
	list<Person> l_p;
	
	Person p1("aaa",12,150);
	Person p2("bbb",42,175);
	Person p3("ccc",22,189);
	Person p4("ddd",31,165);
	Person p5("eee",22,167);
	
	l_p.push_back(p1);
	l_p.push_back(p2);
	l_p.push_back(p3);
	l_p.push_back(p4);
	l_p.push_back(p5);
	
	cout << "排序前：" << endl;
	printPerson(l_p);
	
	cout << "排序后：" << endl;
	l_p.sort(myCompare);
	printPerson(l_p);
	
}

int main()
{
    test01();
    
    return 0;
}


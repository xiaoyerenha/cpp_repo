/*
    Name:类模板 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 14:54:01
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//建立一个通用类，类中的成员数据类型可以不具体指定，用一个虚拟的类型来代表

template<class NameType, class AgeType>
class Person {
	public:
		
		Person(NameType name, AgeType age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		void showPerson() {
			cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
		}
		
		NameType m_Name;
		AgeType m_Age;
}; 

void test01() {
	Person<string,int> p1("张三",12);
	p1.showPerson();
}

int main()
{
    test01();
    
    return 0;
}


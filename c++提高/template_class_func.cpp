/*
    Name:类模板与函数模板的区别 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:00:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数

template<class NameType, class AgeType = int>
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

void test02() {
	Person<string> p2("李四",16);
	p2.showPerson();
}

int main()
{
    test02();
    
    return 0;
}


/*
    Name:类模板分文件编写 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 20:14:48
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到 
//#include "person.h"

//1.直接包含 .cpp 源文件
//#include "person.cpp" 
//2.将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件 
#include "person.hpp" 

//template<class T1, class T2>
//class Person {
//	public:
//		Person(T1 name, T2 age);
//		void showPerson();
//		
//		T1 m_Name;
//		T2 m_Age;
//};

//template<class T1, class T2> 
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age; 
//}
//
//template<class T1, class T2> 
//void Person<T1, T2>::showPerson() {
//	cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
//} 

void test01() {
	Person<string,int> p("jerry",20);
	p.showPerson();
}

int main()
{
    test01();
    
    return 0;
}


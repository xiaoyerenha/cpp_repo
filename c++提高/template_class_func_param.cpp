/*
    Name:类模板对象做函数参数 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:19:07
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<typeinfo>

//类模板实例化出的对象，向函数传参的方式
//三种传入方式：
//1.指定传入的类型：直接显示对象的数据类型【常用】 
//2.参数模板化：将对象的参数变为模板进行传递
//3.整个类模板化：将这个对象类型模板化进行传递 

template<class NameType, class AgeType>
class Person {
	public:
		Person(NameType name, AgeType age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		NameType m_Name;
		AgeType m_Age;
};

//指定传入的类型 
void printPerson1(Person<string,int> &p) {
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}
void test01() {
	Person<string,int> p("张三",19);
	printPerson1(p);
}

//参数模板化
template<class T1, class T2> 
void printPerson2(Person<T1,T2> &p) {
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
	cout << "T1的类型：" << typeid(T1).name() << endl;
	cout << "T2的类型：" << typeid(T2).name() << endl;
}
void test02() {
	Person<string,int> p("李四",20);
	printPerson2(p);
}

//整个类模板化
template<class T> 
void printPerson3(T &p) {
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
	cout << "T的类型：" << typeid(T).name() << endl;
}
void test03() {
	Person<string,int> p("王五",30);
	printPerson3(p);
}

int main()
{
    test01();//指定传入的类型 
    test02(); //参数模板化
    test03(); //整个类模板化
    
    return 0;
}


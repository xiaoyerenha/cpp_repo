/*
    Name:��ģ����ļ���д 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 20:14:48
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ��� 
//#include "person.h"

//1.ֱ�Ӱ��� .cpp Դ�ļ�
//#include "person.cpp" 
//2.��.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ� 
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
//	cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
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


/*
    Name:��ģ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 14:54:01
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//����һ��ͨ���࣬���еĳ�Ա�������Ϳ��Բ�����ָ������һ�����������������

template<class NameType, class AgeType>
class Person {
	public:
		
		Person(NameType name, AgeType age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		void showPerson() {
			cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
		}
		
		NameType m_Name;
		AgeType m_Age;
}; 

void test01() {
	Person<string,int> p1("����",12);
	p1.showPerson();
}

int main()
{
    test01();
    
    return 0;
}


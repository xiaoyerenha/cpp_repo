/*
    Name:��ģ���뺯��ģ������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:00:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ������б��п�����Ĭ�ϲ���

template<class NameType, class AgeType = int>
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

void test02() {
	Person<string> p2("����",16);
	p2.showPerson();
}

int main()
{
    test02();
    
    return 0;
}


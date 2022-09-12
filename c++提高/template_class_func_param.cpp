/*
    Name:��ģ��������������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:19:07
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<typeinfo>

//��ģ��ʵ�������Ķ����������εķ�ʽ
//���ִ��뷽ʽ��
//1.ָ����������ͣ�ֱ����ʾ������������͡����á� 
//2.����ģ�廯��������Ĳ�����Ϊģ����д���
//3.������ģ�廯���������������ģ�廯���д��� 

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

//ָ����������� 
void printPerson1(Person<string,int> &p) {
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}
void test01() {
	Person<string,int> p("����",19);
	printPerson1(p);
}

//����ģ�廯
template<class T1, class T2> 
void printPerson2(Person<T1,T2> &p) {
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
	cout << "T1�����ͣ�" << typeid(T1).name() << endl;
	cout << "T2�����ͣ�" << typeid(T2).name() << endl;
}
void test02() {
	Person<string,int> p("����",20);
	printPerson2(p);
}

//������ģ�廯
template<class T> 
void printPerson3(T &p) {
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
	cout << "T�����ͣ�" << typeid(T).name() << endl;
}
void test03() {
	Person<string,int> p("����",30);
	printPerson3(p);
}

int main()
{
    test01();//ָ����������� 
    test02(); //����ģ�廯
    test03(); //������ģ�廯
    
    return 0;
}


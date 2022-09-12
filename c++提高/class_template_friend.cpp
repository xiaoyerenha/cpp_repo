/*
    Name:��ģ������Ԫ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 20:36:43
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��ģ�������Ԫ���������ں�����ʵ�� 
//1.ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ���ɡ����á� 
//2.ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��� 

//�����ļ����Ϸ�
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1,T2> p) {
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}

//ͨ��ȫ�ֺ��� ��ӡ Person ��Ϣ 
template<class T1, class T2>
class Person {
	
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Person<T1,T2> p) {
		cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
	}
	
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson2<>(Person<T1,T2> p); 
	 
	public:
		Person(T1 name, T2 age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
	private:	
		T1 m_Name;
		T2 m_Age;
};

void test01() {
	Person<string,int> p("��ɯɯ",21);
	printPerson(p);
}

void test02() {
	Person<string,int> p("��˼˼",28);
	printPerson2(p);
}

int main()
{
    test01();
    test02(); 
    
    return 0;
}


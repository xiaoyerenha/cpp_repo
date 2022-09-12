/*
    Name:�̳��е�ͬ����Ա����
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 10:06:55
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		Base() {
			m_a = 100;
		}
		
		void func() {
			cout << "Base - func()����" << endl;
		}
		
		void func(int a) {
			cout << "Base - func(int a)����" << endl;
		}

		int m_a;
};

class Son : public Base {
	public:
		Son() {
			m_a = 200;
		}
		
		void func() {
			cout << "Son - func()����" << endl;
		}

		int m_a;
};

//ͬ����Ա���Դ��� 
void test01() {
	Son s;
	cout << "Son �� m_a = " <<  s.m_a << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ�������� 
	cout << "Base �� m_a = " <<  s.Base::m_a << endl;
}

//ͬ����Ա��������
void test02() {
	Son s;
	
	s.func(); //ֱ�ӵ��� �����������е�ͬ����Ա
	s.Base:: func(); //���ø�����ͬ����Ա��������Ҫ�������� 
	
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ������б����ص�ͬ����Ա��������Ҫ�������� 
	s.Base::func(100);
} 

int main() {
	
	//test01();
	test02();

	return 0;
}


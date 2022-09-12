/*
    Name:��̳��﷨ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 11:43:27
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base1 {
	public:
		Base1() {
			m_a = 100;
		}
		
		int m_a;
};

class Base2 {
	public:
		Base2() {
			m_a = 200;
		}
		
		int m_a;
};

//�﷨��class ������ : �̳з�ʽ  ����1, �̳з�ʽ ����2 ... 
class Son : public Base1, public Base2 {
	public:
		Son() {
			m_c = 300;
			m_d = 400;
		}
		
		int m_c;
		int m_d;
};

void test01() {
	Son s;
	cout << "sizeof Son = " << sizeof(s) << endl;
	//��̳���������������ͬ�������������ʹ��ʱ��Ҫ�������� 
	cout << "Base1::m_a = " << s.Base1::m_a << endl;
	cout << "Base2::m_a = " << s.Base2::m_a << endl;  
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:�̳з�ʽ
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/3 20:24:55
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		int m_a;
	protected:
		int m_b;
	private:
		int m_c;

};
//�����е�˽�������������ּ̳з�ʽ�����ɷ��� 
//�����̳У������й����������й�����
//			�����б����������б����� 
class Son1 : public Base {
	public:
		void func() {
			m_a = 10;
			m_b = 10;
			//m_c = 10;
		}
};
//�����̳У������й����������б�����
//			�����б����������б����� 
class Son2 : protected Base {
	public:
		void func() {
			m_a = 10;
			m_b = 10;
			//m_c = 10;
		}
};
//˽�м̳У������й�����������˽�У�
//			�����б�����������˽�С� 
class Son3 : private Base {
	public:
		void func() {
			m_a = 10;
			m_b = 10;
			//m_c = 10;
		}
};
class GrandSon3 : public Son3 {
	public:
		void func() {
			//m_a = 100;
			//m_b = 100;
			//m_c = 10;
		}
};

void test01() {
	Son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100;
	
	Son2 s2;
	//s2.m_a = 1000;
	//s2.m_b = 1000;
}

int main() {

	system("pause");
	return 0;
}


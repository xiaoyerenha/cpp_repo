/*
    Name:继承方式
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
//父类中的私有属性无论哪种继承方式都不可访问 
//公共继承：父类中公共，子类中公共；
//			父类中保护，子类中保护。 
class Son1 : public Base {
	public:
		void func() {
			m_a = 10;
			m_b = 10;
			//m_c = 10;
		}
};
//保护继承：父类中公共，子类中保护；
//			父类中保护，子类中保护。 
class Son2 : protected Base {
	public:
		void func() {
			m_a = 10;
			m_b = 10;
			//m_c = 10;
		}
};
//私有继承：父类中公共，子类中私有；
//			父类中保护，子类中私有。 
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


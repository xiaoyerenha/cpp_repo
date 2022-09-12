/*
    Name:继承中的对象模型 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/3 20:57:03
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

class Son : public Base {
	public:
		int m_d;
};

void test01() {
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了 
	cout << "size of = " << sizeof(Son) << endl; //16
}

int main()
{
    test01();
    
    
    return 0;
}


/*
    Name:纯虚函数和抽象类 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 11:23:31
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		//纯虚函数
		//只要有一个纯虚函数，这个类称为抽象类
		//抽象类特点：
		//1.无法实例化对象
		//2.子类必须重写父类中的纯虚函数，否则也属于抽象类 
		virtual void func() = 0;
};

class Son : public Base {
	public:
		void func() 
		{
			cout << "func函数调用" << endl;
		}
}; 

void test01() {
	//抽象类无法实例化对象 
	//Base b;
	//new Base;
	
	Son s; //子类必须重写父类中的纯虚函数，否则无法实例化对象
	
	Base * base = new Son;
	base->func();
	delete base; 
} 

int main()
{
    test01();
    
    return 0;
}


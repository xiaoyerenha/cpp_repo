/*
    Name:类模板中成员函数创建时机 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:07:23
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.普通类中的成员函数一开始就可以创建
//2.类模板中的成员函数在调用时才创建

class Person1 {
	public:
		void showPerson1() {
			cout << "Person1 show" << endl;
		}
}; 

class Person2 {
	public:
		void showPerson2() {
			cout << "Person2 show" << endl;
		}
}; 

template<class T>
class myClass {
	public:
		T obj;
		
		void func1() {
			obj.showPerson1();
		}
		void func2() {
			obj.showPerson2();
		}
};

void test01() {
	myClass<Person1> m;
	m.func1();//Person1 show
	//m.func2();//调用报错，func2只生成未创建 
	
}

int main()
{
    test01();
    
    return 0;
}


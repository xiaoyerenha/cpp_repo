#include<iostream>
using namespace std;


class  Person
{
public:
	
	//静态成员变量
	//1.所有对象都共享同一份数据
	//2.在编译阶段就分配内存
	//3.类内声明，类外初始化操作 
	static int m_a; 
	int m_c; //非静态成员变量 
	
	//静态成员函数
	//所有对象共享同一个函数
	//静态成员函数只能访问静态成员变量
	static void func()
	{
		m_a =  500;//静态成员函数可以访问 静态成员变量 
		//m_c = 666; 静态成员函数不可以访问 非静态成员变量 ，无法区分到底是哪个对象的 m_c 
		cout << "static void func调用" << endl;
	} 
	
	
private:
	//静态成员变量也是有访问权限的 
	static int m_b; 
	
	//静态成员函数也是有访问权限的 
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01()
{
	Person p;
	cout << p.m_a << endl;//100
	
	Person p2;
	p2.m_a = 200;
	
	cout << p.m_a << endl;//200
} 

void test02()
{
	//静态成员变量  不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	
	//1.通过对象进行访问
//	Person p;
//	cout << p.m_a << endl;
	 
	//2.通过类名进行访问 
	cout << Person::m_a << endl;
	//cout << Person::m_b << endl;  类外访问不到私有静态成员变量 
}

//静态成员函数的两种访问方式 
void test03()
{
	//1.通过对象访问
	Person p;
	p.func(); 
	
	//2.通过类名访问
	Person::func();
	
	//Person::func2(); 类外访问不到私有静态成员函数 
	 
}

int main()
{
	//test01();
	//test02();
	
	test03();
	
	system("pause");
	return 0;
}

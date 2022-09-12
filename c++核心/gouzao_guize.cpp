#include<iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类，c++编译器会给每个类都添加至少3个函数
//默认构造（空实现）
//析构函数（空实现）

//拷贝函数（值拷贝）

class Person
{
public:
	Person()
	{
		cout << "Person的无参（默认）构造函数" << endl;
	}
	Person(int a)
	{
		m_age = a;
		cout << "Person的有参构造函数" << endl;
	}
//	Person(const Person & p)
//	{
//		m_age = p.m_age;
//		cout << "Person的拷贝构造函数" << endl;
//    } 
	~Person()
	{
		cout << "Person的析构函数" << endl;
	}
	
	int m_age;
} ;

void test01()
{
	Person p1;
	p1.m_age = 10;
	
	Person p2(p1);
	
	cout << "p2的年龄为：" << p2.m_age << endl;	
	
}

//1.如果用户定义了有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造 
//2.如果用户定义拷贝构造函数，c++不会提供其他构造函数 
void test02()
{
	//Person p;
	
	Person p1(20);
	
	Person p2(p1);
	
	cout << "p2的年龄为：" << p2.m_age << endl;	
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

//this指针

class Person
{
public:
	Person(int age)
	{
		//age = age;
		this->age = age;//this指针指向被调用的成员函数 所属的对象 
	}
	
	Person& PersonAddAge(Person &p) // 引用方式返回，不会产生新对象 
	{
		this->age += p.age;
		
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this; 
	}
	
	int age;
};
//1.解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄：" << p1.age << endl;
}

//2.返回对象本身用 *this 
void test02()
{
	Person p1(10);
	
	Person p2(10);
	
	//p2.PersonAddAge(p1);
	//链式编程思想 
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄：" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

//类对象作为类成员    对象成员

//手机类 
class Phone
{
public:
	Phone(string pname)
	{
		name = pname;
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
		
	//手机品牌名称 
	string name;
};
//人类 
class Person
{
public:
	
	//Phone phone = pname  隐式转换法 
	Person(string rname, string pname):name(rname),phone(pname)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	
	//姓名
	string name; 
	//手机 
	Phone phone;
};

//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身 ，析构的顺序与构造相反 
void test()
{
	Person p("张三","苹果"); 
	
	cout << p.name << "拿着：" << p.phone.name <<endl;
}

int main()
{
	test();
	
	system("pause");
	return 0;
}

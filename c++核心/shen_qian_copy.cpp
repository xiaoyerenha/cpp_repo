#include<iostream>
using namespace std;

//深拷贝和浅拷贝

class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数调用" << endl; 
	}
	
	Person(int age, int height)
	{
		cout << "Person的有参构造函数调用" << endl; 
		
		m_age = age;
		m_height = new int(height);
	}	
	
	Person(const Person & p)
	{
		cout << "Person的拷贝构造函数调用" << endl; 
		
		m_age = p.m_age;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题 
		//m_height = p.m_height  编译器默认拷贝，是这行代码
		m_height = new int(*p.m_height); //浅拷贝的问题由深拷贝解决 
	}
	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if(m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		} 
		
		cout << "Person的析构函数调用" << endl; 
	}
	
	int m_age;
	int *m_height;
}; 

void test01()
{
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_age << " 身高为：" << *p1.m_height << endl;
	
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_age << " 身高为：" << *p2.m_height << endl;
}

int main()
{
	test01();
	
	system("pause");
	return 0;
}

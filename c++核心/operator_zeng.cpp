#include<iostream>
using namespace std;

//重载递增运算符

//自定义整型
class  MyInteger
{
	friend ostream & operator<<(ostream &out,MyInteger myinte);
	
public:
	MyInteger()
	{
		m_Num = 0;
	}	
	
	//重载前置++运算符
	MyInteger& operator++() //返回引用是为了一直对一个数据进行递增操作 
	{
		//先进行++运算 
		m_Num++;
		//再将自身做返回 
		return *this;
	}
	
	//重载后置++运算符 
	//void operator++(int)  int代表占位参数，可以用于区分前置和后置递增 
	MyInteger operator++(int) //返回值，避免非法操作，temp执行完就释放 
	{
		//先记录当前结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		//最后将记录结果做返回
		return temp; 
	}
	
	//重载前置--运算符 
	MyInteger& operator--() //返回引用是为了一直对一个数据进行递减操作 
	{
		//先进行--运算 
		m_Num--;
		//再将自身做返回 
		return *this;
	}
	
	//重载后置--运算符 
	//void operator--(int)  int代表占位参数，可以用于区分前置和后置递减
	MyInteger operator--(int) //返回值，避免非法操作，temp执行完就释放 
	{
		//先记录当前结果
		MyInteger temp = *this;
		//后递减
		m_Num--;
		//最后将记录结果做返回
		return temp; 
	}
	
private:
	int m_Num;
};

//重载<<运算符
ostream & operator<<(ostream &out,MyInteger myinte) //引用会导致重载后置递增时，对局部变量的引用 （后置返回 值） 
{
	out << myinte.m_Num;
	return out;
} 

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	
	cout << myint++ << endl;
	cout << myint << endl;
}

void test03()
{
	MyInteger myint;
	
	cout << --myint << endl;
	cout << myint << endl;
}

void test04()
{
	MyInteger myint;
	
	cout << myint-- << endl;
	cout << myint << endl;
}

int main()
{
	test01();
	//test02();
	//test03();
	//test04();
	
//	int a = 0;
//	
//	cout << ++(++a) << endl;
//	cout << a << endl;
	
	system("pause");
	return 0;
}

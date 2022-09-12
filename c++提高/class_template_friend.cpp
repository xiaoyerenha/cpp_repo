/*
    Name:类模板与友元 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 20:36:43
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//类模板配合友元函数的类内和类外实现 
//1.全局函数类内实现：直接在类内声明友元即可【常用】 
//2.全局函数类外实现：需要提前让编译器知道全局函数的存在 

//放在文件最上方
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1,T2> p) {
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

//通过全局函数 打印 Person 信息 
template<class T1, class T2>
class Person {
	
	//全局函数 类内实现
	friend void printPerson(Person<T1,T2> p) {
		cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
	}
	
	//全局函数 类外实现
	friend void printPerson2<>(Person<T1,T2> p); 
	 
	public:
		Person(T1 name, T2 age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
	private:	
		T1 m_Name;
		T2 m_Age;
};

void test01() {
	Person<string,int> p("张莎莎",21);
	printPerson(p);
}

void test02() {
	Person<string,int> p("李思思",28);
	printPerson2(p);
}

int main()
{
    test01();
    test02(); 
    
    return 0;
}


/*
    Name:��ģ���г�Ա��������ʱ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 15:07:23
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

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
	//m.func2();//���ñ���func2ֻ����δ���� 
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:���麯���ͳ����� 
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
		//���麯��
		//ֻҪ��һ�����麯����������Ϊ������
		//�������ص㣺
		//1.�޷�ʵ��������
		//2.���������д�����еĴ��麯��������Ҳ���ڳ����� 
		virtual void func() = 0;
};

class Son : public Base {
	public:
		void func() 
		{
			cout << "func��������" << endl;
		}
}; 

void test01() {
	//�������޷�ʵ�������� 
	//Base b;
	//new Base;
	
	Son s; //���������д�����еĴ��麯���������޷�ʵ��������
	
	Base * base = new Son;
	base->func();
	delete base; 
} 

int main()
{
    test01();
    
    return 0;
}


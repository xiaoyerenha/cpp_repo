/*
    Name:�̳��еĶ���ģ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/3 20:57:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		int m_a;
	protected:
		int m_b;
	private:
		int m_c;
};

class Son : public Base {
	public:
		int m_d;
};

void test01() {
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ�� 
	cout << "size of = " << sizeof(Son) << endl; //16
}

int main()
{
    test01();
    
    
    return 0;
}


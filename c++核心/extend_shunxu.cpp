/*
    Name:�̳��еĹ��������˳�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/3 21:19:14
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		Base() {
			cout << "Base�Ĺ��캯��" << endl;
		}
		~Base() {
			cout << "Base����������" << endl;
		}
};

class Son : public Base {
	public:
		Son() {
			cout << "Son�Ĺ��캯��" << endl;
		}
		~Son() {
			cout << "Son����������" << endl;
		}
};

void test01() {
	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�࣬�ٹ������࣬������˳���빹���˳���෴ 
	Son s;
}

int main()
{
    test01();
    
    return 0;
}


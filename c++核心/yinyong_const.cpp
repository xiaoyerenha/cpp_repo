#include<iostream>
using namespace std;

//����ʹ�õĳ�����ͨ�����������β�
void showValue(const int& v)
{
	//v = 1000;
	cout << "v = " << v << endl;
} 

int main()
{
	//int& ref = 10; ���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż����룬int temp = 10; const int& ref = temp;
	const int& ref = 10;
	
	//ref = 10; //����const�󲻿����޸ı���
	cout << ref << endl;
	
	//����������Ҫ���ã�
	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;
	showValue(a);
	
	cout << "a = " << a << endl; 
	
	system("pause");
	return 0;
}

/*
    Name:�̳��е�ͬ����̬��Ա���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 10:50:13
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Base {
	public:
		static int m_a;
		
		static void func() {
			cout << "Base - static void func()" << endl;
		} 
		static void func(int a) {
			cout << "Base - static void func(int a)" << endl;
		} 
};
int Base::m_a = 100;

class Son : public Base {
	public:
		static int m_a;
		
		static void func() {
			cout << "Son - static void func()" << endl;
		} 
};
int Son::m_a = 200;

//ͬ����̬��Ա���Դ��� 
void test01() {
	//1.ͨ��������� 
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << "Son �� m_a = " << s.m_a << endl;
	cout << "Base �� m_a = " << s.Base::m_a << endl;
	//2.ͨ���������� 
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son �� m_a = " << Son::m_a << endl;
	//��һ��::����ͨ��������ʽ����  �ڶ���::������ʸ����������� 
	cout << "Base �� m_a = " << Son::Base::m_a << endl;
}

//ͬ����̬��Ա�������� 
void test02() {
	//1.ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	s.func();
	s.Base::func();	
	//2.ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	Son::func();
	Son::Base::func(); 
	
	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б�����ͬ����Ա����Ҫ�������� 
	Son::Base::func(300);
}


int main()
{
    //test01(); 
    test02();
    
    return 0;
}


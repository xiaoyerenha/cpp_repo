#include<iostream>
using namespace std;

//������

class Person
{
public:
	Person()
	{
	}
	
	//�ڳ�Ա���������const,���ε���thisָ����ָ��ָ���ֵҲ�������޸� 
	void showPerson() const
	{
		//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ� 
		//Person * const this; //ָ�򲻿ɸ�
		//const Person * const this; //ֵҲ�����Ը� 
		//m_A = 100;   //this->m_A = 100
		//this = NULL; //thisָ�벻�����޸�ָ���ָ�� 
		
		this->m_B = 100; 
	}
	
	void func()
	{
		
	}
	
	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable 
};

void test01()
{
	Person p;
	p.showPerson();
} 

//������ 

void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;
	p.m_B = 200; //m_B������ֵ���ڳ�������Ҳ�����޸�
	
	//������ֻ�ܵ��ó�����
	p.showPerson(); 
	//p.func(); //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����� 
}

int main()
{
	test02();
	
	system("pause");
	return 0;
}

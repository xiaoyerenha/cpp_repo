#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1.����һ���࣬c++���������ÿ���඼�������3������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�

//����������ֵ������

class Person
{
public:
	Person()
	{
		cout << "Person���޲Σ�Ĭ�ϣ����캯��" << endl;
	}
	Person(int a)
	{
		m_age = a;
		cout << "Person���вι��캯��" << endl;
	}
//	Person(const Person & p)
//	{
//		m_age = p.m_age;
//		cout << "Person�Ŀ������캯��" << endl;
//    } 
	~Person()
	{
		cout << "Person����������" << endl;
	}
	
	int m_age;
} ;

void test01()
{
	Person p1;
	p1.m_age = 10;
	
	Person p2(p1);
	
	cout << "p2������Ϊ��" << p2.m_age << endl;	
	
}

//1.����û��������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ������� 
//2.����û����忽�����캯����c++�����ṩ�������캯�� 
void test02()
{
	//Person p;
	
	Person p1(20);
	
	Person p2(p1);
	
	cout << "p2������Ϊ��" << p2.m_age << endl;	
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	return 0;
}

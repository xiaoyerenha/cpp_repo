#include<iostream>
using namespace std;

//�����ǳ����

class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯������" << endl; 
	}
	
	Person(int age, int height)
	{
		cout << "Person���вι��캯������" << endl; 
		
		m_age = age;
		m_height = new int(height);
	}	
	
	Person(const Person & p)
	{
		cout << "Person�Ŀ������캯������" << endl; 
		
		m_age = p.m_age;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ������� 
		//m_height = p.m_height  ������Ĭ�Ͽ����������д���
		m_height = new int(*p.m_height); //ǳ������������������ 
	}
	~Person()
	{
		//�������룬�����������������ͷŲ���
		if(m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		} 
		
		cout << "Person��������������" << endl; 
	}
	
	int m_age;
	int *m_height;
}; 

void test01()
{
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_age << " ���Ϊ��" << *p1.m_height << endl;
	
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_age << " ���Ϊ��" << *p2.m_height << endl;
}

int main()
{
	test01();
	
	system("pause");
	return 0;
}

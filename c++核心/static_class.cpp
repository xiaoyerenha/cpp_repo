#include<iostream>
using namespace std;


class  Person
{
public:
	
	//��̬��Ա����
	//1.���ж��󶼹���ͬһ������
	//2.�ڱ���׶ξͷ����ڴ�
	//3.���������������ʼ������ 
	static int m_a; 
	int m_c; //�Ǿ�̬��Ա���� 
	
	//��̬��Ա����
	//���ж�����ͬһ������
	//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func()
	{
		m_a =  500;//��̬��Ա�������Է��� ��̬��Ա���� 
		//m_c = 666; ��̬��Ա���������Է��� �Ǿ�̬��Ա���� ���޷����ֵ������ĸ������ m_c 
		cout << "static void func����" << endl;
	} 
	
	
private:
	//��̬��Ա����Ҳ���з���Ȩ�޵� 
	static int m_b; 
	
	//��̬��Ա����Ҳ���з���Ȩ�޵� 
	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01()
{
	Person p;
	cout << p.m_a << endl;//100
	
	Person p2;
	p2.m_a = 200;
	
	cout << p.m_a << endl;//200
} 

void test02()
{
	//��̬��Ա����  ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	
	//1.ͨ��������з���
//	Person p;
//	cout << p.m_a << endl;
	 
	//2.ͨ���������з��� 
	cout << Person::m_a << endl;
	//cout << Person::m_b << endl;  ������ʲ���˽�о�̬��Ա���� 
}

//��̬��Ա���������ַ��ʷ�ʽ 
void test03()
{
	//1.ͨ���������
	Person p;
	p.func(); 
	
	//2.ͨ����������
	Person::func();
	
	//Person::func2(); ������ʲ���˽�о�̬��Ա���� 
	 
}

int main()
{
	//test01();
	//test02();
	
	test03();
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

//�������Ϊ���Ա    �����Ա

//�ֻ��� 
class Phone
{
public:
	Phone(string pname)
	{
		name = pname;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
		
	//�ֻ�Ʒ������ 
	string name;
};
//���� 
class Person
{
public:
	
	//Phone phone = pname  ��ʽת���� 
	Person(string rname, string pname):name(rname),phone(pname)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	
	//����
	string name; 
	//�ֻ� 
	Phone phone;
};

//�������������Ϊ�����Ա������ʱ���ȹ���������ٹ������� ��������˳���빹���෴ 
void test()
{
	Person p("����","ƻ��"); 
	
	cout << p.name << "���ţ�" << p.phone.name <<endl;
}

int main()
{
	test();
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

//thisָ��

class Person
{
public:
	Person(int age)
	{
		//age = age;
		this->age = age;//thisָ��ָ�򱻵��õĳ�Ա���� �����Ķ��� 
	}
	
	Person& PersonAddAge(Person &p) // ���÷�ʽ���أ���������¶��� 
	{
		this->age += p.age;
		
		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this; 
	}
	
	int age;
};
//1.������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1�����䣺" << p1.age << endl;
}

//2.���ض������� *this 
void test02()
{
	Person p1(10);
	
	Person p2(10);
	
	//p2.PersonAddAge(p1);
	//��ʽ���˼�� 
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2�����䣺" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

//��Ա���� �� ��Ա���� �ֿ��洢
class  Person
{

	int m_a;//�Ǿ�̬��Ա����  ������Ķ�����
	
	static int m_b; //��̬��Ա����	�������������
	
	void func() {} //�Ǿ�̬��Ա����  �������������
	
	static void func2() {} //��̬��Ա����  ������������� 
};

int Person::m_b = 0; 

void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ�� 1
	//c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ 
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	//�Ǿ�̬��Ա���� ռ�ڴ棺4 
	cout << "size of p = " << sizeof(p) << endl;
} 

int main()
{
	//test01();
	test02();
	
	system("pause");
	return 0;
}

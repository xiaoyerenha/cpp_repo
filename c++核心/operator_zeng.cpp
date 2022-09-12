#include<iostream>
using namespace std;

//���ص��������

//�Զ�������
class  MyInteger
{
	friend ostream & operator<<(ostream &out,MyInteger myinte);
	
public:
	MyInteger()
	{
		m_Num = 0;
	}	
	
	//����ǰ��++�����
	MyInteger& operator++() //����������Ϊ��һֱ��һ�����ݽ��е������� 
	{
		//�Ƚ���++���� 
		m_Num++;
		//�ٽ����������� 
		return *this;
	}
	
	//���غ���++����� 
	//void operator++(int)  int����ռλ������������������ǰ�úͺ��õ��� 
	MyInteger operator++(int) //����ֵ������Ƿ�������tempִ������ͷ� 
	{
		//�ȼ�¼��ǰ���
		MyInteger temp = *this;
		//�����
		m_Num++;
		//��󽫼�¼���������
		return temp; 
	}
	
	//����ǰ��--����� 
	MyInteger& operator--() //����������Ϊ��һֱ��һ�����ݽ��еݼ����� 
	{
		//�Ƚ���--���� 
		m_Num--;
		//�ٽ����������� 
		return *this;
	}
	
	//���غ���--����� 
	//void operator--(int)  int����ռλ������������������ǰ�úͺ��õݼ�
	MyInteger operator--(int) //����ֵ������Ƿ�������tempִ������ͷ� 
	{
		//�ȼ�¼��ǰ���
		MyInteger temp = *this;
		//��ݼ�
		m_Num--;
		//��󽫼�¼���������
		return temp; 
	}
	
private:
	int m_Num;
};

//����<<�����
ostream & operator<<(ostream &out,MyInteger myinte) //���ûᵼ�����غ��õ���ʱ���Ծֲ����������� �����÷��� ֵ�� 
{
	out << myinte.m_Num;
	return out;
} 

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	
	cout << myint++ << endl;
	cout << myint << endl;
}

void test03()
{
	MyInteger myint;
	
	cout << --myint << endl;
	cout << myint << endl;
}

void test04()
{
	MyInteger myint;
	
	cout << myint-- << endl;
	cout << myint << endl;
}

int main()
{
	test01();
	//test02();
	//test03();
	//test04();
	
//	int a = 0;
//	
//	cout << ++(++a) << endl;
//	cout << a << endl;
	
	system("pause");
	return 0;
}

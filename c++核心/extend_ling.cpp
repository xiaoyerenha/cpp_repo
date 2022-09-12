/*
    Name:���μ̳� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 14:33:15
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//������ 
class Animal {
	public:
		int m_age;
	
};

//������̳� ������μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ ����� 
//����
//class Sheep : public Animal {};
class Sheep : virtual public Animal {}; 
//����
//class Tuo : public Animal {}; 
class Tuo : virtual public Animal {}; 
//������
class SheepTuo : public Sheep, public Tuo {}; 

void test01() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	
	//����1 �����μ̳У���������ӵ����ͬ���ݣ���Ҫ�������������� 
	cout << "Sheep::m_age = " << st.Sheep::m_age << endl;
	cout << "Tuo::m_age = " << st.Tuo::m_age << endl;
	
	//����2 m_age����ֻ��һ�ݼ��ɣ����μ̳е������������ݣ���Դ�˷�
	cout << "st.m_age = " << st.m_age << endl; 
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:�������ļ������ļ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/6 21:58:08
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<fstream>

class Person {
	public:
		
		char m_Name[64];
		int m_Age;
};

void test01() {
	//1.����ͷ�ļ�
	
	//2.����������
	ifstream ifs;
	
	//3.���ļ� ���ж��Ƿ�򿪳ɹ� 
	ifs.open("fstream_person.txt",ios::in | ios::binary);
	if(!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
	}
	
	//4.���ļ� 
	Person p;
	ifs.read((char *)&p,sizeof(Person));
	cout << "������ " << p.m_Name << "   ���䣺 " << p.m_Age << endl;
	
	//5.�ر��ļ� 
	ifs.close();
}

int main()
{
    test01();
    
    return 0;
}


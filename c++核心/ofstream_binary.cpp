/*
    Name:�������ļ���д�ļ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/6 21:42:20
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
	ofstream ofs("fstream_person.txt",ios::out | ios::binary); 
	
	//3.���ļ�
	//ofs.open("fstream_person.txt",ios::out | ios::binary);
	
	//4.д�ļ�
	Person p = {"����",18}; 
	ofs.write((const char *)&p,sizeof(Person));
	
	//5.�ر��ļ� 
	ofs.close();
}

int main()
{
    test01();
    
    return 0;
}


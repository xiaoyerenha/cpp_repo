/*
    Name:�ı��ļ���д�ļ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/6 20:49:25
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<fstream> 

void test01() {
	//1.����ͷ�ļ� fstream
	//2.����������
	ofstream ofs;
	//3.���ļ�
	ofs.open("ofstream_test.txt",ios::out);
	//4.д������
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	//5.�ر��ļ�
	ofs.close(); 
}

int main()
{
    test01();
    
    return 0;
}


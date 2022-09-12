/*
    Name:二进制文件：读文件 
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
	//1.包含头文件
	
	//2.创建流对象
	ifstream ifs;
	
	//3.打开文件 并判断是否打开成功 
	ifs.open("fstream_person.txt",ios::in | ios::binary);
	if(!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	
	//4.读文件 
	Person p;
	ifs.read((char *)&p,sizeof(Person));
	cout << "姓名： " << p.m_Name << "   年龄： " << p.m_Age << endl;
	
	//5.关闭文件 
	ifs.close();
}

int main()
{
    test01();
    
    return 0;
}


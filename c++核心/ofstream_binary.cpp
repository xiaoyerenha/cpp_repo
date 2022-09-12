/*
    Name:二进制文件：写文件 
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
	//1.包含头文件
	
	
	//2.创建流对象
	ofstream ofs("fstream_person.txt",ios::out | ios::binary); 
	
	//3.打开文件
	//ofs.open("fstream_person.txt",ios::out | ios::binary);
	
	//4.写文件
	Person p = {"张三",18}; 
	ofs.write((const char *)&p,sizeof(Person));
	
	//5.关闭文件 
	ofs.close();
}

int main()
{
    test01();
    
    return 0;
}


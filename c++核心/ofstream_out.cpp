/*
    Name:文本文件：写文件 
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
	//1.包含头文件 fstream
	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("ofstream_test.txt",ios::out);
	//4.写入内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	//5.关闭文件
	ofs.close(); 
}

int main()
{
    test01();
    
    return 0;
}


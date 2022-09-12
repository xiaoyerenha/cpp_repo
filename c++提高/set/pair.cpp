/*
    Name:pair对组创建 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 11:07:26
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//成对出现的数据，利用对组可以返回两个数据

//两种创建方式：
//pair<type, type> p ( value1, value2 );
//pair<type, type> p = make_pair( value1, value2 );

void test01() {
	
	pair<string,int> p("张三",10);
	
	cout << "第一个：" << p.first << " 第二个：" << p.second << endl;
	
	pair<string,int> p2 = make_pair("李四",20);
	
	cout << "第一个：" << p2.first << " 第二个：" << p2.second << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


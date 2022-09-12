/*
    Name:deque数据存取 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 16:28:00
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>

//at(int idx); //返回索引idx所指的数据
//operator[]; //返回索引idx所指的数据
//front(); //返回容器中第一个数据元素
//back(); //返回容器中最后一个数据元素

//总结
//除了用迭代器获取deque容器中元素，[ ]和at也可以
//front返回容器第一个元素
//back返回容器最后一个元素 

void test01() {
	
	deque<int> d;
	
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);
	d.push_back(400);
	d.push_back(500);
	
	for(int i=0;i<d.size();i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<d.size();i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;
	
	cout << "容器中第一个元素：" << d.front() << endl;
	cout << "容器中最后一个元素：" << d.back() << endl;
	
}


int main()
{
    test01();
    
    return 0;
}


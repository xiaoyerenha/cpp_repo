/*
    Name:vector数据存取 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:15:55
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//at(int idx); //返回索引idx所指的数据
//operator[]; //返回索引idx所指的数据
//front(); //返回容器中第一个数据元素
//back(); //返回容器中最后一个数据元素

//总结
//除了用迭代器获取vector容器中元素，[ ]和at也可以
//front返回容器第一个元素
//back返回容器最后一个元素 

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	for(int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<v.size();i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;
	
	cout << "容器第一个数据元素：" << v.front() << endl;
	cout << "容器最后一个数据元素：" << v.back() << endl;
} 

int main()
{
    test01();
    
    return 0;
}


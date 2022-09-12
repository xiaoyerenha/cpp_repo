/*
    Name:vector容器存放内置数据类型 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/22 22:52:15
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //标准算法头文件 

//容器：vector
//算法：for_each
//迭代器：vector<int>::iterator 

void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	
	//创建一个vector容器，数组 
	vector<int> v;
	
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40); 
	
//	//通过迭代器访问容器中数据
//	vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向数组的第一个位置 
//	vector<int>::iterator itEnd = v.end();  //结束迭代器 指向数组的最后一个位置的下一个位置
//	
//	//第一种遍历方式 
//	while(itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	} 
	
//	//第二种遍历方式
//	for(vector<int>::iterator it=v.begin();it<v.end();it++) {
//		cout << *it << endl;
//	} 
	
	//第三种遍历方式  利用STL提供遍历算法
	for_each(v.begin(),v.end(),myPrint); 
	 
}

int main()
{
    test01();
    
    return 0;
}


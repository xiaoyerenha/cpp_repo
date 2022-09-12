/*
    Name:vector插入和删除 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:01:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//push_back(ele); //尾部插入元素ele
//pop_back(); //删除最后一个元素
//insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
//insert(const_iterator pos, int count,ele); //迭代器指向位置pos插入count个元素ele
//erase(const_iterator pos); //删除迭代器指向的元素
//erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
//clear(); //删除容器中所有元素

//总结
//尾插 --- push_back
//尾删 --- pop_back
//插入 --- insert (位置迭代器)
//删除 --- erase （位置迭代器）
//清空 --- clear 

void printVector(vector<int> &v) {
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	
	//尾插 
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	printVector(v);
	//尾删 
	v.pop_back();
	printVector(v);
	
	//插入
	v.insert(v.begin(),100);
	printVector(v); 
	
	v.insert(v.begin(),2,100);
	printVector(v); 
	
	//删除
	v.erase(v.begin());
	printVector(v);
	
	//清空
	v.erase(v.begin(),v.end());
	v.clear();
	printVector(v); 
	 
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:vector容量和大小 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 20:46:31
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//empty(); //判断容器是否为空
//capacity(); //容器的容量
//size(); //返回容器中元素的个数
//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除

//总结 
//判断是否为空 --- empty
//返回元素个数 --- size
//返回容器容量 --- capacity
//重新指定大小 --- resize

void printVector(vector<int> &v) {
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	
	if(v.empty()) {
		cout << "容器为空" << endl;
	}
	else {
		cout << "容器不为空" << endl;
	}
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	cout << "容器的容量：" << v.capacity() << endl;
	cout << "容器的元素个数：" << v.size() << endl;
	
	printVector(v);
	v.resize(20,99);
	printVector(v);
	
	v.resize(8);
	printVector(v);
	
} 

int main()
{
    test01();
    
    return 0;
}


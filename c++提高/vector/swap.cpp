/*
    Name:vector互换容器 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 21:23:19
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector> 

//swap(vec); // 将vec与本身的元素互换

//总结：swap可以使两个容器互换，可以达到实用的收缩内存效果

void printVector(vector<int> &v) {
	for(int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;	
}

void test01() {
	
	vector<int> v1;
	for(int i=0;i<10;i++) {
		v1.push_back(i);
	}
	
	vector<int> v2;
	for(int i=10;i>0;i--) {
		v2.push_back(i);
	}
	
	cout << "交换前：" << endl;
	printVector(v1);
	printVector(v2); 
	v1.swap(v2); 
	cout << "交换后：" << endl;
	printVector(v1);
	printVector(v2); 
	
}

void test02() {
	
	vector<int> v;
	for(int i=0;i<100000;i++) {
		v.push_back(i);
	}
	
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
	
	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
	
	//收缩内存
	vector<int>(v).swap(v);//匿名对象
	
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl; 
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


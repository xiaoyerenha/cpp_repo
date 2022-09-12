/*
    Name:vector构造函数 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 17:14:46
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//vector<T> v; //采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
//vector(n, elem); //构造函数将n个elem拷贝给本身。
//vector(const vector &vec); //拷贝构造函数。

void printVector(vector<int> &v) {
	for(vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	printVector(v);
	
	vector<int> v2(v.begin(),v.end());
	printVector(v2);
	
	vector<int> v3(10,100);
	printVector(v3);
	
	vector<int> v4(v);
	printVector(v4);
	
}


int main()
{
    test01(); 
    
    return 0;
}


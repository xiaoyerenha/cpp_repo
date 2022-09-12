/*
    Name:deque赋值操作 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 15:55:43
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>

//deque& operator=(const deque &deq); //重载等号操作符
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。

void printDeque(const deque<int> &d) {
	
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
		cout << *it << " ";
	} 
	cout << endl;
}

void test01() {
	
	deque<int> d1;
	for(int i=0;i<10;i++) {
		d1.push_back(i);
	}
	printDeque(d1);
	
	deque<int> d2;
	d2 = d1;
	printDeque(d2);
	
	deque<int> d3;
	d3.assign(d2.begin(),d2.end());
	printDeque(d3);
	
	d3.assign(10,100);
	printDeque(d3);
	
}

int main()
{
    test01();
    
    return 0;
}


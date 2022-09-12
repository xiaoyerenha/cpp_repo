/*
    Name:deque排序 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 16:34:56
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//sort(iterator beg, iterator end) //对beg和end区间内元素进行排序

//总结：sort算法非常实用，使用时包含头文件 algorithm即可

void printDeque(const deque<int> &d) {
	
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	deque<int> d;
	
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	
	printDeque(d);
	cout << "排序后：" << endl;
	sort(d.begin(),d.end());
	printDeque(d); 
	
}

int main()
{
    test01();
    
    return 0;
}


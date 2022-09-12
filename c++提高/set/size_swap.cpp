/*
    Name:set大小和交换 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:02:33
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//size(); //返回容器中元素的数目
//empty(); //判断容器是否为空
//swap(st); //交换两个集合容器

//总结：
//统计大小 --- size
//判断是否为空 --- empty
//交换容器 --- swap

void printSet(set<int> &s) {
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	set<int> s1;
	
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	
	if(s1.empty()) {
		cout << "s1为空" << endl;
	}
	else {
		cout << "s1不为空" << endl;
		cout << "s1的元素个数：" << s1.size() << endl;
	}
	
	set<int> s2;
	
	s2.insert(100);
	s2.insert(400);
	s2.insert(300);
	s2.insert(200);
	
	cout << "交换前:" << endl;
	printSet(s1);
	printSet(s2);
	
	s1.swap(s2);
	cout << "交换后:" << endl;
	printSet(s1);
	printSet(s2);
 
}

int main()
{
    test01();
    
    return 0;
}


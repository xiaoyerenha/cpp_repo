/*
    Name:map大小和交换 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 20:55:13
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//size(); //返回容器中元素的数目
//empty(); //判断容器是否为空
//swap(st); //交换两个集合容器

//总结：
//统计大小 --- size
//判断是否为空 --- empty
//交换容器 --- swap

void printMap(map<int,int> &m) {
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	
	map<int,int> m;
	
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(4,40));
	
	if(m.empty()) {
		cout << "m为空" << endl;
	}
	else {
		cout << "m不为空" << endl;
		cout << "容器中的元素个数：" << m.size() << endl;
	}
	
}

void test02() {
	
	map<int,int> m1;
	
	m1.insert(make_pair(1,10));
	m1.insert(make_pair(2,20));
	m1.insert(make_pair(3,30));
	m1.insert(make_pair(4,40));
	
	map<int,int> m2;
	
	m2.insert(make_pair(10,100));
	m2.insert(make_pair(20,200));
	m2.insert(make_pair(30,300));
	m2.insert(make_pair(40,400));
	
	cout << "交换前：" << endl;
	printMap(m1);
	printMap(m2);
	
	cout << "交换后：" << endl;
	m1.swap(m2); 
	printMap(m1);
	printMap(m2); 
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


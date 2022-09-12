/*
    Name:set查找和统计 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:38:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数

//总结：
//查找 --- find （返回的是迭代器）
//统计 --- count （对于set，结果为0或者1）

void test01() {
	
	set<int> s;
	
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	
	set<int>::iterator pos = s.find(20);
	
	if(pos != s.end()) {
		cout << "找到元素：" << *pos << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}
	
	//统计
	int num = s.count(30);
	cout << "num = " << num << endl; 
}


int main()
{
    test01();
    
    return 0;
}


/*
    Name:map查找和统计 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 21:16:18
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数

//总结：
//查找 --- find （返回的是迭代器）
//统计 --- count （对于map，结果为0或者1）

void test01() {
	
	map<int,int> m;
	
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(4,40));
	m.insert(make_pair(5,50));
	
	map<int,int>::iterator pos = m.find(3);
	
	if(pos != m.end()) {
		cout << "找到 key = " << pos->first << " value = " << pos->second << endl;
	}
	else {
		cout << "未找到" << endl;
	}
	
	int cnt = m.count(4);
	cout << "key = 4的元素个数：" << cnt << endl;
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:adjacent_find
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:29:07
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//查找相邻重复元素

//adjacent_find(iterator beg, iterator end);
// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
// beg 开始迭代器
// end 结束迭代器

//总结：面试题中如果出现查找相邻重复元素，记得用STL中的adjacent_find算法

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);
	
	vector<int>::iterator pos = adjacent_find(v.begin(),v.end());
	
	if(pos != v.end()) {
		cout << "找到了：" << *pos << endl;
	}
	else {
		cout << "未找到" << endl;
	}
	
}

int main()
{
    test01();
    
    return 0;
}


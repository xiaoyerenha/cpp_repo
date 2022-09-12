/*
    Name:for_each
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:03:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//for_each(iterator beg, iterator end, _func);
// 遍历算法 遍历容器元素
// beg 开始迭代器
// end 结束迭代器
// _func 函数或者函数对象

//普通函数
void print01(int val) {
	cout << val << " ";
}
 
void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	for_each(v.begin(),v.end(),print01);
}

//仿函数
class print02 {
	public:
		void operator()(int val) {
			cout << val << " ";
		}
};

void test02() {
	
	vector<int> v;
	
	for(int i=10;i<20;i++) {
		v.push_back(i);
	}
	
	for_each(v.begin(),v.end(),print02());
	
} 

int main()
{
    //test01();
    test02();
    
    return 0;
}


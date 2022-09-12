/*
    Name:transform
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:10:05
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//搬运容器到另一个容器中

//transform(iterator beg1, iterator end1, iterator beg2, _func);
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象

//总结： 搬运的目标容器必须要提前开辟空间，否则无法正常搬运

class myTransform {
	public:
		int operator()(int val) {
			return val + 1;
		}
};

class myPrint {
	public:
		void operator()(int val) {
			cout << val << " ";
		}
};

void test01() {
	
	vector<int> v1;
	
	v1.push_back(50);
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(20);
	
	vector<int> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),myTransform());
	
	for_each(v2.begin(),v2.end(),myPrint());
	
}

int main()
{
    test01();
    
    return 0;
}


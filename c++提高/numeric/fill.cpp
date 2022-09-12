/*
    Name:fill
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:46:14
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//向容器中填充指定的元素

//fill(iterator beg, iterator end, value);
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值

//总结：利用fill可以将容器区间内元素填充为 指定的值

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	
	vector<int> v;
	
	v.resize(10);
	
	fill(v.begin(),v.end(),200);
	
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


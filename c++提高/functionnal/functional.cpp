/*
    Name:内建函数对象 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/21 21:05:01
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm> 

//STL内建了一些函数对象

//分类:
//算术仿函数
//关系仿函数
//逻辑仿函数

//用法：
//这些仿函数所产生的对象，用法和一般函数完全相同
//使用内建函数对象，需要引入头文件 #include<functional> 

//算术仿函数 
void test01() {
//	实现四则运算
//	其中negate是一元运算，其他都是二元运算

//	template<class T> T plus<T> //加法仿函数
//	template<class T> T minus<T> //减法仿函数
//	template<class T> T multiplies<T> //乘法仿函数
//	template<class T> T divides<T> //除法仿函数
//	template<class T> T modulus<T> //取模仿函数
//	template<class T> T negate<T> //取反仿函数

	negate<int> n;
	cout << "取反：" << n(5) << endl; 
	
	plus<int> p;
	cout << "加法：" << p(10,30) << endl;
	
}

//关系仿函数 
void test02() {
//	实现关系对比	
	
//	template<class T> bool equal_to<T> //等于
//	template<class T> bool not_equal_to<T> //不等于
//	template<class T> bool greater<T> //大于
//	template<class T> bool greater_equal<T> //大于等于
//	template<class T> bool less<T> //小于
//	template<class T> bool less_equal<T> //小于等于

//	总结：关系仿函数中最常用的就是greater<>大于
	
	vector<int> v;
	
	v.push_back(50);
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//逻辑仿函数 
void test03() {
//	实现逻辑运算
//
//	template<class T> bool logical_and<T> //逻辑与
//	template<class T> bool logical_or<T> //逻辑或
//	template<class T> bool logical_not<T> //逻辑非

	vector<bool> v1;
	
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);
	v1.push_back(false);
	
	for(vector<bool>::iterator it=v1.begin();it!=v1.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),logical_not<bool>());
	
	for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++) {
		cout << *it << " ";
	}
	cout << endl; 
}

int main()
{
    //test01();
    //test02();
    test03();
    
    return 0;
}


/*
    Name:set构造和赋值 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 9:53:22
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//set/multiset属于关联式容器，底层结构是用二叉树实现。
	//所有元素都会在插入时自动被排序
	
//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素 

//set<T> st; //默认构造函数：
//set(const set &st); //拷贝构造函数
//set& operator=(const set &st); //重载等号操作符

//总结：
//set容器插入数据时用insert
//set容器插入数据的数据会自动排序

void printSet(set<int> &s) {
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
} 

void test01() {
	
	set<int> s1;
	
	//set插入只有 insert 
	s1.insert(10);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40); 
	
	printSet(s1);
	
	//拷贝构造 
	set<int> s2(s1);
	printSet(s2);
	
	//赋值 
	set<int> s3;
	s3 = s2;
	printSet(s3);
}


int main()
{
    test01();
    
    return 0;
}


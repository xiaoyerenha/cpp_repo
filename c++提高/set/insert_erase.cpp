/*
    Name:set插入和删除 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:12:22
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//insert(elem); //在容器中插入元素。
//clear(); //清除所有元素
//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(elem); //删除容器中值为elem的元素。 

//总结
//插入 --- insert
//删除 --- erase
//清空 --- clear 

void printSet(set<int> &s) {
	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	set<int> s;
	
	s.insert(10);
	s.insert(40);
	s.insert(20);
	s.insert(30);
	
	printSet(s);
	
	//删除
	s.erase(s.begin());
	printSet(s); 
	
	s.erase(30);
	printSet(s); 
	
	//清空
	//s.erase(s.begin(),s.end());
	s.clear();
	printSet(s);  
	
}

int main()
{
    test01();
    
    return 0;
}


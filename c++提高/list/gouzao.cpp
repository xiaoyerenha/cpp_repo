/*
    Name:list基本概念和构造函数 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/10 23:02:39
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//将数据进行链式存储
//STL中的链表是一个双向循环链表
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器

//list的优点：
//采用动态存储分配，不会造成内存浪费和溢出
//链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
//list的缺点：
//链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大

//List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。

//总结：STL中List和vector是两个最常被使用的容器，各有优缺点

//list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
//list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//list(n,elem); //构造函数将n个elem拷贝给本身。
//list(const list &lst); //拷贝构造函数。

void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		
		cout << *it << " ";
	}
	cout << endl;
	
}

void test01() {
	
	list<int> l1;
	
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	printList(l1);
	
	list<int> l2(l1.begin(),l1.end());
	printList(l2);
	
	list<int> l3(5,10);
	printList(l3);
	
	list<int> l4(l3);
	printList(l4);
}
 

int main()
{
    test01();
    
    return 0;
}


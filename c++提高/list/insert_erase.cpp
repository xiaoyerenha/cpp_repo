/*
    Name:list插入和删除 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 21:45:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//push_back(elem);//在容器尾部加入一个元素
//pop_back();//删除容器中最后一个元素
//push_front(elem);//在容器开头插入一个元素
//pop_front();//从容器开头移除第一个元素
//insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
//insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();//移除容器的所有数据
//erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);//删除容器中所有与elem值匹配的元素。

//总结：
//尾插 --- push_back
//尾删 --- pop_back
//头插 --- push_front
//头删 --- pop_front
//插入 --- insert
//删除 --- erase
//移除 --- remove
//清空 --- clear


void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	list<int> l;
	
	//尾插 
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	
	//头插
	l.push_front(100);
	l.push_front(200); 
	l.push_front(300);
	
	printList(l);
	
	//尾删
	l.pop_back();
	
	//头删
	l.pop_front();
	printList(l);
	
	list<int>::iterator it = l.begin();
	l.insert(++it,150);
	printList(l); 
	
	l.insert(it,3,9);
	printList(l); 
	
	list<int> ll;
	ll.push_back(6000);
	ll.push_back(5000);
	ll.push_back(4000);
	
	l.insert(l.begin(),ll.begin(),ll.end());
	printList(l);
	
	l.erase(l.begin());
	printList(l);
	
	//l.clear();
	//l.erase(l.begin(),l.end());
	//printList(l);
	l.remove(4000);
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


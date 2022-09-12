/*
    Name:list反转和排序 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 22:20:41
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//reverse(); //反转链表
//sort(); //链表排序

//总结：
//反转 --- reverse
//排序 --- sort （成员函数）

void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		
		cout << *it << " ";
 	}
	cout << endl;
}

bool myCom(int a, int b) {
	return a > b;
}

void test01() {
	
	list<int> l;
	
	l.push_back(30);
	l.push_back(20);
	l.push_back(10);
	l.push_back(50);
	l.push_back(40);
	
	printList(l);
	
	l.reverse();
	printList(l);
	
	l.sort();//默认的排序规则 从小到大
	printList(l);
	
	l.sort(myCom);//指定规则，从大到小
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


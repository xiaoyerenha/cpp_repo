/*
    Name:list大小操作 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 21:33:17
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//size(); //返回容器中元素的个数
//empty(); //判断容器是否为空
//resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。

//总结：
//判断是否为空 --- empty
//返回元素个数 --- size
//重新指定个数 --- resize


void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	
	if(l.empty()) {
		cout << "容器为空" << endl;
	}
	else {
		cout << "容器不为空" << endl;
		cout << "容器元素个数：" << l.size() << endl;
	}
	
	l.resize(8);
	printList(l);
	
	l.resize(10,111);
	printList(l);
	
	l.resize(3);
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


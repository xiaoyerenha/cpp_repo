/*
    Name:list数据存取 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 22:16:06
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//front(); //返回第一个元素。
//back(); //返回最后一个元素。 

//总结：
//list容器中不可以通过[]或者at方式访问数据
//返回第一个元素 --- front
//返回最后一个元素 --- back

void test01() {
	
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);
	
	//cout << l.at(0) << endl;//错误 不支持at访问数据
	//cout << l[0] << endl; //错误 不支持[]方式访问数据
	cout << "第一个元素：" << l.front() << endl;
	cout << "最后一个元素：" << l.back() << endl;
	
	//list容器的迭代器是双向迭代器，不支持随机访问
	list<int>::iterator it = l.begin();
	//it = it + 1;//错误，不可以跳跃访问，即使是+1 
	
}

int main()
{
    test01();
    
    return 0;
}


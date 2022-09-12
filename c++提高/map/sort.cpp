/*
    Name:map容器排序 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 21:23:44
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//map容器默认排序规则为 按照key值进行 从小到大排序，利用仿函数，可以改变排序规则

//总结：
//利用仿函数可以指定map容器的排序规则
//对于自定义数据类型，map必须要指定排序规则,同set容器

class myCompare {
	public:
		bool operator()(int v1, int v2) {
			return v1 > v2;
		}
};

void printMap(map<int,int> &m) {
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	
	map<int,int> m;
	
	m.insert(make_pair(1,10));
	m.insert(make_pair(5,50));
	m.insert(make_pair(4,40));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	
	printMap(m);
	
	map<int,int,myCompare> m2;
	
	//m2 = m;//报错 
	
	m2.insert(make_pair(1,100));
	m2.insert(make_pair(5,500));
	m2.insert(make_pair(4,400));
	m2.insert(make_pair(2,200));
	m2.insert(make_pair(3,300));
	
	for(map<int,int,myCompare>::iterator it=m2.begin();it!=m2.end();it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


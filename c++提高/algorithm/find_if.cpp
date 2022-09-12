/*
    Name:find_if 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:06:42
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//按条件查找元素

//find_if(iterator beg, iterator end, _Pred);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）

//总结：find_if按条件查找使查找更加灵活，提供的仿函数可以改变不同的策略

class Greater5 {
	public:
		bool operator()(int val) {
			return val > 5;
		}
};

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int>::iterator pos = find_if(v.begin(),v.end(),Greater5());
	
	if(pos != v.end()) {
		cout << "找到了：" << *pos << endl;
	}
	else {
		cout << "未找到" << endl;
	}
	
}

class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		string m_Name;
		int m_Age;
};

class Greater15 {
	public:
		bool operator()(const Person &p) {
			return p.m_Age > 15;
		}
};

void test02() {
	
	vector<Person> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	
	vector<Person>::iterator pos = find_if(v.begin(),v.end(),Greater15());
	
	if(pos != v.end()) {
		cout << "找到了：" << pos->m_Name << endl;
	}
	else {
		cout << "未找到" << endl;
	}
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


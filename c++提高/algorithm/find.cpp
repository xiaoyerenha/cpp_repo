/*
    Name:find
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:25:00
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()

//find(iterator beg, iterator end, value);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素

//总结： 利用find可以在容器中找指定的元素，返回值是迭代器
//查找自定义类型时，需要重载== 

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int>::iterator it = find(v.begin(),v.end(),5);
	
	if(it != v.end()) {
		cout << "找到了：" << *it << endl;
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
		//重载== 
		bool operator==(const Person &p) {
			if(this->m_Age == p.m_Age) {
				return true;
			}
			else {
				return false;
			}
		}
		
		string m_Name;
		int m_Age;
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
	
	Person p("eee",20);
	
	vector<Person>::iterator it = find(v.begin(),v.end(),p);
	
	if(it != v.end()) {
		cout << "找到了：" << it->m_Name << endl;
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


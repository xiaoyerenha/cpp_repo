/*
    Name:count
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:48:48
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//统计元素个数

//count(iterator beg, iterator end, value);
// 统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// value 统计的元素

//总结： 统计自定义数据类型时候，需要配合重载 operator==

//内置数据类型 
void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	int num = count(v.begin(),v.end(),10);
	cout << "num = " << num << endl;
	
}

//自定义数据类型
class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
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
	Person p3("aaa",20);
	Person p4("ccc",30);
	Person p5("aaa",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	
	Person p("aaa",20);
	
	int num = count(v.begin(),v.end(),p);
	cout << "num = " << num << endl;
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


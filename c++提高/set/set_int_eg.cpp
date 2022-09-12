/*
    Name:set��������_��������������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 11:12:11
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set> 

//set����Ĭ���������Ϊ��С����
//���÷º��������Ըı��������

class myCompare {
	public:
		bool operator()(int v1,int v2) {
			return v1 > v2;
		}
};


void test01() {
	
	set<int> s1;
	
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	for(set<int>::iterator it=s1.begin();it!=s1.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	set<int,myCompare> s2;
	
	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	s2.insert(40);
	
	for(set<int,myCompare>::iterator it=s2.begin();it!=s2.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


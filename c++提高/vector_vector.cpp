/*
    Name:vector容器嵌套容器 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/22 23:36:28
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

void test01() {
	
	//加空格，否则容易引起歧义 
	vector< vector<int> > v;
	
	//创建小容器 
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	
	//向小容器中添加数据 
	for(int i=0;i<4;i++) {
		
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	} 
	
	//将小容器插入到大容器中 
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	
	//通过大容器，遍历所有数据 
	for(vector< vector<int> >::iterator it=v.begin();it<v.end();it++) {
		
		// (*it) --- 容器 vector<int> 
		for(vector<int>::iterator itin=(*it).begin();itin<(*it).end();itin++) {
			cout << *itin << " "; 
		}
		cout << endl;
	}

} 

int main()
{
    test01();
    
    return 0;
}


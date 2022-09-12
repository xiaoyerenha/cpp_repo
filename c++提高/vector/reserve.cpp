/*
    Name:vector预留空间 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 22:13:13
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector> 

//reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。

//总结：如果数据量较大，可以一开始利用reserve预留空间

void test01() {
	
	vector<int> v;
	
	//预留空间
	//v.reserve(100000);
	
	int num = 0;
	int* p = NULL;
	for(int i=0;i<100000;i++) {
		v.push_back(i);
		if(p != &v[0]) {
			p = &v[0];
			num++;
		}
	} 
	
	cout << "num:" << num << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


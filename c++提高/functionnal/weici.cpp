/*
    Name:ν�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/21 19:16:52
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//����bool���͵ķº�����Ϊν��
//���operator()����һ����������ô����һԪν��
//���operator()����������������ô������Ԫν��

class GreatFive {
	public:
		bool operator()(int val) {
			return val > 5;
		}
};

class myCompare {
	public:
		bool operator()(int v1,int v2) {
			return v1 > v2;
		}
};

//һԪν�� 
void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int>::iterator it = find_if(v.begin(),v.end(),GreatFive());
	
	if(it == v.end()) {
		cout << "δ�ҵ�" << endl;
	}
	else {
		cout << "�ҵ���" << *it << endl;
	}
	
}

//��Ԫν��
void test02() {
	
	vector<int> v;
	
	v.push_back(50);
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	
	sort(v.begin(),v.end());
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		
		cout << *it << " ";
	}
	cout << endl;
	
	cout << "====================" << endl;
	
	sort(v.begin(),v.end(),myCompare());
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		
		cout << *it << " ";
	}
	cout << endl;
} 

int main()
{
    //test01();
    test02();
    
    return 0;
}


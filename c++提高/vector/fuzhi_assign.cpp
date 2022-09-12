/*
    Name:vector��ֵ���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 17:29:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//vector& operator=(const vector &vec); //���صȺŲ�����
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������

void printVector(vector<int> &v) {
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v1;
	for(int i=0;i<10;i++) {
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int> v2;
	v2 = v1;
	printVector(v2);
	
	vector<int> v3;
	v3.assign(v1.begin(),v1.end());
	printVector(v3);
	
	v3.assign(10,100);
	printVector(v3);
} 

int main()
{
    test01();
    
    return 0;
}


/*
    Name:swap
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:34:53
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//��������������Ԫ��

//swap(container c1, container c2);
// ��������������Ԫ��
// c1����1
// c2����2

//�ܽ᣺swap��������ʱ��ע�⽻��������Ҫͬ������

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	
	vector<int> v1;
	vector<int> v2;
	
	for(int i=0;i<10;i++) {
		v1.push_back(i);
		v2.push_back(i+10);
	}
	
	cout << "����ǰ��" << endl;
	for_each(v1.begin(),v1.end(),myPrint);
	cout << endl;
	for_each(v2.begin(),v2.end(),myPrint);
	cout << endl;
	
	cout << "������" << endl;
	swap(v1,v2);
	for_each(v1.begin(),v1.end(),myPrint);
	cout << endl;
	for_each(v2.begin(),v2.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


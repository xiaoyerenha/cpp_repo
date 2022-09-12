/*
    Name:vector���캯�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 17:14:46
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>

//vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem); //���캯����n��elem����������
//vector(const vector &vec); //�������캯����

void printVector(vector<int> &v) {
	for(vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	vector<int> v;
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	printVector(v);
	
	vector<int> v2(v.begin(),v.end());
	printVector(v2);
	
	vector<int> v3(10,100);
	printVector(v3);
	
	vector<int> v4(v);
	printVector(v4);
	
}


int main()
{
    test01(); 
    
    return 0;
}


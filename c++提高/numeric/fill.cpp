/*
    Name:fill
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:46:14
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//�����������ָ����Ԫ��

//fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ

//�ܽ᣺����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	
	vector<int> v;
	
	v.resize(10);
	
	fill(v.begin(),v.end(),200);
	
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


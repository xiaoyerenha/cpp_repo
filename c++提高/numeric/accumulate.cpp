/*
    Name:accumulate
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:40:26
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector> 
#include<numeric>

//���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include <numeric>

//���õ����������㷨:
//accumulate // ��������Ԫ���ۼ��ܺ�
//fill // �����������Ԫ��

//accumulate(iterator beg, iterator end, value);
// ��������Ԫ���ۼ��ܺ�
// beg ��ʼ������
// end ����������
// value ��ʼֵ

void test01() {
	
	vector<int> v;
	
	for(int i=1;i<=100;i++) {
		v.push_back(i);
	}
	
	int tol = accumulate(v.begin(),v.end(),0);
	cout << tol << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


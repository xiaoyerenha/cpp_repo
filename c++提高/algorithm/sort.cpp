/*
    Name:sort
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 20:38:48
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���õ������㷨:
//sort //��������Ԫ�ؽ�������
//random_shuffle //ϴ�� ָ����Χ�ڵ�Ԫ�������������
//merge // ����Ԫ�غϲ������洢����һ������
//reverse // ��תָ����Χ��Ԫ��

//sort(iterator beg, iterator end, _Pred);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ν��

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	
	//sortĬ�ϴ�С��������
	sort(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
	//�Ӵ�С���� 
	sort(v.begin(),v.end(),greater<int>());
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:adjacent_find
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:29:07
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//���������ظ�Ԫ��

//adjacent_find(iterator beg, iterator end);
// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
// beg ��ʼ������
// end ����������

//�ܽ᣺��������������ֲ��������ظ�Ԫ�أ��ǵ���STL�е�adjacent_find�㷨

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);
	
	vector<int>::iterator pos = adjacent_find(v.begin(),v.end());
	
	if(pos != v.end()) {
		cout << "�ҵ��ˣ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
}

int main()
{
    test01();
    
    return 0;
}


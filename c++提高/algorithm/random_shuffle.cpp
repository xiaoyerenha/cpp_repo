/*
    Name:random_shuffle 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 20:47:57
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

//ϴ�� ָ����Χ�ڵ�Ԫ�������������

//random_shuffle(iterator beg, iterator end);
// ָ����Χ�ڵ�Ԫ�������������
// beg ��ʼ������
// end ����������

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	//���������
	srand((unsigned int)time(NULL));
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	//����˳�� 
	random_shuffle(v.begin(),v.end());
	
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


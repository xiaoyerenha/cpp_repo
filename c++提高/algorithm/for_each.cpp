/*
    Name:for_each
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:03:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//for_each(iterator beg, iterator end, _func);
// �����㷨 ��������Ԫ��
// beg ��ʼ������
// end ����������
// _func �������ߺ�������

//��ͨ����
void print01(int val) {
	cout << val << " ";
}
 
void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	for_each(v.begin(),v.end(),print01);
}

//�º���
class print02 {
	public:
		void operator()(int val) {
			cout << val << " ";
		}
};

void test02() {
	
	vector<int> v;
	
	for(int i=10;i<20;i++) {
		v.push_back(i);
	}
	
	for_each(v.begin(),v.end(),print02());
	
} 

int main()
{
    //test01();
    test02();
    
    return 0;
}


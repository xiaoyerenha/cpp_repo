/*
    Name:vectorԤ���ռ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/3 22:13:13
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector> 

//reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

//�ܽ᣺����������ϴ󣬿���һ��ʼ����reserveԤ���ռ�

void test01() {
	
	vector<int> v;
	
	//Ԥ���ռ�
	//v.reserve(100000);
	
	int num = 0;
	int* p = NULL;
	for(int i=0;i<100000;i++) {
		v.push_back(i);
		if(p != &v[0]) {
			p = &v[0];
			num++;
		}
	} 
	
	cout << "num:" << num << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:binary_search
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:42:26
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//����ָ��Ԫ���Ƿ����

//bool binary_search(iterator beg, iterator end, value);
// ����ָ����Ԫ�أ��鵽 ����true ����false
// ע��: �����������в�����
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��

//�ܽ᣺���ֲ��ҷ�����Ч�ʺܸߣ�ֵ��ע����ǲ��ҵ�������Ԫ�ر������������

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	bool ret = binary_search(v.begin(),v.end(),5);
	
	if(ret) {
		cout << "�鵽" << endl; 
	}
	else {
		cout << "δ�鵽" << endl;
	}
	
}

int main()
{
    test01();
    
    return 0;
}


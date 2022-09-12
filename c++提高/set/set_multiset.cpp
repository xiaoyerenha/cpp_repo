/*
    Name:set �� multiset������ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:52:45
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//set�����Բ����ظ����ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset���������ݣ���˿��Բ����ظ�����

//�ܽ᣺
//�������������ظ����ݿ�������set
//�����Ҫ�����ظ���������multiset

void test01() {
	
	set<int> s;
	
	pair<set<int>::iterator,bool> ret = s.insert(10);
	
	if(ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	
	ret = s.insert(10);
	if(ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}
	
	//multiset
	multiset<int> ms;
	
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	
	for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++) {
		cout << *it << " ";
	} 
	cout << endl;
}

int main()
{
    test01();
    
    return 0;
}


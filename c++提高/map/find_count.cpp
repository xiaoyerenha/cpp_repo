/*
    Name:map���Һ�ͳ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 21:16:18
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���

//�ܽ᣺
//���� --- find �����ص��ǵ�������
//ͳ�� --- count ������map�����Ϊ0����1��

void test01() {
	
	map<int,int> m;
	
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(4,40));
	m.insert(make_pair(5,50));
	
	map<int,int>::iterator pos = m.find(3);
	
	if(pos != m.end()) {
		cout << "�ҵ� key = " << pos->first << " value = " << pos->second << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
	int cnt = m.count(4);
	cout << "key = 4��Ԫ�ظ�����" << cnt << endl;
}

int main()
{
    test01();
    
    return 0;
}


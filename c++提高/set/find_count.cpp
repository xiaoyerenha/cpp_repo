/*
    Name:set���Һ�ͳ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/13 10:38:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<set>

//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���

//�ܽ᣺
//���� --- find �����ص��ǵ�������
//ͳ�� --- count ������set�����Ϊ0����1��

void test01() {
	
	set<int> s;
	
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	
	set<int>::iterator pos = s.find(20);
	
	if(pos != s.end()) {
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	
	//ͳ��
	int num = s.count(30);
	cout << "num = " << num << endl; 
}


int main()
{
    test01();
    
    return 0;
}


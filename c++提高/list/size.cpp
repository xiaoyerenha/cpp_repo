/*
    Name:list��С���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 21:33:17
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//size(); //����������Ԫ�صĸ���
//empty(); //�ж������Ƿ�Ϊ��
//resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//�ܽ᣺
//�ж��Ƿ�Ϊ�� --- empty
//����Ԫ�ظ��� --- size
//����ָ������ --- resize


void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	
	if(l.empty()) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "������Ϊ��" << endl;
		cout << "����Ԫ�ظ�����" << l.size() << endl;
	}
	
	l.resize(8);
	printList(l);
	
	l.resize(10,111);
	printList(l);
	
	l.resize(3);
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


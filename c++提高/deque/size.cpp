/*
    Name:deque��С 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 16:02:10
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>

//deque.empty(); //�ж������Ƿ�Ϊ��
//deque.size(); //����������Ԫ�صĸ���
//deque.resize(num); //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����


//�ܽ�
//dequeû�������ĸ���
//�ж��Ƿ�Ϊ�� --- empty
//����Ԫ�ظ��� --- size
//����ָ������ --- resize 

void printDeque(const deque<int> &d) {
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	deque<int> d1;
	
	if(d1.empty()) {
		cout << "d1Ϊ��" << endl;
	}
	else {
		cout << "d1��Ϊ��" << endl;
	}
	
	for(int i=0;i<10;i++) {
		d1.push_back(i);
	}
	
	cout << "d1��Ԫ�ظ�����" << d1.size() << endl;
	
	d1.resize(15);
	printDeque(d1);
	
	d1.resize(16,3);
	printDeque(d1);
	
	d1.resize(9);
	printDeque(d1);
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:deque�����ɾ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/7 16:10:09
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<deque>

//���˲��������
//push_back(elem); //������β�����һ������
//push_front(elem); //������ͷ������һ������
//pop_back(); //ɾ���������һ������
//pop_front(); //ɾ��������һ������
//ָ��λ�ò�����
//insert(pos,elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos,n,elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear(); //�����������������
//erase(beg,end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�

//�ܽ�
//�����ɾ���ṩ��λ���ǵ�������
//β�� --- push_back
//βɾ --- pop_back
//ͷ�� --- push_front
//ͷɾ --- pop_front 

void printDeque(const deque<int> &d) {
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	deque<int> d1;
	
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//200 100 10 20
	printDeque(d1); 
	
	d1.pop_back();
	d1.pop_front();
	//100 10
	printDeque(d1);
}

void test02() {
	
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	
	printDeque(d1);
	
	d1.insert(d1.begin(),1000);
	printDeque(d1);
	
	d1.insert(d1.begin(),3,2000);
	printDeque(d1);
	
	
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	
	d1.insert(d1.begin(),d2.begin(),d2.end());
	printDeque(d1);
}

void test03() {
	
	deque<int> d1;
	
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	
	printDeque(d1);
	
	d1.erase(d1.begin());
	printDeque(d1);
	
	//d1.erase(d1.begin(),d1.end());
	d1.clear();
	printDeque(d1);
	
}

int main()
{
    //test01();
    //test02();
    test03();
    
    return 0;
}


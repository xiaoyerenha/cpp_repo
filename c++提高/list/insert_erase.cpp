/*
    Name:list�����ɾ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 21:45:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//push_back(elem);//������β������һ��Ԫ��
//pop_back();//ɾ�����������һ��Ԫ��
//push_front(elem);//��������ͷ����һ��Ԫ��
//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();//�Ƴ���������������
//erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�

//�ܽ᣺
//β�� --- push_back
//βɾ --- pop_back
//ͷ�� --- push_front
//ͷɾ --- pop_front
//���� --- insert
//ɾ�� --- erase
//�Ƴ� --- remove
//��� --- clear


void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	
	list<int> l;
	
	//β�� 
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	
	//ͷ��
	l.push_front(100);
	l.push_front(200); 
	l.push_front(300);
	
	printList(l);
	
	//βɾ
	l.pop_back();
	
	//ͷɾ
	l.pop_front();
	printList(l);
	
	list<int>::iterator it = l.begin();
	l.insert(++it,150);
	printList(l); 
	
	l.insert(it,3,9);
	printList(l); 
	
	list<int> ll;
	ll.push_back(6000);
	ll.push_back(5000);
	ll.push_back(4000);
	
	l.insert(l.begin(),ll.begin(),ll.end());
	printList(l);
	
	l.erase(l.begin());
	printList(l);
	
	//l.clear();
	//l.erase(l.begin(),l.end());
	//printList(l);
	l.remove(4000);
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


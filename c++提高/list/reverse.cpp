/*
    Name:list��ת������ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/11 22:20:41
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//reverse(); //��ת����
//sort(); //��������

//�ܽ᣺
//��ת --- reverse
//���� --- sort ����Ա������

void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		
		cout << *it << " ";
 	}
	cout << endl;
}

bool myCom(int a, int b) {
	return a > b;
}

void test01() {
	
	list<int> l;
	
	l.push_back(30);
	l.push_back(20);
	l.push_back(10);
	l.push_back(50);
	l.push_back(40);
	
	printList(l);
	
	l.reverse();
	printList(l);
	
	l.sort();//Ĭ�ϵ�������� ��С����
	printList(l);
	
	l.sort(myCom);//ָ�����򣬴Ӵ�С
	printList(l);
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:map��������͹��죬��ֵ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 20:47:02
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<map>

//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

//map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//���Ը���keyֵ�����ҵ�valueֵ

//map �� multimap����
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��

//���죺
//map<T1, T2> mp; //mapĬ�Ϲ��캯��:
//map(const map &mp); //�������캯��
//��ֵ��
//map& operator=(const map &mp); //���صȺŲ�����

//�ܽ᣺map������Ԫ�ض��ǳɶԳ��֣���������ʱ��Ҫʹ�ö���

void printMap(map<int,int> &m) {
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	
	map<int,int> m;
	
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40)); 
	
	printMap(m);
	
	map<int,int> m2(m);
	printMap(m2);
	
	map<int,int> m3;
	m3 = m2;
	printMap(m3);
	
}

int main()
{
    test01();
    
    return 0;
}


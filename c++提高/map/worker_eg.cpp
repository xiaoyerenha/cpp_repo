/*
    Name:����-Ա������ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 21:43:59
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include <stdlib.h>
#include <ctime>

/*
��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
Ա����Ϣ��: ���� ������ɣ����ŷ�Ϊ���߻����������з�
�����10��Ա�����䲿�ź͹���
ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
�ֲ�����ʾԱ����Ϣ
*/

//�ܽ᣺
//�������Լ�ֵ����ʽ���ڣ����Կ�����map �� multimap

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker {
	public:
		string m_Name;
		int m_Salary;
};

void createWorker(vector<Worker> &v) {
	
	string nameSeed = "ABCDEFGHIJ";
	
	for(int i=0;i<10;i++) {
		Worker w;
		w.m_Name = "Ա��";
		w.m_Name += nameSeed[i];
		
		w.m_Salary = rand() % 10000 + 10000; //10000 ~ 19999
		//��Ա�����뵽������
		v.push_back(w);
	}
}

void setGroup(vector<Worker> &v,multimap<int,Worker> &m) {
	
	for(vector<Worker>::iterator it=v.begin();it!=v.end();it++) {
		//����������ű��
		int deptId = rand() % 3; //0 1 2
		
		//��Ա�����뵽������
		//key���ű�ţ�value����Ա��
		m.insert(make_pair(deptId,*it));
	}
}

void showWorkerByGroup(multimap<int,Worker> &m) {
	
	//�߻� 
	cout << "==========�߻�==========" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int cnt = m.count(CEHUA);// ͳ�ƾ�������
	int index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	
	//����
	cout << "==========����==========" << endl;
	pos = m.find(MEISHU);
	cnt = m.count(MEISHU);
	index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	
	//�з� 
	cout << "==========�з�==========" << endl;
	pos = m.find(YANFA);
	cnt = m.count(YANFA);
	index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	
    //1.����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker); 
	
//	//���� 
//	for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();it++) {
//		cout << "������" << (*it).m_Name << " ���ʣ�" << (*it).m_Salary << endl;
//	}

	//2.Ա������
	multimap<int,Worker> mWorker;
	setGroup(vWorker,mWorker); 
	
	//3.��ʾ������Ϣ
	showWorkerByGroup(mWorker); 
	 
    
    return 0;
}


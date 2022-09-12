/*
    Name:����-��ί��� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/8 16:11:45
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�

//1. ��������ѡ�֣��ŵ�vector��
//2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//4. deque��������һ�飬�ۼ��ܷ�
//5. ��ȡƽ����

class Person {
	public:
		Person(string name,int score) {
			this->m_Name = name;
			this->m_Score = score;
		}
		
		string m_Name;//���� 
		int m_Score;//ƽ����
}; 

void createPerson(vector<Person> &v) {
	
	string nameSeed = "ABCDE";
	for(int i=0;i<5;i++) {
		string name = "ѡ��";
		name += nameSeed[i];
		
		int score = 0;
		
		Person p(name,score);
		
		//��������Person����ŵ������� 
		v.push_back(p);
	}
	
} 

void setScore(vector<Person> &v) {
	
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
		
		deque<int> d;
		
		for(int i=0;i<10;i++) {
			int score = rand() % 41 + 60; //60-100
			d.push_back(score);
		}
		
		sort(d.begin(),d.end());
		
		d.pop_back();
		d.pop_front();
		
		int sum = 0;
		for(int i=0;i<d.size();i++) {
			sum += d[i];
		}
		int avg = sum / d.size();
		(*it).m_Score = avg;
		
	}
	
}

int main()
{
	
	//���������
	srand((unsigned int)time(NULL)); 
	
	
    //1.����5��ѡ��
    vector<Person> v; //���ѡ�ֵ����� 
    createPerson(v);
    
    //����
//	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
//		cout << (*it).m_Name << " " << (*it).m_Score << endl;
//	} 
	
	//2.��5��ѡ�ִ��
	setScore(v);
	
	
	//3.��ʾ���÷� 
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
		cout << (*it).m_Name << " " << (*it).m_Score << endl;
	} 
    
    return 0;
}


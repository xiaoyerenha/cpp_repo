/*
    Name:find
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:25:00
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()

//find(iterator beg, iterator end, value);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��

//�ܽ᣺ ����find��������������ָ����Ԫ�أ�����ֵ�ǵ�����
//�����Զ�������ʱ����Ҫ����== 

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int>::iterator it = find(v.begin(),v.end(),5);
	
	if(it != v.end()) {
		cout << "�ҵ��ˣ�" << *it << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
}

class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		//����== 
		bool operator==(const Person &p) {
			if(this->m_Age == p.m_Age) {
				return true;
			}
			else {
				return false;
			}
		}
		
		string m_Name;
		int m_Age;
};

void test02() {
	
	vector<Person> v;
	
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	
	Person p("eee",20);
	
	vector<Person>::iterator it = find(v.begin(),v.end(),p);
	
	if(it != v.end()) {
		cout << "�ҵ��ˣ�" << it->m_Name << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


/*
    Name:string�ַ����Ƚ� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 18:16:53
    Description:
*/

//�ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//= ���� 0
//> ���� 1
//< ���� -1

//int compare(const string &s) const; //���ַ���s�Ƚ�
//int compare(const char *s) const; //���ַ���s�Ƚ�

//�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�

#include<cstdio>
#include<iostream>
using namespace std;

void test01() {
	
	string s1 = "zhello";
	string s2 = "hello";
	
	int ret = s1.compare(s2);
	
	if(ret == 0) {
		cout << "s1 == s2" << endl;
	}
	else if(ret > 0) {
		cout << "s1 > s2" << endl;
	}
	else {
		cout << "s1 < s2" << endl;
	}
	
} 

int main()
{
    test01();
    
    return 0;
}


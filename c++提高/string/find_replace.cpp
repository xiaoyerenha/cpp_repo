/*
    Name:string���Һ��滻 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/30 17:37:37
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
//int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
//int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
//int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n,const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

//find�����Ǵ�������rfind��������
//find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
//replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

void test01() {
	
	string s1 = "zxcvbnm";
	string str = "cv";
	int ret = s1.find(str,1);
	cout << ret << endl;
	
	const char* s = "bnm";
	ret = s1.find(s);
	cout << ret << endl;
	
	string s2 = "bnmvbnm";
	ret = s2.find(s,0,1);//��posλ�ò���s��ǰn���ַ���һ��λ��
	cout << ret << endl;
	
	char c = 'n';
	ret = s2.find(c,2);
	cout << ret << endl;
	
	ret = s2.rfind(str);
	cout << ret << endl;
	
} 

void test02() {
	
	string str1 = "shj";
	const char* s= "111";
	string str2 = "zxcvbnm";
	
	str2.replace(1,3,str1);
	cout << str2 << endl;
	
	str2.replace(0,2,s);
	cout << str2 << endl;
	
}

int main()
{
    //test01();
    test02();
    
    return 0;
}


/*
    Name:�ڽ��������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/21 21:05:01
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm> 

//STL�ڽ���һЩ��������

//����:
//�����º���
//��ϵ�º���
//�߼��º���

//�÷���
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional> 

//�����º��� 
void test01() {
//	ʵ����������
//	����negate��һԪ���㣬�������Ƕ�Ԫ����

//	template<class T> T plus<T> //�ӷ��º���
//	template<class T> T minus<T> //�����º���
//	template<class T> T multiplies<T> //�˷��º���
//	template<class T> T divides<T> //�����º���
//	template<class T> T modulus<T> //ȡģ�º���
//	template<class T> T negate<T> //ȡ���º���

	negate<int> n;
	cout << "ȡ����" << n(5) << endl; 
	
	plus<int> p;
	cout << "�ӷ���" << p(10,30) << endl;
	
}

//��ϵ�º��� 
void test02() {
//	ʵ�ֹ�ϵ�Ա�	
	
//	template<class T> bool equal_to<T> //����
//	template<class T> bool not_equal_to<T> //������
//	template<class T> bool greater<T> //����
//	template<class T> bool greater_equal<T> //���ڵ���
//	template<class T> bool less<T> //С��
//	template<class T> bool less_equal<T> //С�ڵ���

//	�ܽ᣺��ϵ�º�������õľ���greater<>����
	
	vector<int> v;
	
	v.push_back(50);
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//�߼��º��� 
void test03() {
//	ʵ���߼�����
//
//	template<class T> bool logical_and<T> //�߼���
//	template<class T> bool logical_or<T> //�߼���
//	template<class T> bool logical_not<T> //�߼���

	vector<bool> v1;
	
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);
	v1.push_back(false);
	
	for(vector<bool>::iterator it=v1.begin();it!=v1.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	//�߼���  ��v�������˵�v2�У���ִ���߼�������
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),logical_not<bool>());
	
	for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++) {
		cout << *it << " ";
	}
	cout << endl; 
}

int main()
{
    //test01();
    //test02();
    test03();
    
    return 0;
}


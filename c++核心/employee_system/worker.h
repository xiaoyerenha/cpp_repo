/*
** ְ��������5
** ְ�����ࣺ��ͨԱ���������ϰ�
** ������ְ������һ���� worker �У����ö�̬����ְͬ������
** ְ�������ԣ�ְ����š�ְ��������ְ�����ڲ��ű��
** ְ������Ϊ����λְ����Ϣ��������ȡ��λ���� 
*/

#pragma once
#include<iostream>
using namespace std;

class Worker {
	public:
		//��ʾ������Ϣ
		virtual void showInfo() = 0; //���麯�� 
		
		//��ȡ��λ����
		virtual string getDeptName() = 0;
		
		int m_Id; //ְ�����
		string m_Name; //ְ������
		int m_DeptId; //ְ�����ڲ������Ʊ�� 
};

//��ͨԱ����6
//�̳�ְ�������࣬����д�����д��麯��

#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker {
	public:
		
		//���캯��
		Employee(int id, string name, int dId);
		
		virtual void showInfo(); 
		
		virtual string getDeptName();
}; 

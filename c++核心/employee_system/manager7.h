//������7
//�̳�ְ�������࣬����д�����д��麯��

#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Manager : public Worker {
	public:
		
		//���캯��
		Manager(int id, string name, int dId);
		
		virtual void showInfo(); 
		
		virtual string getDeptName();
};

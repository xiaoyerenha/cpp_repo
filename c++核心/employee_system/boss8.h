//�ϰ���8
//�̳�ְ�������࣬����д�����д��麯��

#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Boss : public Worker {
	public:
		
		//���캯��
		Boss(int id, string name, int dId);
		
		virtual void showInfo(); 
		
		virtual string getDeptName();
};

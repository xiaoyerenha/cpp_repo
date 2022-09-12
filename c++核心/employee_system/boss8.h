//老板类8
//继承职工抽象类，并重写父类中纯虚函数

#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Boss : public Worker {
	public:
		
		//构造函数
		Boss(int id, string name, int dId);
		
		virtual void showInfo(); 
		
		virtual string getDeptName();
};

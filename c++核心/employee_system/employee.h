//普通员工类6
//继承职工抽象类，并重写父类中纯虚函数

#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker {
	public:
		
		//构造函数
		Employee(int id, string name, int dId);
		
		virtual void showInfo(); 
		
		virtual string getDeptName();
}; 

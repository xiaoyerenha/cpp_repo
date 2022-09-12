/*
** 职工抽象类5
** 职工分类：普通员工、经理、老板
** 将三种职工抽象到一个类 worker 中，利用多态管理不同职工种类
** 职工的属性：职工编号、职工姓名、职工所在部门编号
** 职工的行为：岗位职责信息描述，获取岗位名称 
*/

#pragma once
#include<iostream>
using namespace std;

class Worker {
	public:
		//显示个人信息
		virtual void showInfo() = 0; //纯虚函数 
		
		//获取岗位名称
		virtual string getDeptName() = 0;
		
		int m_Id; //职工编号
		string m_Name; //职工姓名
		int m_DeptId; //职工所在部门名称编号 
};

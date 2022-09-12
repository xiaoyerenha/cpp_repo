#pragma once //防止头文件重复包含 
#include<iostream> //包含输入输出流头文件 
using namespace std; //使用标准命名空间 
#include "worker.h"
#include <fstream>

#define FILENAME "empFile.txt"

class WorkerManager {
	public:
		//构造函数 
		WorkerManager();
		
		//展示菜单
		void Show_Menu(); //与用户的沟通界面2
		
		//退出系统4
		void exitSystem(); 
		
		//增加职工11
		void Add_Emp(); 
		
		//保存文件12
		void save(); 
		
		void init_Emp();//初始化员工14
		//根据职工的数据以及职工数据，初始化Worker ** m_EmpArray指针 
		
		//显示职工15
		void Show_Emp(); 
		
		//删除员工16
		void Del_Emp();
		
		//修改职工17
		void Mod_Emp(); 
		
		//查找职工18
		void Find_Emp();
		
		//排序职工19
		void Sort_Emp(); 
		
		//清空文件20
		void Clean_File(); 
		
		//按照职工编号判断职工是否存在，若存在返回职工在数组中位置，不存在返回-1
		int IsExist(int id); 
		
		//析构函数，11中堆区开辟空间，手动释放 
		~WorkerManager();
		
		//记录文件中的人数个数10
		int m_EmpNum;
		
		//员工数组的指针
		Worker ** m_EmpArray; 
		
		//标志文件是否为空13
		bool m_FileIsEmpty;
		//虽然实现了添加职工后保存到文件的操作，但每次开始运行程序，并没有将文件中数据读取到程序中
		//并且程序功能中还有清空文件的需求
		//因此构造函数初始化数据的情况分为三种：
		//1.第一次使用，文件未创建
		//2.文件存在，但是数据被用户清空
		
		//3.文件存在，并且保存职工的所有数据
		int get_EmpNum(); //统计人数 
		
		 
};

#include<iostream>
using namespace std;
#include "workerManager1.h"
#include "worker.h"
#include "employee.h"
#include "manager7.h"
#include "boss8.h"

void test() {
	//测试职工类，运行能够产生多态9
	Worker * worker = new Employee(1,"zhans",1);
	worker->showInfo();
	delete worker;
	
	worker = new Manager(2,"ssfs",2);
	worker->showInfo();
	delete worker; 
	
	
}

int main() {
	
	//实例化管理者对象 
	WorkerManager wm;
	
	int choice = 0;//用来存储用户的选项3
	
	while(true) {
		
		//调用展示菜单成员函数
		wm.Show_Menu(); 
		
		cout << "请输入您的选择：" << endl;
		cin >> choice; //接受用户的选项
		
		switch(choice) {
			case 0://退出系统 
				wm.exitSystem();
				break;
			case 1://增加职工11 
				wm.Add_Emp();
				break;
			case 2://显示职工 
				wm.Show_Emp();
				break;
			case 3://删除职工 
				wm.Del_Emp();
				break;
			case 4://修改职工 
				wm.Mod_Emp();
				break;
			case 5://查找职工 
				wm.Find_Emp();
				break;
			case 6://排序职工 
				wm.Sort_Emp();
				break;
			case 7://清空文档 
				wm.Clean_File();
				break;
			default://清屏操作 
				system("cls");
		} 
	} 
	
	
	
	system("pause");
	
	return 0;
}

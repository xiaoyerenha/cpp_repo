#include<iostream>
using namespace std;
#include "workerManager1.h"
#include "worker.h"
#include "employee.h"
#include "manager7.h"
#include "boss8.h"

void test() {
	//����ְ���࣬�����ܹ�������̬9
	Worker * worker = new Employee(1,"zhans",1);
	worker->showInfo();
	delete worker;
	
	worker = new Manager(2,"ssfs",2);
	worker->showInfo();
	delete worker; 
	
	
}

int main() {
	
	//ʵ���������߶��� 
	WorkerManager wm;
	
	int choice = 0;//�����洢�û���ѡ��3
	
	while(true) {
		
		//����չʾ�˵���Ա����
		wm.Show_Menu(); 
		
		cout << "����������ѡ��" << endl;
		cin >> choice; //�����û���ѡ��
		
		switch(choice) {
			case 0://�˳�ϵͳ 
				wm.exitSystem();
				break;
			case 1://����ְ��11 
				wm.Add_Emp();
				break;
			case 2://��ʾְ�� 
				wm.Show_Emp();
				break;
			case 3://ɾ��ְ�� 
				wm.Del_Emp();
				break;
			case 4://�޸�ְ�� 
				wm.Mod_Emp();
				break;
			case 5://����ְ�� 
				wm.Find_Emp();
				break;
			case 6://����ְ�� 
				wm.Sort_Emp();
				break;
			case 7://����ĵ� 
				wm.Clean_File();
				break;
			default://�������� 
				system("cls");
		} 
	} 
	
	
	
	system("pause");
	
	return 0;
}

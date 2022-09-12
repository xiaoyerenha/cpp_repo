/*
** ������
** 1.���û��Ĺ�ͨ�˵�����
** 2.��ְ����ɾ�Ĳ�Ĳ���
** 3.���ļ��Ķ�д����
*/

#include "workerManager1.h"
#include "employee.h"
#include "manager7.h"
#include "boss8.h"

WorkerManager::WorkerManager() {

	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	//�ļ����������
	if(!ifs.is_open()) {
		cout << "�ļ�������" << endl; //�������

		//��ʼ������
		//��ʼ������10
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;//��ʼ���ļ�Ϊ�ձ�־

		ifs.close();//�ر��ļ�
		return;
	}

	//�ļ����ڣ�����û�м�¼
	char ch;
	ifs >> ch;
	if(ifs.eof()) {
		cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	//�ļ����ڣ������ݲ�Ϊ��
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;//���Դ���
	this->m_EmpNum = num;

	//����ְ������������
	this->m_EmpArray = new Worker *[this->m_EmpNum];
	//��ʼ��ְ��
	init_Emp();

	//���Դ���
	for(int i=0; i<m_EmpNum; i++) {
		cout << "ְ���ţ�" << this->m_EmpArray[i]->m_Id
		     << "\tְ��������" << this->m_EmpArray[i]->m_Name
		     << "\t���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	}

}

void WorkerManager::Show_Menu() {
	cout << "******************************" << endl;
	cout << "****��ӭʹ��ְ������ϵͳ��****" << endl;
	cout << "****    0.�˳��������    ****" << endl;
	cout << "****    1.����ְ����Ϣ    ****" << endl;
	cout << "****    2.��ʾְ����Ϣ    ****" << endl;
	cout << "****    3.ɾ����ְְ��    ****" << endl;
	cout << "****    4.�޸�ְ����Ϣ    ****" << endl;
	cout << "****    5.����ְ����Ϣ    ****" << endl;
	cout << "****    6.���ձ������    ****" << endl;
	cout << "****    7.��������ĵ�    ****" << endl;
	cout << "******************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}

void WorkerManager::Add_Emp() {
	cout << "����������ְ��������" << endl;

	int addNum = 0;
	cin >> addNum;

	if(addNum > 0) {
		//�����¿ռ��С
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		Worker ** newSpace = new Worker*[newSize];

		//��ԭ�ռ������ݴ�ŵ��¿ռ���
		if(this->m_EmpArray != NULL) {
			for(int i=0; i<this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//����������
		for(int i=0; i<addNum; i++) {
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "λ��ְ�����" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "λ��ְ������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch(dSelect) {
				case 1://��ְͨ��
					worker = new Employee(id,name,1);
					break;
				case 2://����
					worker = new Manager(id,name,2);
					break;
				case 3://�ϰ�
					worker = new Boss(id,name,3);
					break;
				default:
					break;
			}

			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µĸ���
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ӳɹ���ʾ��Ϣ
		cout << "�ɹ���� " << addNum << " ����ְ��" << endl;

		//���浽�ļ�
		this->save();
	} else {
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");

}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME,ios::out);

	for(int i=0; i<this->m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_Id << " "
		    << this->m_EmpArray[i]->m_Name << " "
		    << this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int num = 0;

	while(ifs >> id && ifs >> name && ifs >> dId) {
		//��¼����
		num++;
	}
	ifs.close();

	return num;
}

void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while(ifs >> id && ifs >> name && ifs >> dId) {
		Worker * worker = NULL;
		//���ݲ�ͬ�Ĳ���Id������ͬ����
		if(dId == 1) { //1��ͨԱ��
			worker = new Employee(id,name,dId);
		} else if(dId = 2) { //2����
			worker = new Manager(id,name,dId);
		} else { //�ܲ�
			worker = new Boss(id,name,dId);
		}
		//�����������
		this->m_EmpArray[index] = worker;
		index++;
	}
}

void WorkerManager::Show_Emp() {
	if(this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	} else {
		for(int i=0; i<m_EmpNum; i++) {
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id) {
	int index = -1;

	for(int i=0; i<this->m_EmpNum; i++) {
		if(this->m_EmpArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp() {
	if(this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		//����ְ�����ɾ��
		cout << "��������ɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;
		
		int index = this->IsExist(id);
		if(index != -1) {
			for(int i=index;i<this->m_EmpNum-1;i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//���������и��� 
			this->save();//ͬ�����ļ��� 
			cout << "ɾ���ɹ�" << endl;
		} 
		else {
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls"); 
}

void WorkerManager::Mod_Emp() {
	if(this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;
		
		int ret = this->IsExist(id);
		if(ret != -1) {
			delete this->m_EmpArray[ret];
			
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			
			cout << "�鵽��" << id << " ��ְ������������ְ����ţ�" << endl;
			cin >> newId;
			
			cout << "��������������" << endl;
			cin >> newName;
			
			cout << "�������λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;
			
			Worker * worker = NULL;
			switch(dSelect) {
				case 1:
					worker = new Employee(newId,newName,dSelect);
					break;
				case 2:
					worker = new Manager(newId,newName,dSelect);
					break;
				case 3:
					worker = new Boss(newId,newName,dSelect);
					break;
				default:
					break;
			}
			
			//�¶�����µ�������
			this->m_EmpArray[ret] = worker;
			
			cout << "���³ɹ�" << endl;
			
			//���浽�ļ���
			this->save(); 
			delete worker;
		}
		else {
			cout << "�޸�ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	
	//������� ����
	system("pause");
	system("cls"); 
}

void WorkerManager::Find_Emp() {
	if(this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		cout << "��ѡ����ҷ�ʽ��" << endl;
		cout << "1.����Ų���" << endl;
		cout << "2.����������" << endl;
		
		int select = 0;
		cin >> select;
		
		if(select == 1) {
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;
			
			int ret = this->IsExist(id);
			if(ret != -1) {
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else {
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if(select == 2) {
			string name;
			cout << "��������ҵ�ְ��������" << endl;
			cin >> name;
			
			bool flag = false;//���ҵ���־
			for(int i=0;i<this->m_EmpNum;i++) {
				if(this->m_EmpArray[i]->m_Name == name) {
					cout << "���ҳɹ���ְ���ű��Ϊ "
						<< this->m_EmpArray[i]->m_Id
						<< " ����Ϣ���£�" << endl;
					this->m_EmpArray[i]->showInfo();
					
					flag = true; 
				}
			}
			if(!flag) {
				cout << "����ʧ�ܣ����޴���" << endl;
			} 
		}
		else {
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp() {
	if(this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.��ְ���Ž�������" << endl;
		cout << "2.��ְ���Ž��н���" << endl;
		
		int select = 0;
		cin >> select;
		
		for(int i=0;i<this->m_EmpNum;i++) {
			int minOrMax = i;
			for(int j=i+1;j<this->m_EmpNum;j++) {
				if(select == 1) {//���� 
					if(this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id) {
						minOrMax = j;
					} 
				}
				else {//���� 
					if(this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id) {
						minOrMax = j;
					} 
				}
			}
			if(i != minOrMax) {
				Worker * temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		} 
		
		cout << "����ɹ����������Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean_File() {
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	
	int select = 0;
	cin >> select;
	
	if(select == 1) {
		//��ģʽ ios::trunc �������ɾ���ļ������´���
		ofstream ofs(FILENAME,ios::trunc);
		ofs.close();
		
		if(this->m_EmpArray != NULL) {
			for(int i=0;i<this->m_EmpNum;i++) {
				if(this->m_EmpArray[i] != NULL) {
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		} 
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager() {
	if(this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

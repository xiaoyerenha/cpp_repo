#include<iostream>
using namespace std;
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ 
	string m_Addr;
};

//���ͨѶ¼�ṹ�� 
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size; 
};

//�˵���ʾ 
void showMenu();
//1�������ϵ��
void addPerson(Addressbooks * abs);
//2����ʾ��ϵ��
void showPerson(Addressbooks * abs);
//���ĳ��ϵ���Ƿ���ڣ����ڷ����������е�λ�ã������ڷ���-1
int existPerson(Addressbooks * abs,string name); 
//3��ɾ����ϵ��
void deletePerson(Addressbooks * abs);
//4��������ϵ��
void findPerson(Addressbooks * abs);
//5���޸���ϵ��
void updatePerson(Addressbooks * abs);
//6�������ϵ��
void cleanPerson(Addressbooks * abs);

int main()
{
	//ͨ��¼����ϵͳ
	
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0; 
	
	int select = 0; //�����û�ѡ������ı���
	
	while(true)
	{
		showMenu();
		
		cin >> select;
		
		switch(select)
		{
			case 1://1�������ϵ��
				addPerson(&abs); // ���õ�ַ���ݣ���������ʵ�� 
				break;
			case 2://2����ʾ��ϵ��
				showPerson(&abs);
				break;
			case 3://3��ɾ����ϵ��
				deletePerson(&abs);
				break;
			case 4://4��������ϵ��
				findPerson(&abs);
				break;
			case 5://5���޸���ϵ��
				updatePerson(&abs);
				break;
			case 6://6�������ϵ��
				cleanPerson(&abs);
				break;
			case 0://0���˳�ͨѶ¼
				cout << "��ӭ�´�ʹ��" << endl;
				system("pause");
				return 0;
				break;
			default:
				break;	
		}	
	}
	
	system("pause");
	return 0;
}

void showMenu()
{
	cout << "\n***************************" << endl;
	cout << "*** ��ӭ����ͨѶ¼ϵͳ! ***" << endl;
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if(abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	} 
	else
	{
		//���
		
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�1���� 2Ů��" << endl;
		cin >> sex;
		while(sex != 1 && sex != 2)
		{
			cout << "������Ϸ����֣�" << endl;
			cin >> sex;
		}
		abs->personArray[abs->m_Size].m_Sex = sex;
		//����
		int age = 0;
		cout << "���������䣨0-150����" << endl;
		cin >> age;
		while(age < 0 || age > 150)
		{
			cout << "������Ϸ����֣�" << endl;
			cin >> age;
		}
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		string addr;
		cout << "������סַ��" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr; 
		
		//����ͨ��¼����
		abs->m_Size++;
		
		cout << "��ӳɹ�" << endl;
		
		system("pause");//�����������
		system("cls");//�������� 
	}
}

void showPerson(Addressbooks * abs)
{
	if(abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "����\t" << "�Ա�\t" << "����\t" << "�绰\t" << "סַ" << endl; 
		for(int i=0;i<abs->m_Size;i++)
		{
			cout << abs->personArray[i].m_Name << "\t";
			if(abs->personArray[i].m_Sex == 1)
			{
				cout << "��\t";
			}
			else
			{
				cout << "Ů\t";
			} 
				
				cout << abs->personArray[i].m_Age << "\t"
					<< abs->personArray[i].m_Phone << "\t"
					<< abs->personArray[i].m_Addr << endl;
		}
	}
	
	system("pause");//�����������
	system("cls");//�������� 
}

int existPerson(Addressbooks * abs,string name)
{
	int flag = -1;
	
	if(abs->m_Size == 0)
	{
		return flag;
	}
	
	for(int i=0;i<abs->m_Size;i++)
	{
		if(abs->personArray[i].m_Name == name)
		{
			flag = i;
			break;
		}
	}
	
	return flag;
}

void deletePerson(Addressbooks * abs)
{
	string name;
	cout << "������ɾ������ϵ��������" << endl;
	cin >> name;
	
	//��¼ָ����ϵ��λ��
	int res =  existPerson(abs,name);
	
	if(res == -1)
	{
		cout << "����ϵ�˲����ڣ�" << endl;
	}
	else
	{
		for(int i=res;i<abs->m_Size-1;i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
		
	system("pause");//�����������
	system("cls");//�������� 
}

void findPerson(Addressbooks * abs)
{
	cout << "��������ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	
	int r = existPerson(abs,name);
	
	if(r == -1)
	{
		cout << "û�д���ϵ��" << endl;
	}
	else
	{
		cout << "����\t" << "�Ա�\t" << "����\t" << "�绰\t" << "סַ" << endl; 
		cout << abs->personArray[r].m_Name << "\t";
		if(abs->personArray[r].m_Sex == 1)
		{
			cout << "��\t";
		}
		else
		{
			cout << "Ů\t";
		} 
				
		cout << abs->personArray[r].m_Age << "\t"
			<< abs->personArray[r].m_Phone << "\t"
			<< abs->personArray[r].m_Addr << endl;			 
	}
	
	system("pause");//�����������
	system("cls");//�������� 
}

void updatePerson(Addressbooks * abs)
{
	cout << "�������޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	
	int r = existPerson(abs,name);
	
	if(r == -1)
	{
		cout << "û�д���ϵ��" << endl;
	}
	else
	{
		//����
		string name1;
		cout << "������������" << endl;
		cin >> name1;
		abs->personArray[r].m_Name = name1;
		//�Ա�
		int sex1 = 0;
		cout << "�������Ա�1���� 2Ů��" << endl;
		cin >> sex1;
		while(sex1 != 1 && sex1 != 2)
		{
			cout << "������Ϸ����֣�" << endl;
			cin >> sex1;
		}
		abs->personArray[r].m_Sex = sex1;
		//����
		int age1 = 0;
		cout << "���������䣨0-150����" << endl;
		cin >> age1;
		while(age1 < 0 || age1 > 150)
		{
			cout << "������Ϸ����֣�" << endl;
			cin >> age1;
		}
		abs->personArray[r].m_Age = age1;
		//�绰
		string phone1;
		cout << "������绰��" << endl;
		cin >> phone1;
		abs->personArray[r].m_Phone = phone1;
		//סַ
		string addr1;
		cout << "������סַ��" << endl;
		cin >> addr1;
		abs->personArray[r].m_Addr = addr1;
		
		cout << "�޸ĳɹ�" << endl;
	}
	
	system("pause");//�����������
	system("cls");//�������� 
}

void cleanPerson(Addressbooks * abs)
{
	char f = 'n';
	cout << "��ȷ�������ϵ���𣿸ò������ɳ��أ�(y or n)" << endl;
	cin >> f;
	while(f != 'y' && f != 'n')
	{
		cout << "������Ϸ����ţ�" << endl;
		cin >> f;
	}
	if(f == 'n')
	{
		system("pause");//�����������
	    system("cls");//�������� 
		return;
	}
	else
	{
		abs->m_Size = 0;
		cout << "��ճɹ�" << endl;
		system("pause");//�����������
	    system("cls");//��������  
	}
}

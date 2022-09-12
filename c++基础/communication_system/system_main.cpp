#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别 1男 2女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址 
	string m_Addr;
};

//设计通讯录结构体 
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size; 
};

//菜单显示 
void showMenu();
//1、添加联系人
void addPerson(Addressbooks * abs);
//2、显示联系人
void showPerson(Addressbooks * abs);
//检测某联系人是否存在，存在返回在数组中的位置，不存在返回-1
int existPerson(Addressbooks * abs,string name); 
//3、删除联系人
void deletePerson(Addressbooks * abs);
//4、查找联系人
void findPerson(Addressbooks * abs);
//5、修改联系人
void updatePerson(Addressbooks * abs);
//6、清空联系人
void cleanPerson(Addressbooks * abs);

int main()
{
	//通信录管理系统
	
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0; 
	
	int select = 0; //创建用户选择输入的变量
	
	while(true)
	{
		showMenu();
		
		cin >> select;
		
		switch(select)
		{
			case 1://1、添加联系人
				addPerson(&abs); // 利用地址传递，可以修饰实参 
				break;
			case 2://2、显示联系人
				showPerson(&abs);
				break;
			case 3://3、删除联系人
				deletePerson(&abs);
				break;
			case 4://4、查找联系人
				findPerson(&abs);
				break;
			case 5://5、修改联系人
				updatePerson(&abs);
				break;
			case 6://6、清空联系人
				cleanPerson(&abs);
				break;
			case 0://0、退出通讯录
				cout << "欢迎下次使用" << endl;
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
	cout << "*** 欢迎进入通讯录系统! ***" << endl;
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已满
	if(abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	} 
	else
	{
		//添加
		
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别：1男性 2女性" << endl;
		cin >> sex;
		while(sex != 1 && sex != 2)
		{
			cout << "请输入合法数字！" << endl;
			cin >> sex;
		}
		abs->personArray[abs->m_Size].m_Sex = sex;
		//年龄
		int age = 0;
		cout << "请输入年龄（0-150）：" << endl;
		cin >> age;
		while(age < 0 || age > 150)
		{
			cout << "请输入合法数字！" << endl;
			cin >> age;
		}
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		string addr;
		cout << "请输入住址：" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr; 
		
		//更新通信录人数
		abs->m_Size++;
		
		cout << "添加成功" << endl;
		
		system("pause");//按任意键继续
		system("cls");//清屏操作 
	}
}

void showPerson(Addressbooks * abs)
{
	if(abs->m_Size == 0)
	{
		cout << "当前记录为空！" << endl;
	}
	else
	{
		cout << "姓名\t" << "性别\t" << "年龄\t" << "电话\t" << "住址" << endl; 
		for(int i=0;i<abs->m_Size;i++)
		{
			cout << abs->personArray[i].m_Name << "\t";
			if(abs->personArray[i].m_Sex == 1)
			{
				cout << "男\t";
			}
			else
			{
				cout << "女\t";
			} 
				
				cout << abs->personArray[i].m_Age << "\t"
					<< abs->personArray[i].m_Phone << "\t"
					<< abs->personArray[i].m_Addr << endl;
		}
	}
	
	system("pause");//按任意键继续
	system("cls");//清屏操作 
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
	cout << "请输入删除的联系人姓名：" << endl;
	cin >> name;
	
	//记录指定联系人位置
	int res =  existPerson(abs,name);
	
	if(res == -1)
	{
		cout << "该联系人不存在！" << endl;
	}
	else
	{
		for(int i=res;i<abs->m_Size-1;i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
		
	system("pause");//按任意键继续
	system("cls");//清屏操作 
}

void findPerson(Addressbooks * abs)
{
	cout << "请输入查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	
	int r = existPerson(abs,name);
	
	if(r == -1)
	{
		cout << "没有此联系人" << endl;
	}
	else
	{
		cout << "姓名\t" << "性别\t" << "年龄\t" << "电话\t" << "住址" << endl; 
		cout << abs->personArray[r].m_Name << "\t";
		if(abs->personArray[r].m_Sex == 1)
		{
			cout << "男\t";
		}
		else
		{
			cout << "女\t";
		} 
				
		cout << abs->personArray[r].m_Age << "\t"
			<< abs->personArray[r].m_Phone << "\t"
			<< abs->personArray[r].m_Addr << endl;			 
	}
	
	system("pause");//按任意键继续
	system("cls");//清屏操作 
}

void updatePerson(Addressbooks * abs)
{
	cout << "请输入修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	
	int r = existPerson(abs,name);
	
	if(r == -1)
	{
		cout << "没有此联系人" << endl;
	}
	else
	{
		//姓名
		string name1;
		cout << "请输入姓名：" << endl;
		cin >> name1;
		abs->personArray[r].m_Name = name1;
		//性别
		int sex1 = 0;
		cout << "请输入性别：1男性 2女性" << endl;
		cin >> sex1;
		while(sex1 != 1 && sex1 != 2)
		{
			cout << "请输入合法数字！" << endl;
			cin >> sex1;
		}
		abs->personArray[r].m_Sex = sex1;
		//年龄
		int age1 = 0;
		cout << "请输入年龄（0-150）：" << endl;
		cin >> age1;
		while(age1 < 0 || age1 > 150)
		{
			cout << "请输入合法数字！" << endl;
			cin >> age1;
		}
		abs->personArray[r].m_Age = age1;
		//电话
		string phone1;
		cout << "请输入电话：" << endl;
		cin >> phone1;
		abs->personArray[r].m_Phone = phone1;
		//住址
		string addr1;
		cout << "请输入住址：" << endl;
		cin >> addr1;
		abs->personArray[r].m_Addr = addr1;
		
		cout << "修改成功" << endl;
	}
	
	system("pause");//按任意键继续
	system("cls");//清屏操作 
}

void cleanPerson(Addressbooks * abs)
{
	char f = 'n';
	cout << "您确定清空联系人吗？该操作不可撤回！(y or n)" << endl;
	cin >> f;
	while(f != 'y' && f != 'n')
	{
		cout << "请输入合法符号！" << endl;
		cin >> f;
	}
	if(f == 'n')
	{
		system("pause");//按任意键继续
	    system("cls");//清屏操作 
		return;
	}
	else
	{
		abs->m_Size = 0;
		cout << "清空成功" << endl;
		system("pause");//按任意键继续
	    system("cls");//清屏操作  
	}
}

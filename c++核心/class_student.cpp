#include<iostream>
using namespace std;

//���һ��ѧ���� 
class Student
{
public:
	
	//���е����Ժ���Ϊ��ͳһ��Ϊ ��Ա
	//����  ��Ա����  ��Ա����
	//��Ϊ  ��Ա����  ��Ա���� 
	
	 //������������ѧ��
	 string name;
	 string sno;
	 
	 //��Ϊ 
	 //��ʾѧ����������ѧ��
	 void showInfo()
	 {
	 	cout << "������" << name << " ѧ�ţ�" << sno << endl;
	 } 
	 //������ѧ�Ÿ�ֵ
	 void setName(string sname)
	 {
	 	name = sname;
	 } 
	 void setSno(string num) 
	 {
	 	sno = num;
	 }
};

int main()
{
	Student s1;
	s1.name = "����";
	s1.sno = "123456";
	
	s1.showInfo();
	
	Student s2;
	s2.setName("����");
	s2.setSno("654321");
	
	s2.showInfo();
	
	system("pause");
	return 0;
} 

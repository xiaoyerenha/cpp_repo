#pragma once //��ֹͷ�ļ��ظ����� 
#include<iostream> //�������������ͷ�ļ� 
using namespace std; //ʹ�ñ�׼�����ռ� 
#include "worker.h"
#include <fstream>

#define FILENAME "empFile.txt"

class WorkerManager {
	public:
		//���캯�� 
		WorkerManager();
		
		//չʾ�˵�
		void Show_Menu(); //���û��Ĺ�ͨ����2
		
		//�˳�ϵͳ4
		void exitSystem(); 
		
		//����ְ��11
		void Add_Emp(); 
		
		//�����ļ�12
		void save(); 
		
		void init_Emp();//��ʼ��Ա��14
		//����ְ���������Լ�ְ�����ݣ���ʼ��Worker ** m_EmpArrayָ�� 
		
		//��ʾְ��15
		void Show_Emp(); 
		
		//ɾ��Ա��16
		void Del_Emp();
		
		//�޸�ְ��17
		void Mod_Emp(); 
		
		//����ְ��18
		void Find_Emp();
		
		//����ְ��19
		void Sort_Emp(); 
		
		//����ļ�20
		void Clean_File(); 
		
		//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ����������λ�ã������ڷ���-1
		int IsExist(int id); 
		
		//����������11�ж������ٿռ䣬�ֶ��ͷ� 
		~WorkerManager();
		
		//��¼�ļ��е���������10
		int m_EmpNum;
		
		//Ա�������ָ��
		Worker ** m_EmpArray; 
		
		//��־�ļ��Ƿ�Ϊ��13
		bool m_FileIsEmpty;
		//��Ȼʵ�������ְ���󱣴浽�ļ��Ĳ�������ÿ�ο�ʼ���г��򣬲�û�н��ļ������ݶ�ȡ��������
		//���ҳ������л�������ļ�������
		//��˹��캯����ʼ�����ݵ������Ϊ���֣�
		//1.��һ��ʹ�ã��ļ�δ����
		//2.�ļ����ڣ��������ݱ��û����
		
		//3.�ļ����ڣ����ұ���ְ������������
		int get_EmpNum(); //ͳ������ 
		
		 
};

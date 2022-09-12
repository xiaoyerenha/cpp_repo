/*
    Name:��̬������������װ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 15:53:56
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//CPU������ 
class CPU {
public:
	//������㺯��
	virtual void calculate() = 0; 
}; 
//�Կ�������
class VideoCard {
public:
	//������ʾ����
	virtual void display() = 0; 
}; 
//�ڴ���������
class Memory {
public:
	//����洢����
	virtual void storage() = 0; 
}; 

//������
class Computer {
	public:
		Computer(CPU *cpu,VideoCard *vc,Memory *mem) {
			m_cpu = cpu;
			m_vc = vc;
			m_mem = mem;
		}
		
		void doWork() {//�ṩ�������� 
			m_cpu->calculate();
			m_vc->display();
			m_mem->storage(); 
		}
		
		~Computer() {
			//�ͷ��������
			if(m_cpu != NULL) {
				delete m_cpu;
				m_cpu = NULL;
			} 
			if(m_vc != NULL) {
				delete m_vc;
				m_vc = NULL;
			}
			if(m_mem != NULL) {
				delete m_mem;
				m_mem = NULL;
			}
		}
	private:
		CPU *m_cpu;
		VideoCard *m_vc;
		Memory *m_mem; 
}; 

//Intel������� 
class IntelCPU : public CPU {
	public:
		void calculate() {
			cout << "Intel��CPU��ʼ������" << endl;
		}
};
class IntelVideoCard : public VideoCard {
	public:
		void display() {
			cout << "Intel���Կ���ʼ��ʾ��" << endl;
		}
};
class IntelMemory : public Memory {
	public:
		void storage() {
			cout << "Intel���ڴ�����ʼ�洢��" << endl;
		}
};

//Lenovo������� 
class LenovoCPU : public CPU {
	public:
		void calculate() {
			cout << "Lenovo��CPU��ʼ������" << endl;
		}
};
class LenovoVideoCard : public VideoCard {
	public:
		void display() {
			cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
		}
};
class LenovoMemory : public Memory {
	public:
		void storage() {
			cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
		}
};

void test01() {
	//��һ̨������� 
	CPU * Icpu = new IntelCPU;
	VideoCard * Ivc = new IntelVideoCard;
	Memory * Imem = new IntelMemory;
	
	//��һ̨���� 
	Computer  *c1 = new Computer(Icpu,Ivc,Imem);
	c1->doWork();
	delete c1;
	
	cout << "\n\n=========================\n\n";
	
	//�ڶ�̨���� 
	Computer  *c2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	c2->doWork();
	delete c2;
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:多态案例：电脑组装 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 15:53:56
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//CPU抽象类 
class CPU {
public:
	//抽象计算函数
	virtual void calculate() = 0; 
}; 
//显卡抽象类
class VideoCard {
public:
	//抽象显示函数
	virtual void display() = 0; 
}; 
//内存条抽象类
class Memory {
public:
	//抽象存储函数
	virtual void storage() = 0; 
}; 

//电脑类
class Computer {
	public:
		Computer(CPU *cpu,VideoCard *vc,Memory *mem) {
			m_cpu = cpu;
			m_vc = vc;
			m_mem = mem;
		}
		
		void doWork() {//提供工作函数 
			m_cpu->calculate();
			m_vc->display();
			m_mem->storage(); 
		}
		
		~Computer() {
			//释放三个零件
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

//Intel零件厂商 
class IntelCPU : public CPU {
	public:
		void calculate() {
			cout << "Intel的CPU开始计算了" << endl;
		}
};
class IntelVideoCard : public VideoCard {
	public:
		void display() {
			cout << "Intel的显卡开始显示了" << endl;
		}
};
class IntelMemory : public Memory {
	public:
		void storage() {
			cout << "Intel的内存条开始存储了" << endl;
		}
};

//Lenovo零件厂商 
class LenovoCPU : public CPU {
	public:
		void calculate() {
			cout << "Lenovo的CPU开始计算了" << endl;
		}
};
class LenovoVideoCard : public VideoCard {
	public:
		void display() {
			cout << "Lenovo的显卡开始显示了" << endl;
		}
};
class LenovoMemory : public Memory {
	public:
		void storage() {
			cout << "Lenovo的内存条开始存储了" << endl;
		}
};

void test01() {
	//第一台电脑零件 
	CPU * Icpu = new IntelCPU;
	VideoCard * Ivc = new IntelVideoCard;
	Memory * Imem = new IntelMemory;
	
	//第一台电脑 
	Computer  *c1 = new Computer(Icpu,Ivc,Imem);
	c1->doWork();
	delete c1;
	
	cout << "\n\n=========================\n\n";
	
	//第二台电脑 
	Computer  *c2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	c2->doWork();
	delete c2;
}

int main()
{
    test01();
    
    return 0;
}


/*
    Name:��̬������������Ʒ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 11:33:34
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��Ʒ���� 
class AbstractDrinkBase {
	public:
		//��ˮ
		void func1() {
			cout << "��ˮ" << endl;
		}
		//����
		virtual void func2() = 0;
		//���뱭��
		void func3() {
			cout << "���뱭��" << endl;
		}
		//���븨�� 
		virtual void func4() = 0;
		
		//������Ʒ
		void makeDrink() {
			func1();
			func2();
			func3();
			func4();
		} 
};

//��������
class Coffee : public AbstractDrinkBase {
	public:
		//����
		virtual void func2() {
			cout << "���ݿ���" << endl;
		}
		//���븨�� 
		virtual void func4() {
			cout << "�����Ǻ�ţ��" << endl;
		}
}; 

//������ˮ 
class Tea : public AbstractDrinkBase {
	public:
		//����
		virtual void func2() {
			cout << "���ݲ�Ҷ" << endl;
		}
		//���븨�� 
		virtual void func4() {
			cout << "��������" << endl;
		}
};

//��������
void doWork(AbstractDrinkBase * abd) { //AbstractDrinkBase * abd = new Coffee;
	abd->makeDrink();
	delete abd;
}

void test01() {
	cout << "�������ȣ�" << endl;
	//AbstractDrinkBase * adb = new Coffee;
	//adb->func1();
	//adb->func2();
	//adb->func3();
	//adb->func4();
	//delete adb;
	doWork(new Coffee);
	
	cout << "\n====================\n\n������ˮ��" << endl;;
	//adb = new Tea;
	//adb->func1();
	//adb->func2();
	//adb->func3();
	//adb->func4();
	//delete adb;
	doWork(new Tea);
} 

int main()
{
    test01();
    
    return 0;
}


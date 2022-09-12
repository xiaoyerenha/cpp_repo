#pragma once
#include<iostream> 
using namespace std;

template<class T>
class myArray {
	public:
		//���캯��(����) 
		myArray(int capacity) {
			
			//cout << "myArray���вι������" << endl;
			
			this->m_Capacity = capacity;
			this->m_Size = 0;
			this->pAddress = new T[this->m_Capacity]; 
		}
		
		//��������
		myArray(const myArray &arr) {
			
			//cout << "myArray�Ŀ����������" << endl;
			
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			//this->pAddress = arr.pAddress;
			
			//��� 
			this->pAddress = new T[arr.m_Capacity];
			//��arr�е����ݶ���������
			for(int i=0;i<this->m_Size;i++) {
				this->pAddress[i] = arr.pAddress[i];
			} 
		}
		
		//operator= ��ֹǳ�������� a=b=c
		myArray& operator=(const myArray &arr) {
			
			//cout << "myArray�� operator= ����" << endl;
			
			//���ж�ԭ�������Ƿ������ݣ���������ͷ� 
			if(this->pAddress != NULL) {
				delete [] this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0; 
			}
			
			//���
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			this->pAddress = new T[arr.m_Capacity];
			
			for(int i=0;i<this->m_Size;i++) {
				this->pAddress[i] = arr.pAddress[i];
			}
			
			return *this; 
			
		} 
		
		//β�巨
		void pushBack(const T &val) {
			
			//�ж����������Ƿ���ڴ�С
			if(this->m_Capacity == this->m_Size) {
				cout << "��������������ʧ��" << endl;
				return;
			} 
			
			this->pAddress[this->m_Size] = val;//������ĩβ�������� 
			this->m_Size++;//���������С 
		} 
		
		//βɾ��
		void popBack() {
			
			//�ж������С�Ƿ�Ϊ�� 
			if(this->m_Size == 0) {
				cout << "�����ѿգ�ɾ��ʧ��" << endl;
				return;
			} 
			
			//�û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ�� 
			this->m_Size--;//���������С 
		}
		
		//ͨ���±귽ʽ���������е�Ԫ��  arr[0]=100
		//���� []
		T& operator[](int index) {
			return this->pAddress[index];
		} 
		
		//������������
		int getCapacity() {
			return this->m_Capacity;
		} 
		
		//���������С
		int getSize() {
			return this->m_Size;
		} 
		
		//���� 
		~myArray() {
			if(this->pAddress != NULL) {
				
				//cout << "myArray����������" << endl;
			
				delete [] this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0; 
			}
		}
		
	private:
		T * pAddress;//ָ��ָ��������ٵ���ʵ���� 
		int m_Capacity;//�������� 
		int m_Size;//�����С 
};

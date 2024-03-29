#pragma once
#include<iostream> 
using namespace std;

template<class T>
class myArray {
	public:
		//构造函数(容量) 
		myArray(int capacity) {
			
			//cout << "myArray的有参构造调用" << endl;
			
			this->m_Capacity = capacity;
			this->m_Size = 0;
			this->pAddress = new T[this->m_Capacity]; 
		}
		
		//拷贝构造
		myArray(const myArray &arr) {
			
			//cout << "myArray的拷贝构造调用" << endl;
			
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			//this->pAddress = arr.pAddress;
			
			//深拷贝 
			this->pAddress = new T[arr.m_Capacity];
			//将arr中的数据都拷贝过来
			for(int i=0;i<this->m_Size;i++) {
				this->pAddress[i] = arr.pAddress[i];
			} 
		}
		
		//operator= 防止浅拷贝问题 a=b=c
		myArray& operator=(const myArray &arr) {
			
			//cout << "myArray的 operator= 调用" << endl;
			
			//先判断原来堆区是否有数据，如果有先释放 
			if(this->pAddress != NULL) {
				delete [] this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0; 
			}
			
			//深拷贝
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			this->pAddress = new T[arr.m_Capacity];
			
			for(int i=0;i<this->m_Size;i++) {
				this->pAddress[i] = arr.pAddress[i];
			}
			
			return *this; 
			
		} 
		
		//尾插法
		void pushBack(const T &val) {
			
			//判断数组容量是否等于大小
			if(this->m_Capacity == this->m_Size) {
				cout << "数组已满，插入失败" << endl;
				return;
			} 
			
			this->pAddress[this->m_Size] = val;//在数组末尾插入数据 
			this->m_Size++;//更新数组大小 
		} 
		
		//尾删法
		void popBack() {
			
			//判断数组大小是否为空 
			if(this->m_Size == 0) {
				cout << "数组已空，删除失败" << endl;
				return;
			} 
			
			//用户访问不到最后一个元素，即为尾删，逻辑删除 
			this->m_Size--;//更新数组大小 
		}
		
		//通过下标方式访问数组中的元素  arr[0]=100
		//重载 []
		T& operator[](int index) {
			return this->pAddress[index];
		} 
		
		//返回数组容量
		int getCapacity() {
			return this->m_Capacity;
		} 
		
		//返回数组大小
		int getSize() {
			return this->m_Size;
		} 
		
		//析构 
		~myArray() {
			if(this->pAddress != NULL) {
				
				//cout << "myArray的析构调用" << endl;
			
				delete [] this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0; 
			}
		}
		
	private:
		T * pAddress;//指针指向堆区开辟的真实数组 
		int m_Capacity;//数组容量 
		int m_Size;//数组大小 
};

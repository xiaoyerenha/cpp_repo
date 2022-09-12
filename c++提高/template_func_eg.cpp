/*
    Name:����ģ�尸�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/13 19:53:25
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��������ģ�� 
template<typename T>
void swapNum(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

//��ͬ���������������򡾴Ӵ�С�� 
template<typename T>
void sortArray(T a[], int len) {
//	T maxTemp;
//	int sub = 0;
	for(int i=0;i<len-1;i++) {
		int max = i;//����һ�����ֵ 
		for(int j=i+1;j<len;j++) {//�ҵ����������ֵ 
			if(a[j] > a[max]) {
//				maxTemp = a[j];
//				sub = j;
				max = j;
			}
		}
//		maxTemp = a[i];
//		a[i] = a[sub];
//		a[sub] = maxTemp;
		if(max != i) {//�����ֵ��һ�£��򽻻����� 
			swapNum(a[i],a[max]);
		}
	}
}


//��ӡ���麯��ģ�� 
template<typename T>
void printArray(T a[], int len) {
	for(int i=0;i<len;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void test01() {
	
	//����char���� 
	char arr[] = "dcabfe";
	int len = sizeof(arr) / sizeof(char);
	sortArray(arr, len);
	printArray(arr, len);
	
}

void test02() {
	
	//����int���� 
	int arr[] = {9,6,2,5,1,4};
	int len = sizeof(arr) / sizeof(int);
	sortArray(arr, len);
	printArray(arr, len);
	
}

int main()
{
    test01();
    test02();
    
    return 0;
}


/*
    Name:函数模板案例 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/13 19:53:25
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//交换函数模板 
template<typename T>
void swapNum(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

//不同数据类型数组排序【从大到小】 
template<typename T>
void sortArray(T a[], int len) {
//	T maxTemp;
//	int sub = 0;
	for(int i=0;i<len-1;i++) {
		int max = i;//假设一个最大值 
		for(int j=i+1;j<len;j++) {//找到真正的最大值 
			if(a[j] > a[max]) {
//				maxTemp = a[j];
//				sub = j;
				max = j;
			}
		}
//		maxTemp = a[i];
//		a[i] = a[sub];
//		a[sub] = maxTemp;
		if(max != i) {//若最大值不一致，则交换两数 
			swapNum(a[i],a[max]);
		}
	}
}


//打印数组函数模板 
template<typename T>
void printArray(T a[], int len) {
	for(int i=0;i<len;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void test01() {
	
	//测试char数组 
	char arr[] = "dcabfe";
	int len = sizeof(arr) / sizeof(char);
	sortArray(arr, len);
	printArray(arr, len);
	
}

void test02() {
	
	//测试int数组 
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


#include<iostream>
using namespace std;

int main()
{
	
	//1. �������� ������[���鳤��]; 
	int arr[5];
	
	//�������е�Ԫ�ؽ��и�ֵ
	//����Ԫ�ص��±��Ǵ�0��ʼ������ 
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50; 
	
	//��������Ԫ��
	cout << arr[0] << endl;
	
	//2. �������� ������[���鳤��] = {ֵ1, ֵ2...}; 
	//����ڳ�ʼ������ʱ��û��ȫ����д�꣬����0���ʣ������ 
	int arr2[5] = {10,20,30};
	
	//����ѭ�����������Ԫ��
	for(int i=0;i<5;i++)
	{
		cout << arr2[i] << endl;
	} 
	
	//3. �������� ������[] = {ֵ1, ֵ2...}; 
	//��������ʱ�������г�ʼ���� 
	int arr3[] = {10,20,30,40,50,60};
	int length = sizeof(arr3)/sizeof(arr3[0]);
	
	for(int i=0;i<length;i++)
	{
		cout << arr3[i] << endl;
	} 
	
	system("pause");
	return 0;	
} 

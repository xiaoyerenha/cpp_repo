#include<iostream>
using namespace std;

int main()
{
	//ð������ʵ������
	
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	cout << "����ǰ��" << endl;
	for(int i=0;i<length;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//�㷨��ʼ
	//�ܹ�����������Ԫ�ظ��� - 1 
	for(int i=0;i<length-1;i++)
	{
		//�ڲ�ѭ���Աȣ� Ԫ�ظ��� - ��ǰ���� - 1 
		for(int j=0;j<length-i-1;j++)
		{
			//�����һ�����ֱȵڶ����󣬽�����������
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			} 
		}
	} 
	
	cout << "�����" << endl;
	for(int i=0;i<length;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;

void bubbleSort(int * p, int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				//int temp = p[j];
				//p[j] = p[j+1];
				//p[j+1] = temp;
				int temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
			
		}
	}
} 

int main()
{
	//ָ�룬����ͺ���
	//��������װһ������������ð������ʵ�ֶ�������������
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	
	cout << "����ǰ��" << endl;
	for(int i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	bubbleSort(arr,len);
	
	cout << "�����" << endl;
	for(int i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	 
	system("pause");
	return 0;
}

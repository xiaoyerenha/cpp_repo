#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú��������� 
//����������
int max(int a, int b); 

int main()
{
	
	int a = 10;
	int b = 20;
	
	cout << max(a,b) << endl; 
	
	system("pause");
	return 0;
}

//���� 
int max(int a, int b)
{
	return a > b ? a : b;
} 

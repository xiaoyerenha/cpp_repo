#include<iostream>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero h[], int len)
{
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(h[j].age > h[j+1].age)
			{
				struct Hero temp = h[j];
				h[j] = h[j+1];
				h[j+1] = temp;
			}
		}
	}
}

int main()
{
	//�����ṹ������
	struct Hero h[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"} 
	}; 
	
	int len = sizeof(h) / sizeof(h[0]);
	
	//���������ð������
	bubbleSort(h,len); 
	
	//����������
	for(int i=0;i<len;i++)
	{
		cout << "������" << h[i].name
			<< " ���䣺" << h[i].age
			<< " �Ա�" << h[i].sex << endl;
	} 
	 
	system("pause");
	return 0;
} 

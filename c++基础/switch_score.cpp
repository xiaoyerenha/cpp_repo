#include<iostream>
using namespace std;

int main()
{
	//switch���
	//����Ӱ���д��
	// 10 ~ 9 ����
	// 8 ~ 7 �ǳ���
	// 6 ~5 һ��
	// 5���� ��Ƭ
	
	int score = 0;
	cout << "�������Ӱ���֣�" << endl;
	cin >> score;
	cout << "������ĵ�Ӱ����Ϊ��" << score << endl; 
	
	switch(score)
	{
		case 10:
		case 9:
			cout << "�����Ӱ" << endl;
			break;
		case 8:
		case 7:
			cout << "�ǳ��õ�Ӱ" << endl;
			break;
		case 6:
		case 5:
			cout << "һ���Ӱ" << endl;
			break;
		default:
			 cout << "��Ƭ" << endl;
	}
	
	system("pause");
	return 0;
}

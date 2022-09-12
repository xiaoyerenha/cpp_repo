#include<iostream>
using namespace std;

int main()
{
	//ÇÃ×À×Ó
	int j=0, k=0;
	for(int i=1; i<=100; i++)
	{
		j = i % 10;
		k = i % 100 / 10;
		if(j == 7 || k == 7 || i%7==0)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << i << endl;
		}
	} 
	
	system("pause");
	return 0;
}

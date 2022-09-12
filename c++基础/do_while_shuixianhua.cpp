#include<iostream>
using namespace std;

int main()
{
	//Ë®ÏÉ»¨Êı
	// 1^3 + 5^3 + 3^3 = 153
	 
	int num = 100;
	int i=0, j=0, k=0;
	do
	{
		i = num / 100;
		j = (num % 100) / 10;
		k = num % 10;
		if(i*i*i + j*j*j + k*k*k == num)
		{
			cout << num << endl;
		}
		num++;
	}while(num<1000);
	
	system("pause");
	return 0;
} 

#include<iostream>
using namespace std;

int main()
{
	//Êı×éÔªËØÄæÖÃ
	
	int arr[5] = {1,3,2,5,4};
	int length = sizeof(arr) / sizeof(arr[0]);
	int i=0,j=length-1;
	int t = 0;
	
	while(i != j)
	{
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		i++;
		j--;
	}
	for(int k=0;k<length;k++)
	{
		cout << arr[k] << endl;
	}
	 
	system("pause");
	return 0;
}

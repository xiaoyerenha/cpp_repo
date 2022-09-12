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
	//创建结构体数组
	struct Hero h[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"} 
	}; 
	
	int len = sizeof(h) / sizeof(h[0]);
	
	//按年龄进行冒泡排序
	bubbleSort(h,len); 
	
	//升序后结果输出
	for(int i=0;i<len;i++)
	{
		cout << "姓名：" << h[i].name
			<< " 年龄：" << h[i].age
			<< " 性别：" << h[i].sex << endl;
	} 
	 
	system("pause");
	return 0;
} 

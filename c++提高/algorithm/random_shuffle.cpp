/*
    Name:random_shuffle 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 20:47:57
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

//洗牌 指定范围内的元素随机调整次序

//random_shuffle(iterator beg, iterator end);
// 指定范围内的元素随机调整次序
// beg 开始迭代器
// end 结束迭代器

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	//随机数种子
	srand((unsigned int)time(NULL));
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	//打乱顺序 
	random_shuffle(v.begin(),v.end());
	
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}


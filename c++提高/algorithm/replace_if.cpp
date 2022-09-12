/*
    Name:replace_if
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:26:58
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//将区间内满足条件的元素，替换成指定元素

//replace_if(iterator beg, iterator end, _pred, newvalue);
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素

//总结：replace_if按条件查找，可以利用仿函数灵活筛选满足的条件

void myPrint(int val) {
	cout << val << " ";
}

class Greater20 {
	public:
		bool operator()(int val) {
			return val > 20;
		}
};

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	
	cout << "替换前：" << endl;
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
	cout << "替换后：" << endl;
	replace_if(v.begin(),v.end(),Greater20(),2000); 
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
}

int main()
{
    test01();
    
    return 0;
}


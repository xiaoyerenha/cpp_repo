/*
    Name:binary_search
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 22:42:26
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//查找指定元素是否存在

//bool binary_search(iterator beg, iterator end, value);
// 查找指定的元素，查到 返回true 否则false
// 注意: 在无序序列中不可用
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素

//总结：二分查找法查找效率很高，值得注意的是查找的容器中元素必须的有序序列

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	bool ret = binary_search(v.begin(),v.end(),5);
	
	if(ret) {
		cout << "查到" << endl; 
	}
	else {
		cout << "未查到" << endl;
	}
	
}

int main()
{
    test01();
    
    return 0;
}


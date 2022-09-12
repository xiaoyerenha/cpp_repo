/*
    Name:案例-评委打分 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/8 16:11:45
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

//1. 创建五名选手，放到vector中
//2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3. sort算法对deque容器中分数排序，去除最高和最低分
//4. deque容器遍历一遍，累加总分
//5. 获取平均分

class Person {
	public:
		Person(string name,int score) {
			this->m_Name = name;
			this->m_Score = score;
		}
		
		string m_Name;//姓名 
		int m_Score;//平均分
}; 

void createPerson(vector<Person> &v) {
	
	string nameSeed = "ABCDE";
	for(int i=0;i<5;i++) {
		string name = "选手";
		name += nameSeed[i];
		
		int score = 0;
		
		Person p(name,score);
		
		//将创建的Person对象放到容器中 
		v.push_back(p);
	}
	
} 

void setScore(vector<Person> &v) {
	
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
		
		deque<int> d;
		
		for(int i=0;i<10;i++) {
			int score = rand() % 41 + 60; //60-100
			d.push_back(score);
		}
		
		sort(d.begin(),d.end());
		
		d.pop_back();
		d.pop_front();
		
		int sum = 0;
		for(int i=0;i<d.size();i++) {
			sum += d[i];
		}
		int avg = sum / d.size();
		(*it).m_Score = avg;
		
	}
	
}

int main()
{
	
	//随机数种子
	srand((unsigned int)time(NULL)); 
	
	
    //1.创建5名选手
    vector<Person> v; //存放选手的容器 
    createPerson(v);
    
    //测试
//	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
//		cout << (*it).m_Name << " " << (*it).m_Score << endl;
//	} 
	
	//2.给5名选手打分
	setScore(v);
	
	
	//3.显示最后得分 
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++) {
		cout << (*it).m_Name << " " << (*it).m_Score << endl;
	} 
    
    return 0;
}


#pragma once
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <typename T>
T FindBackN(list<T> li, int n)//查找链表倒数第n个节点
{ //时间复杂度为n
	auto it = li.begin();//指针1
	auto it2 = it;//指针2
	for (int i = 0; i < n; i++) //指针2推至指针1后第N位
	{
		it2++;
	}
	while (it2 !=li.end())
	{
		it++;
		it2++;
	}
	
	return *it;
}



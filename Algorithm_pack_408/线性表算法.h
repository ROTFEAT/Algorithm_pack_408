#pragma once
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <typename T>
T FindBackN(list<T> li, int n)//������������n���ڵ�
{ //ʱ�临�Ӷ�Ϊn
	auto it = li.begin();//ָ��1
	auto it2 = it;//ָ��2
	for (int i = 0; i < n; i++) //ָ��2����ָ��1���Nλ
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



#pragma once
#include<iostream>
#include<vector>
#include<cstdio>
#include<time.h>
using namespace std;
#define MAX 100
template<typename T> 
void print_ve(vector<T> ve)
{
	for (int i = 0; i < ve.size(); i++)
	{
		//printf(ve[i]);
		
		cout << ve[i] << " ";
	}
}

vector<int>  gengerate_arr_int(int n)
{	
	vector<int> res;
	srand((unsigned)time(NULL));//srand()��������һ���Ե�ǰʱ�俪ʼ��������� 
	for (int i = 0; i < n; i++)
		res.push_back(rand() % MAX);
	return res;
}
#pragma once
#include<iostream>
#include<vector>
#include<cstdio>
#include<list>
#include<time.h>
#include"���������.h"
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

template<typename T>
void print_list(list<T> li)
{
	auto it = li.begin();
	while(it!=li.end())
	{
		cout << *it << " ";
		it++;
	}
}

vector<int>  gengerate_arr_int(int n)//����n��arr
{	
	vector<int> res;
	srand((unsigned)time(NULL));//srand()��������һ���Ե�ǰʱ�俪ʼ��������� 
	for (int i = 0; i < n; i++)
		res.push_back(rand() % MAX);
	return res;
}

list<int> gengerate_list_int(int n)//����n��list
{
	list<int> res;
	srand((unsigned)time(NULL));//srand()��������һ���Ե�ǰʱ�俪ʼ��������� 
	for (int i = 0; i < n; i++)
		res.push_back(rand() % MAX);
	return res;
}

void PrintLinkedList(Node *node)
{
	
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}


//��ת����  ���Խ��ѭ�������ƶ�������ĺ���
template<typename T>
void reverse(vector<T>&ve, int low, int hight)//1Ϊ��һ����������0
{
	low--;
	hight--;
	while (low < hight)
	{
		auto temp = ve[low];
		ve[low] = ve[hight];
		ve[hight] = temp;
		low++;
		hight--;
	}
	auto it = ve.begin();
	while (it != ve.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}






// Algorithm_pack_408.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include"pch.h"
#include"sort.h"
#include"utils.h"
#include<iostream>
#include<random>
#include<ctime>
#include"线性表算法.h"
 
using namespace std;
int main()
{
	
	//vector<int> ve = gengerate_arr_int(5); //生成随机数组
	//list<int> li = gengerate_list_int(8); //生成随机链表
	vector<char> ve{ 'a','b','c','d','1','2','3','4','5'};//循环左右移动测试数组
	reverse(ve, 1, 4);
	reverse(ve, 5, 9);
	reverse(ve, 1, 9); //这三步完成了循环左移4位



	
	//print_ve(ve);//打印数组
	//print_list(li)//打印链表
	
	//————————//

	
}






#pragma once
#include<iostream>
#include<vector>
using namespace std;
//(直接插入排序)： 从原数组的第二位开始判断，与前一位进行比较 若小于前一位则交换 
//若交换后还是小于前一位 则继续与前一位交换，直到比前一位大为止。 外层为固定for循环
//内层为不定while循环。  这是舞动的排序算法的思想 
//天勤的思想是在while内部不进行多次交换 只在找到了该数字最终应该待的位置后才进行交换
void insertSort(vector<int> ve)  //时间复杂度n^2 空间复杂度1
{
	for (int i = 1; i < ve.size(); i++)
	{
		int j = i;
		while (j > 0&&ve[j] < ve[j - 1])//注意 括号中两个判断语句 若第一个就是错的 那第二个不会进行判断
		{ //所以这里括号中本该越界的 故没有越界
			swap(ve[j], ve[j - 1]);
			j--;
		}
	}
	print_ve(ve);
	checkOrder(ve);
}

//希尔排序是多间隔的插入排序， 若希尔的步长变为1 则 希尔排序变为插入排序
//希尔的步长逐次递减 故希尔排序又称为缩小增量排序 本质为插入排序
void shellSort(vector<int> ve)
{
	for (int step = 5; step > 0; step = step - 2)
	{
		for (int i = step; i < ve.size(); i+=step)
		{
			int j = i;
			while (j> 0 && ve[j] < ve[j - step])
			{
				swap(ve[j], ve[j - step]);
				j -= step;
			}
		}
	}
	print_ve(ve);
	checkOrder(ve);
}


void heapSort(vector<int> ve)
{
	vector<int> arr = ve;
	
}

void bubbleSort(vector<int> ve)
{
	vector<int> arr = ve;
	

}
#pragma once
#include<iostream>
#include<vector>
using namespace std;
//(ֱ�Ӳ�������)�� ��ԭ����ĵڶ�λ��ʼ�жϣ���ǰһλ���бȽ� ��С��ǰһλ�򽻻� 
//����������С��ǰһλ �������ǰһλ������ֱ����ǰһλ��Ϊֹ�� ���Ϊ�̶�forѭ��
//�ڲ�Ϊ����whileѭ����  �����趯�������㷨��˼�� 
//���ڵ�˼������while�ڲ������ж�ν��� ֻ���ҵ��˸���������Ӧ�ô���λ�ú�Ž��н���
void insertSort(vector<int> ve)  //ʱ�临�Ӷ�n^2 �ռ临�Ӷ�1
{
	for (int i = 1; i < ve.size(); i++)
	{
		int j = i;
		while (j > 0&&ve[j] < ve[j - 1])//ע�� �����������ж���� ����һ�����Ǵ�� �ǵڶ�����������ж�
		{ //�������������б���Խ��� ��û��Խ��
			swap(ve[j], ve[j - 1]);
			j--;
		}
	}
	print_ve(ve);
	checkOrder(ve);
}

//ϣ�������Ƕ����Ĳ������� ��ϣ���Ĳ�����Ϊ1 �� ϣ�������Ϊ��������
//ϣ���Ĳ�����εݼ� ��ϣ�������ֳ�Ϊ��С�������� ����Ϊ��������
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

void quickSort(vector<int>& ve, int low, int  hight)//ѡ���һ��Ϊ����
{  //��Ϊ�漰�˵ݹ� ���� ��Ҫȡ��ַ
	int i = low, j = hight;
	int temp;
	if (low < hight)//�ж��Ƿ�������������
	{
		temp = ve[low];//������������ һ��Ϊ��һ��
		while (i < j)
		{
			while (j > i && ve[j] >= temp) j--; //ע�� һ���Ǵ�j Ҳ���Ǹ�λ��ʼ��
			if (i < j)//��Ϊ ֻ�е�λ��temp�Ѿ�������  ���Կ��԰Ѹ�λ������һλȥ
			{
				ve[i] = ve[j];
				i++;
			}
			while (i < j && ve[i] < temp) i++;
			if (i < j)
			{
				ve[j] = ve[i];
				j--;
			}

		}
		ve[i] = temp;
		quickSort(ve, low, i - 1);//ע����i�����´εݹ��� �����λ���Ѿ�ȷ���� �����ٴ�����
		quickSort(ve, i + 1, hight);
	}
}


void bubbleSort(vector<int> ve)//ð�� ûɶ˵��
{
	for (int i = 0; i < ve.size(); i++)
	{
		for (int j = 0; j < ve.size() - i - 1; j++)
		{
			if (ve[j] > ve[j + 1]) swap(ve[j], ve[j + 1]);
		}
	}
	print_ve(ve);
	//checkOrder(ve);
}

void selectSort(vector<int> ve) //ѡ������  
{
	for (int i = 0; i < ve.size(); i++)
	{ //ÿ��ѡ����ֵ�δ����ĵ�һ�����±�Ϊ��С���±꣬
		int min = i;
		for (int j = i+1; j < ve.size(); j++)
		{
			if (ve[min] > ve[j]) {
				min = j;
			}
		}
		swap(ve[min], ve[i]);
	}
	print_ve(ve);
	checkOrder(ve);
}


void heapSort(vector<int> ve)
{
	vector<int> arr = ve;
	
}


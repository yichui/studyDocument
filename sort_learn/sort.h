#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>

//ֱ������
void insertSort(int arr[], int number);

//�����㷨
void quickSort(int arr[], int left, int right);

//������
void headSort(int arr[], int length);

//�鲢����
void mergeSort(int arr[], int block[],  int startIndex, int endIndex);

#endif


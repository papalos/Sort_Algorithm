#pragma once
#include <string>
#include <random>
#include <algorithm>
#include <functional>
#include <iostream>
#include <fstream>
#include <chrono>

class Sort {
private:	
	unsigned *_arr;                               //��������� �� ������
	unsigned _lenght;                             //����� �������
	std::string _typeArr;                         //��� �������
	std::string _typeSort;                        //��� ����������
	
	long long _period;                              //������������ ���������� ���������


	void qmsort(unsigned * first, unsigned last);
	void merge(unsigned first, unsigned last);
	int valueRadix(unsigned number, int radix);

public:
	Sort();
	~Sort();

	//��������� ����� �������
	static enum Scale { PUNY = 100, LITTLE = 500, SMALL=1000, MIDDLE=5000, BIG=10000, GREAT=50000, HUGE=100000 } scale;
	static enum Cases { SORTED, REVERS, RANDOM_ARR} cases;

	//������ � ������ ��� �������
	unsigned int* GetArray();
	void SetArray(unsigned int*, unsigned);

	//���������� ������ �������� ����� �� ���������� ��������� �� 0 �� 3 000 000 000	
	void GenerateArray(Scale, Cases);

	// ����������
	void Selection();
	void Insert();
	void SortByShell();
	void Quick();
	void Merging();
	void RadixSort();

	//����� � ����
	void Print(std::string fullNameFile);

	void Testing(void(Sort::*algorithmSort)());
};

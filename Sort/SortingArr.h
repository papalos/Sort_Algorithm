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
	unsigned *_arr;                               //указатель на массив
	unsigned _lenght;                             //длина массива
	std::string _typeArr;                         //тип массива
	std::string _typeSort;                        //тип сортировки
	
	long long _period;                              //длительность исполнени€ алгоритма


	void qmsort(unsigned * first, unsigned last);
	void merge(unsigned first, unsigned last);
	int valueRadix(unsigned number, int radix);

public:
	Sort();
	~Sort();

	//константы длины массива
	static enum Scale { PUNY = 100, LITTLE = 500, SMALL=1000, MIDDLE=5000, BIG=10000, GREAT=50000, HUGE=100000 } scale;
	static enum Cases { SORTED, REVERS, RANDOM_ARR} cases;

	//геттер и сеттер дл€ массива
	unsigned int* GetArray();
	void SetArray(unsigned int*, unsigned);

	//генерирует массив заданной длины со значени€ми элементов от 0 до 3 000 000 000	
	void GenerateArray(Scale, Cases);

	// сортировки
	void Selection();
	void Insert();
	void SortByShell();
	void Quick();
	void Merging();
	void RadixSort();

	//¬ывод в файл
	void Print(std::string fullNameFile);

	void Testing(void(Sort::*algorithmSort)());
};

#include "SortingArr.h"


Sort::Sort() : _arr(nullptr), _lenght(0), _typeArr(""), _typeSort("Is not sorted"), _period(0) {}
Sort::~Sort() {
	delete[] _arr;
}

//(���������)
void Sort::GenerateArray(Sort::Scale scale, Sort::Cases cases) {
	std::random_device rd;                                        // ������������������� ��������� 
	std::mt19937 gen(rd());                                       // ���������� ��������� �������  
	std::uniform_int_distribution<unsigned> dist(0, 3000000000);  // ������������ ��������� ����� 0 � 3000000000.
	_lenght = scale;
	_arr = new unsigned int [scale];
	for (int i = 0; i < scale; i++) {                             // ��������� ������
		_arr[i] = dist(gen);                                       // �������� ��������� � ��������������.
	}

	switch (cases){
	case Sort::SORTED:
		_typeArr = "sorted";
		std::sort(&_arr[0], &_arr[_lenght]);                                  // ��������� ������ �� �����������
		break;
	case Sort::REVERS:
		_typeArr = "reversed";
		std::sort(&_arr[0], &_arr[_lenght], std::greater<unsigned int>());    // ��������� ������ �� ��������		
		break;
	case Sort::RANDOM_ARR:
		_typeArr = "rendomized";
		break;                                                                // �� ��������� ������
	default:
		break;
	}
}

//������������ ������
unsigned int* Sort::GetArray() {
	return _arr;
}
void Sort::SetArray(unsigned int* arr, unsigned lenght) {
	_arr = arr;
	_lenght = lenght;
}

void Sort::Selection() {
	_typeSort = "select";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	unsigned tmp;           // �������� ������ ���������� �������
	unsigned i;             // ������ �������� ��������
	unsigned j;             // ������ ����������� �������� �� ������� �����
	unsigned pos;           // ������� �������� ��������

	for (i = 0; i < _lenght; ++i) {           // �� ������ �������� ����� ��������� �� ������� �������
		pos = i;                              // ���������� ������� �������� ��������
		tmp = _arr[i];                        // ��������� ��� ��������
		for (j = i + 1; j < _lenght; ++j) {   // ������� �� ���������� �� ������� ��������� ���������� ��
			if (_arr[j] < tmp) {              // ���� �������� �������� �������� ������ ��� � �������������
				pos = j;                      // ���������� ������� �������� (�������������)
				tmp = _arr[j];                // � ��� �� ��������� ��� �������� � ����� ���������� ����� ��� � ���
			}                                 // ����� ������� ������� ���������� ������� ������������ �������� � ���������� ��� �������
		}
		_arr[pos] = _arr[i];              // ������������ ������� ������� �� ��������� ������� �����������
		_arr[i] = tmp;                    // � ��������� ���������� �������� �� tmp ������������ � ������� �������
	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
	//std::cout << _period << std::endl;
}

void Sort::Insert() {
	_typeSort = "insert";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	unsigned i;                                 // ������ �������� ��������
	int j;                                      // ������ ������������� �������� � ������������ ������ ����� (int ������ ��� �� ���������� ����� j ����� ��������� ������������� ��������, � ��� ����������� ����� ���������� �� ������� ���������� �� ������� �������, ��� ���� �������� �� �������� ������ ���� �� �����������)
	unsigned tmp;                               // �������� �������� ��������

	for (i = 1; i < _lenght; ++i) {                     // �������� ������ � 1-��� �������� ������, ��� 0 ������� �������� ������������ ������ �������
		tmp = _arr[i];                                  // ��������� �������� �������� ��������
		for (j = i - 1; j >= 0 && _arr[j] > tmp; --j) { // ���������� ������ ������������� ����� ������� � �������� �������������� ����� ��������
														// � �� ��������, ��������� �������� �������� �������� � ���������� ������������� �����
			_arr[j + 1] = _arr[j];                      // ���� ������� ������� ������, ���������� ������������� �������� ������ �� ���� �������
		}                                               // ������ ������� ��������� �����������
		_arr[j + 1] = tmp;                              // �������� �� ��� ����� �������� �������� ��������   
	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}

void Sort::SortByShell() {  
	_typeSort = "Shell";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	unsigned i;                                        // 
	unsigned tmp;                                      // ������������ ������� 	
	unsigned distance = _lenght;                       // ��� ������ ���������
	while (distance >= 1) {                       // ��������� ���� ��� �� ����� ��������
		if (distance % 2 != 0) { --distance; }    // ���� ��� �������� ������ ��� ������
		distance /= 2;                            // ������ ������� �������� ��������� ��� � ��� ����		
		for (i=distance; i < _lenght; i++) {      // ������� � �������� �������������� �� �������� ����
			tmp = _arr[i];                        // �������� ���� ������ �� ����� �������� �������� �� ��������
			if (tmp < _arr[i - distance]) {       // ��� ���� ���������� �������� ��������� �� ��������� ���� ����� �� �������� 
				_arr[i] = _arr[i - distance];
				_arr[i - distance] = tmp;
			}
		}
	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}

void Sort::Quick() {
	_typeSort = "quick";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	qmsort(_arr, _lenght - 1);

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}
void Sort::qmsort(unsigned * arr, unsigned last) {

	long long i = 0;      // ������ ������ ���������
	long long j = last;   // ������ ������� ���������
	unsigned temp;       // ��������� ��������� ��� ������ ��������� �������
	unsigned p;          // ���������� ��� �������� �������� ��������

	p = arr[last / 2];    // ����� �������� �������� �������� ��� ������� �����

							// ������������ ��� �������� ������� ������ ��� ����� ������� ����� ��� ����� � ����� �����, 
	                        // � �� ������� ������ ��� ����� � ������						
	while (true) {

		while (arr[i] < p) i++;    // ������� ������ ����� ������� ������� ��� ������ �������� ��������
		while (arr[j] > p) j--;    // ������� ��������� ������ ������� ������� ��� ����� �������� ��������

		if (i <= j) {              // ����  ������ ������ ��������� �� ��������� ������, �.�. ����� ������� ��������� ����� ������� ��� ��������� �� ��� �� �������
			temp = arr[i];         // ������ �� �������
			arr[i] = arr[j];
			arr[j] = temp;
			i++; j--;              // � ������� ���������� �������� ����� � ������, ����� ������, ������ �����
		}

		if (i > j) break;          // ��������� �� ��� ��� ���� ����� ������ �� ���������� �� ������ ��� ��������, ������ �� ������ ������ ������ 
	}


	// ���������� �������� ��� �� �������� �� ��� ����� ��������������� ������� 
	if (j > 0) {           // ���� ������ ����� �� ����� �� ����, ����� ����� ����� ������� � ��������� ��� ��� ����� �������� ��������
		qmsort(arr, j);    // a-��������� �� ������ ������� ��������� �������, ������ ���������� ��������� j-�� ���� ����� ����� ������ ���������, ����� ���� ������� �� ��������� �������
	}
	//��� ���� ���� ����� ��������� �� ����� �� ���������� ��������
	if (last > i) {
		qmsort(arr + i, last - i); //��������� �� ���� ��������� ������� �� ���������� ���� ����� ������� i � ���������� ���������� ���������, ����� ��� ��������� �� ������ �������
	}                             // � ������ ���������� ��������� ������ �������� ����� ������� �� ������� �������, �.�. �� ����� � �� �����.
}

void Sort::Merging() {
	_typeSort = "merge";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	merge(0, _lenght - 1);

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}
void Sort::merge(unsigned first, unsigned last) {

	if (last == first) return;                   // ���� ��� �����, �� ������ �� ������ ��������, ����������� ������, �������
	if (last - first == 1) {                     // ���� ������ �� ���� ���������, ���������� �������� ���������, 
		if (_arr[last] < _arr[first])            // � ���� ����� ������ �������
			std::swap(_arr[last], _arr[first]);  // ������ �� �������
		return;
	}

	unsigned m = (last + first) / 2;          // ������� ������ ��������� �������� �������
	merge(first, m);                     // ���������� �������� ������ �������� ��� ����� ����� ����� �������
	merge(m + 1, last);                  // � �� �� ��� ������

	// ��� ������ ������� ������ �� ���������� �� ����������� �������� ���� ���������, ��������������� ������� �� ��������
	unsigned *buf = new unsigned int[last - first + 1]; // ������������� ������ (!!! ����� �������� �� �����������, �� ������� ��������� �������� ������)
	unsigned left = first;                     // ����� ��������� ��� ���������
	unsigned right = m + 1;                    // ������ ��������� ��� ���������
	unsigned cur = 0;                          // ��������� �������� �������� � ����������

	while (last - first + 1 != cur) { //(last - first + 1 > cur)???  ���� ��������� �������� �������� ���������� �� ������ �������� ��������� ������� ���������
		if (left > m) {                            //���� ��������� � ����� ���������� �������� ��� ������
			buf[cur++] = _arr[right++];            //�� ��������� � ������������� ������ ���������� ������� �� ������� �������
		}                                          //� ����� ����� ����������� ��������� ���������� � ����� ���������
		else if (right > last) {              //���� ��������� � ������ ���������� �������� ��� ������
			buf[cur++] = _arr[left++];        //�� ��������� � ������������� ������ ���������� ������� �� ������ �������
		}                                     //� ����������� ��������� ���������� � ����� ���������
		else if (_arr[left] > _arr[right]) {      //���� ������� � ����� ���������� ������ �������� � ������
			buf[cur++] = _arr[right++];           //��������� � ������������� ������ �� ������� ����������
		}                                         //� ����� �������������� ��������� �������������� ������� 
		else {
			buf[cur++] = _arr[left++];         //���� �� ��� �� �� ������, � ����������� ��������� �������������� ������� � ����� ���������
		}
	}

	//������������ �������� �� �������������� ������� � ��������
	for (unsigned i = 0; i < cur; i++) { _arr[i + first] = buf[i]; }

	//�������� ������������� �����
	delete[]buf;
}

void Sort::RadixSort() {
	_typeSort = "radix";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();



	const int num = 10;								   // ���������� �������� � ����� �������
	unsigned radix;                                    // ������� ������
	

	unsigned **arrForCount = new unsigned*[_lenght];   // ��������������� ������ ��� ����������
	for (unsigned i = 0; i < _lenght; i++) {
		arrForCount[i] = new unsigned[10];
	}
	
	
	for (radix = 1; radix <11; radix++) {		
		int arrElemSum[num];                         //������ ��� �������� ���������� �������� � ����������� �������
		int temp = 0;
		for (int i = 0; i < num; i++) {
			arrElemSum[i] = 0;                       // ��������� ���� ������ ���������� ������
		}

		for (unsigned i = 0; i<_lenght; i++)
		{
			int a = valueRadix(_arr[i], radix);         //��� ������� �������� ��������� ������� ��������� �������� � ������������ �������
			arrForCount[arrElemSum[a]][a] = _arr[i];    //�������� � �������������� ������
			arrElemSum[a]++;
		}
		for (int i = 0; i<num; i++)
		{
			for (int j = 0; j<arrElemSum[i]; j++, temp++)
			{
				_arr[temp] = arrForCount[j][i];
			}
		}

	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

	for (unsigned i = 0; i < _lenght; i++) {
		delete [] arrForCount[i];
	}
	delete[] arrForCount;
}
/*
// ���������� �������� � ����������� �������
// unsigned number - ��������������� �����
// int radix - ��������������� ������ ���������� �����
*/
int Sort::valueRadix(unsigned number, int radix)             
{
	while (radix>1)
	{
		number /= 10;
		radix--;
	}
	return number % 10;
}

//������� ������ � ���� (���������)
//fullNameFile - ��� ����� ���� ����� �������� ������ � ���������� �� ����
void Sort::Print(std::string fullNameFile) {
	std::ofstream out(fullNameFile);
	if (_arr == nullptr) {
		out << "Sorry, array does not exists!";
	}
	else
	{
		out << "Number of elements is " << _lenght << std::endl;
		out << "Type of array is " << _typeArr << std::endl;
		out << "Sorting algorithm - " << _typeSort << std::endl;
		out << "Running time of sorting algorithm is " << _period << "ms" << std::endl;
		for (unsigned i = 0; i < _lenght; ++i) {
			out << i << ") " << _arr[i] << ", " << std::endl;
		}
		std::cout << "File " << fullNameFile << " is formed!" << std::endl;
	}
	out.close();
}

void Sort::Testing(void(Sort::*algorithmSort)()) {	
	if (_arr != nullptr) {                                   //��������� ������������� �������
		unsigned *standard = new unsigned int[_lenght];      //�������� ��� � ���������
		std::cout << _lenght << std::endl;
		memcpy(standard, _arr, _lenght*sizeof(unsigned int));  
		(this->*algorithmSort)();                            //��������� ���������� �������� ���������� � ��������� �������
		std::sort(&standard[0], &standard[_lenght]);         //��������� ��������� ������ ������������ ����������, (���������� ������ ����� ��������� �� �������� - ����� ���������� �� ��������)
		std::cout << _lenght << std::endl;
		for (unsigned i = 0; i < _lenght; ++i) {             //��������� �� ���������� ���������
			if (_arr[i] != standard[i]) {
				std::cout << i << ") " << _arr[i] << " : " << standard[i] << std::endl; //(�������)
				std::cout << "INCORRECT!" << std::endl;
				delete [] standard;
				return;
			}
		}
		std::cout << "CORRECT!" << std::endl;
		delete[] standard;

	}
	else {
		std::cout << "Sorry, array does not exists!"<<std::endl;
	}
}

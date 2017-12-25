#include "SortingArr.h"


Sort::Sort() : _arr(nullptr), _lenght(0), _typeArr(""), _typeSort("Is not sorted"), _period(0) {}
Sort::~Sort() {
	delete[] _arr;
}

//(проверено)
void Sort::GenerateArray(Sort::Scale scale, Sort::Cases cases) {
	std::random_device rd;                                        // недетерминированный генератор 
	std::mt19937 gen(rd());                                       // применение алгоритма мерсена  
	std::uniform_int_distribution<unsigned> dist(0, 3000000000);  // распределяет результат между 0 и 3000000000.
	_lenght = scale;
	_arr = new unsigned int [scale];
	for (int i = 0; i < scale; i++) {                             // заполняем массив
		_arr[i] = dist(gen);                                       // передает генерацию в распределитель.
	}

	switch (cases){
	case Sort::SORTED:
		_typeArr = "sorted";
		std::sort(&_arr[0], &_arr[_lenght]);                                  // сортируем массив по возрастанию
		break;
	case Sort::REVERS:
		_typeArr = "reversed";
		std::sort(&_arr[0], &_arr[_lenght], std::greater<unsigned int>());    // сортируем массив по убыванию		
		break;
	case Sort::RANDOM_ARR:
		_typeArr = "rendomized";
		break;                                                                // не сортируем массив
	default:
		break;
	}
}

//небезопасные методы
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

	unsigned tmp;           // временно хранит наименьший элемент
	unsigned i;             // индекс текущего элемента
	unsigned j;             // индекс наименьшего элемента на текущем цикле
	unsigned pos;           // позиция текущего элемента

	for (i = 0; i < _lenght; ++i) {           // на каждой итерации берем следующий по порядку элемент
		pos = i;                              // запоминаем позицию текущего элемента
		tmp = _arr[i];                        // сохраняем его значение
		for (j = i + 1; j < _lenght; ++j) {   // начиная со следующего за текущим элементом сравниваим их
			if (_arr[j] < tmp) {              // если значение текущего элемента больше чем у сравниваемого
				pos = j;                      // запоминаем позицию меньшего (сравниваемого)
				tmp = _arr[j];                // а так же сохраняем его значение и далее сравнивать будем уже с ним
			}                                 // таким образом находим наименьший элемент относительно текущего и запоминаем его позицию
		}
		_arr[pos] = _arr[i];              // переписываем текущий элемент на найденную позицию наименьшего
		_arr[i] = tmp;                    // а найденное наименьшее значение из tmp переписываем в текущую позицию
	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
	//std::cout << _period << std::endl;
}

void Sort::Insert() {
	_typeSort = "insert";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	unsigned i;                                 // индекс текущего элемента
	int j;                                      // индекс сревниваемого элемента в упорядоченой правой части (int потому что во внутреннем цикле j может принимать отрицательные значения, и при беззнаковой форме обращается по индексу выходящему за границы массива, при этом проверка на значении меньше нуля не срабатывает)
	unsigned tmp;                               // значение текущего элемента

	for (i = 1; i < _lenght; ++i) {                     // проходим массив с 1-ого элемента считая, что 0 элемент является упроядоченой частью массива
		tmp = _arr[i];                                  // сохраняем значение текущего элемента
		for (j = i - 1; j >= 0 && _arr[j] > tmp; --j) { // перебираем правую упорядоченную часть начиная с элемента расположенного левее текущего
														// и до нулевого, сравнивая значения текущего элемента с элементами упорядоченной части
			_arr[j + 1] = _arr[j];                      // пока текущий элемент больше, перемещаем упорядоченные элементы правее на одну позицию
		}                                               // только условие перестало выполняться
		_arr[j + 1] = tmp;                              // копируем на это место значение текущего элемента   
	}

	stop = std::chrono::high_resolution_clock::now();
	_period = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
}

void Sort::SortByShell() {  
	_typeSort = "Shell";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	unsigned i;                                        // 
	unsigned tmp;                                      // сравниваемый элемент 	
	unsigned distance = _lenght;                       // шаг выбоки элементов
	while (distance >= 1) {                       // выполняем пока шаг не будет единицей
		if (distance % 2 != 0) { --distance; }    // если шаг нечетный делаем его четным
		distance /= 2;                            // каждую внешнюю итерацию сокращаем шаг в два раза		
		for (i=distance; i < _lenght; i++) {      // начиная с элемента расположенного на величине шага
			tmp = _arr[i];                        // проходим весь массив до конца сортируя элементы по величине
			if (tmp < _arr[i - distance]) {       // при этом сравниваем элементы отстоящие на растоянии шага левее от текущего 
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

	long long i = 0;      // индекс левого указателя
	long long j = last;   // индекс правого указателя
	unsigned temp;       // временное хранилище для обмена элементов массива
	unsigned p;          // переменная для значения опорного элемента

	p = arr[last / 2];    // берем значение среднего элемента как опорную точку

							// Перекидываем все элементы которые меньше или равны опорной точке или равны в левую часть, 
	                        // а те которые больше или равны в правую						
	while (true) {

		while (arr[i] < p) i++;    // находим первый левый элемент больший или равный опорному значению
		while (arr[j] > p) j--;    // находим последний правый элемент меньший или раный опорному значению

		if (i <= j) {              // если  индекс левого указателя не превышает правый, т.е. левый элемент находится левее правого или находится на той же позиции
			temp = arr[i];         // меняим их местами
			arr[i] = arr[j];
			arr[j] = temp;
			i++; j--;              // а индексы указателей сдвигаем ближе к центру, левый правее, правый левее
		}

		if (i > j) break;          // повторяем до тех пор пока левый индекс не перескочит за правый или наоборот, правый не станет меньше левого 
	}


	// рекурсивно вызываем тот же алгоритм но для части обрабатываемого массива 
	if (j > 0) {           // если правый индек не дошел до нуля, берем левую часть массива и выполняем над ней ранее описаный алгоритм
		qmsort(arr, j);    // a-указывает на первый элемент исходного массива, читаем количество элементов j-до куда успел дойти правый указатель, берем этот отрезок от исходного массива
	}
	//при этом если левый указатель не дошел до последнего элемента
	if (last > i) {
		qmsort(arr + i, last - i); //отступаем от края исходного массива на расстояние куда успел убежать i в предыдушем выполнении алгоритма, берем это состояние за начало отсчета
	}                             // и читаем количество элементов равное исходной длине массива за вычетом отступа, т.е. до конца и не более.
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

	if (last == first) return;                   // если они равны, то массив из одного элемента, сортировать нечего, выходим
	if (last - first == 1) {                     // если массив из двух элементов, сравниваем значения элементов, 
		if (_arr[last] < _arr[first])            // и если левый больше правого
			std::swap(_arr[last], _arr[first]);  // меняем их местами
		return;
	}

	unsigned m = (last + first) / 2;          // Находим индекс середнего элемента массива
	merge(first, m);                     // рекурсивно вызываем данный алгоритм для левой части этого массива
	merge(m + 1, last);                  // и то же для правой

	// как только разбили массив на подмассивы не превышающие размером двух элементов, последовательно выходим из рекурсии
	unsigned *buf = new unsigned int[last - first + 1]; // Промежуточный массив (!!! стоит отличать от подмассивов, на которые дробиться основной массив)
	unsigned left = first;                     // левый указатель для сравнения
	unsigned right = m + 1;                    // правый указатель для сравнения
	unsigned cur = 0;                          // указатель текущего элемента в подмассиве

	while (last - first + 1 != cur) { //(last - first + 1 > cur)???  пока указатель текущего элемента подмассива не достиг величины основного массива выполняем
		if (left > m) {                            //если указатель в левом подмассиве превысил его размер
			buf[cur++] = _arr[right++];            //то добавляем в промежуточный массив оставшийся элемент из правого массива
		}                                          //и после этого увеличиваем указатель подмассива и левый указатель
		else if (right > last) {              //если указатель в правом подмассиве превысил его размер
			buf[cur++] = _arr[left++];        //то добавляем в промежуточный массив оставшийся элемент из левого массива
		}                                     //и увеличиваем указатель подмассива и левый указатель
		else if (_arr[left] > _arr[right]) {      //если элемент в левом подмассиве больше элемента в правом
			buf[cur++] = _arr[right++];           //добавляем в промежуточный массив из правого подмассива
		}                                         //а затем инкрементируем указатель промежуточного массива 
		else {
			buf[cur++] = _arr[left++];         //если же нет то из левого, и увеличиваем указатель промежуточного массива и левый указатель
		}
	}

	//переписываем значения из промежуточного массива в основной
	for (unsigned i = 0; i < cur; i++) { _arr[i + first] = buf[i]; }

	//затираем промежуточный буфер
	delete[]buf;
}

void Sort::RadixSort() {
	_typeSort = "radix";
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();



	const int num = 10;								   // количество значений в одном разряде
	unsigned radix;                                    // текущий разряд
	

	unsigned **arrForCount = new unsigned*[_lenght];   // вспомогательный массив для сортировки
	for (unsigned i = 0; i < _lenght; i++) {
		arrForCount[i] = new unsigned[10];
	}
	
	
	for (radix = 1; radix <11; radix++) {		
		int arrElemSum[num];                         //массив для подсчета количества значений в сортируемом массиве
		int temp = 0;
		for (int i = 0; i < num; i++) {
			arrElemSum[i] = 0;                       // заполняем весь массив количества нулями
		}

		for (unsigned i = 0; i<_lenght; i++)
		{
			int a = valueRadix(_arr[i], radix);         //для каждого элемента основного массива извлекаем значение в сравниваемом разряде
			arrForCount[arrElemSum[a]][a] = _arr[i];    //помещаем в дополнительный массив
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
// возвращает величину в необходимом разряде
// unsigned number - рассматриваемое число
// int radix - рассматриваемый разряд указанного числа
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

//Выводит массив в файл (проверено)
//fullNameFile - имя файла куда будет сохранен массив и информация по нему
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
	if (_arr != nullptr) {                                   //проверяем существование массива
		unsigned *standard = new unsigned int[_lenght];      //копируем его в эталонный
		std::cout << _lenght << std::endl;
		memcpy(standard, _arr, _lenght*sizeof(unsigned int));  
		(this->*algorithmSort)();                            //применяем переданный алгоритс сортировки к основному массиву
		std::sort(&standard[0], &standard[_lenght]);         //сортируем эталонный массив стандартными средствами, (передается первый адрес следующий за массивом - иначе сортировка не проходит)
		std::cout << _lenght << std::endl;
		for (unsigned i = 0; i < _lenght; ++i) {             //проверяем на совпадение элементов
			if (_arr[i] != standard[i]) {
				std::cout << i << ") " << _arr[i] << " : " << standard[i] << std::endl; //(отладка)
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

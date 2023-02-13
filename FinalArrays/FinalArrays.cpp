// FinalArrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m;
	// Массив из 10 эл. Отсотрировать первые 5 элементов

	//std::cout << "Изначальный массив:" << '\n';
	//const int SIZE1 = 10;
	//int arr1[SIZE1];
	//int a = 1;
	//int b = 10;


	//srand(time(NULL));

	//for (int i = 0; i < SIZE1; i++) {
		//arr1[i] = rand() % (b + 1 - a) + a;
		//std::cout<<arr1[i] << '\t';
	//}
	//std::cout << '\n';



	//for (int i = 4; i > 0; i--) {
		//for (int j = 0; j < i; j++) {
			//if (arr1[j] > arr1[j + 1]) {
				//std::swap(arr1[j], arr1[j + 1]);
			//}


//}
	//}
	//std::cout << "Итоговый массив:" << '\t';
	///for (int i = 0; i < SIZE1; i++)
		//std::cout << arr1[i] << '\t';
//}

// Быстрая сортировка

	//std::sort(arr1, arr1 + 5);

	//std::cout << "Итоговый массив:" << '\t';
	//for (int i = 0; i < SIZE1; i++)
		//std::cout << arr1[i] << '\t';

	// Задача 2. Теммпература в янавре -30 до -1. Средняя температура за месяц. 

	/*const int SIZE2 = 31;
	int arr2[SIZE2];
	int a = -30;
	int b = -1;

	std::cout << "Температура за все месяцы января:" << '\t';

	srand(time(NULL));
	for (int i = 0; i < SIZE2; i++) {
		arr2[i] = rand() % (b + 1 - a) + a;
		std::cout<<arr2[i] << '\t';
	 }
	std::cout << "Введите максимальную температуру для отображения:" << '\t';
	std::cin >> n;

	int sum = 0;
	int count = 0;
	for (int i = 0; i < SIZE2; i++) {
		sum += arr2[i];
		if (arr2[i] <= n) count++;
	}

	std::cout << "Средняя температура за месяц:" << (double)sum / SIZE2 << '\n';
	std::cout << "Кол-во дней в которых температура опцускалась ниже " << n << " градусов:" << '\t' << count;*/

	// Задача 3. Вхождение в диапазон
	std::cout << "Ведите начало и конец диапазона:" << '\t';
	std::cin >> n >> m;

	const int SIZE3 = 20;
	int arr3[SIZE3];
	int a = 0;
	int b = 100;


	srand(time(NULL));
	for (int i = 0; i < SIZE3; i++) {
		arr3[i] = rand() % b;
		std::cout << arr3[i] << '\n';

		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ". " << arr3[i] << "!" << '\n';

		else std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
}


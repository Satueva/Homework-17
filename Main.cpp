#include <iostream>
#include <ctime>


// Задача 1. Среднее арифметическое.
double mean(double a, double b) {
	double arith = (a + b) / 2;
	return arith;
}

// Задача 2. Среднее арифметическое массива.
void mean_arr(double arr[], int const a) {
	srand(time(NULL));
	double sum = 0;
	std::cout << "Массив - { ";
	for (int i = 0; i < a; i++) {
		arr[i] = rand() % 20;
		std::cout << arr[i] << ", ";
		 sum += arr[i];
		if (i == a - 1) {
			std::cout << "\b\b }" << "\n\nСреднее арифметическое: " << sum / a << std::endl;
		}
	}
} 


// Задача 3. N в степени M.
void powers(int N, int M) {
	int num = 1;
	for (int i = 0; i <= M; i++) {
		if (i == 0) {
			std::cout << N << "^" << i << " = " << N * i << std::endl;
			i++;
		}
		num *= N;
		std::cout << N << "^" << i << " = " << num << std::endl;
	}
}


// Задача 4. Позитивный массив :)
void positive_arr(int arr[], const int a) {
	std::cout << "Введите 10 чисел через пробел, включая отрицательные: ";
	for (int i = 0; i < a; i++) {
		std::cin >> arr[i];
		if (i == 0) {
			std::cout << "Изначальный массив: { ";
		}
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }" << std::endl;

	std::cout << "Положителный массив: { ";
	for (int i = 0; i < a; i++) {
		if (arr[i] < 0) {
			arr[i] = arr[i] * (-1);
		}
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }" << std::endl;
}



int main() {
	setlocale(LC_ALL, "Russian");

	// 1.
	double n, m;
	std::cout << "Введите два числа: " << std::endl;
	std::cin >> n;
	std::cout << "и" << std::endl;
	std::cin >> m;
	std::cout << "Среднее арифметическое двух чисел: " << mean(n, m) << std::endl;
	

	// 2.
	int const size = 8;
	double arr[size]{};
	mean_arr(arr, size);


	// 3.
	int n, m;
	std::cout << "Введите два числа: " << std::endl;
	std::cin >> n;
	std::cout << "и" << std::endl;
	std::cin >> m;
	std::cout << std::endl;
	powers(n, m);


	// 4.
	int const size = 10;
	int arr[size]{};
	positive_arr(arr, size);





	return 0;
}
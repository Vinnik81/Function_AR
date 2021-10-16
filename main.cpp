#include"Function.h"
#include"FillRand.h"
#include"Print.h"


void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int N = 5;
	
	int arr[N];
	int i_arr_2[ROWS][COLS] = 
	{
		{1,2,3},
	    {4,5,6},
		{7,8,9}
	};
	double brr[N];
	int minRand = 0, maxRand = 100;
	int sum = 0;
	double avg = 0;
	int min = 0;
	int max = 0;
	int k = 0;
	int shift_L = 0;
	int shift_R = 0;
	//cout << "Ввидите мин: "; cin >> minRand;
	//cout << "Ввидите max: "; cin >> maxRand;
	FillRand(arr, N, minRand, maxRand);
	cout << "Прямой массив:" << endl;
	Print(arr, N);
	FillRand(brr, N, minRand, maxRand);
	cout << "Прямой массив double:" << endl;
	Print(brr, N);
	//FillRand(i_arr_2, ROWS, COLS);
	cout << "Многомерный массив:" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Обратный массив:" << endl;
	ReversePrint(arr, N);
	double s = (double)Sum(arr, N, sum);
	cout << "Сумма элементов массива:\n" << Sum(arr, N, sum) << endl;
	cout << "Среднее арифметическое:\n"<< Avg(N, avg, s) << endl;
	cout << "Минимальное значение массива:\n" << minValueIn(arr, N, min) << endl;
	cout << "Максимальное значение массива:\n" << maxValueIn(arr, N, max) << endl;
	cout << "Массив в порядке возрастания:" << endl;
	Sort(arr, N);
	cout << "Введите число сдвига элементов: "; cin >> k;
    cout << "Результат сдвига массива влево:" << endl;
	shiftLeft(arr, N, k, shift_L);
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига массива вправо:" << endl;
	shiftRight(arr, N, k, shift_R);
}



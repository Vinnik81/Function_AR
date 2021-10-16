#include <iostream>
using namespace std;

const unsigned int ROWS = 4;
const unsigned int COLS = 5;

void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void Print(int arr[], const unsigned int N);
void Print(double arr[], const unsigned int N);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ReversePrint(int arr[], const unsigned int N); //Выводит массив в обратном направлении;
int Sum(int arr[], const unsigned int N, int sum = 0); //Возвращает сумму элементов массива;
double Avg(const unsigned int N, double avg, double s); //Возвращает среднее арифметическое элементов массива;
int minValueIn(int arr[], const unsigned int N, int min); //Возвращает минимальное значение из массива;
int maxValueIn(int arr[], const unsigned int N, int max); //Возвращает максимальное значение из массива;
void Sort(int arr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void shiftLeft(int arr[], const unsigned N, int k, int shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;

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
	Print(arr, N);
	FillRand(brr, N, minRand, maxRand);
	Print(brr, N);
	//FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	ReversePrint(arr, N);
	double s = (double)Sum(arr, N, sum);
	Avg(N, avg, s);
	minValueIn(arr, N, min);
	maxValueIn(arr, N, max);
	Sort(arr, N); 
	cout << "Введите число сдвига элементов: "; 
	shiftLeft(arr, N, k, shift_L);
	cout << "Введите число сдвига элементов: ";
	shiftRight(arr, N, k, shift_R);
}
void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;			
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const unsigned int N)
{
	cout << "Прямой массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const unsigned int N)
{
	cout << "Прямой массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void ReversePrint(int arr[], const unsigned int N)
{
	cout << "Обратный массив:" << endl;
	for (int i = N -1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(int arr[], const unsigned int N, int sum)
{
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	cout << "Сумма элементов массива:\n" << sum << endl;
	return sum;
}
double Avg(const unsigned int N, double avg, double s)
{
	avg = s / N;
	 cout << "Среднее арифметическое:\n" << avg << endl;
	 return avg;
}

int minValueIn(int arr[], const unsigned int N, int min)
{
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "Минимальное значение массива:\n" << min << endl;
	return min;
}

int maxValueIn(int arr[], const unsigned int N, int max)
{
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "Максимальное значение массива:\n" << max << endl;
	return max;
}

void Sort(int arr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		int tmp = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] > tmp)
			{
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout << "Массив в порядке возрастания:" << endl;
	for (int t = 0; t < N; t++)
	{
		cout << arr[t] << "\t";
	}
	cout << endl;
}

void shiftLeft(int arr[], const unsigned N, int k, int shift_L)
{
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_L = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = shift_L;
    }
	cout << "Результат сдвига массива влево:" << endl;
	for (int a = 0; a < N; a++)
	{
     cout << arr[a] << "\t";
	}
	cout << endl;
}

void shiftRight(int arr[], const unsigned int N, int k, int shift_R)
{
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			(j == N - 1) ? shift_R = arr[N - 1] : arr[j + 1] = arr[j];
		}
		arr[0] = shift_R;
	}
	cout << "Результат сдвига массива вправо:" << endl;
	for (int b = 0; b < N; b++)
	{
		cout << arr[b] << "\t";
	}
	cout << endl;
}


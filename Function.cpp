#include"Function.h"
#include"stdafx.h"
#include"Constant.h"
#include"Print.h"


void ReversePrint(int arr[], const unsigned int N)
{
	
	for (int i = N - 1; i >= 0; i--)
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

	return sum;
}
double Avg(const unsigned int N, double avg, double s)
{
	avg = s / N;
	
	return avg;
}

int minValueIn(int arr[], const unsigned int N, int min)
{
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	
	return min;
}

int maxValueIn(int arr[], const unsigned int N, int max)
{
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	
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
	Print(arr, N);
}

void shiftLeft(int arr[], const unsigned N, int k, int shift_L)
{
	
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_L = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = shift_L;
	}
	
	Print(arr, N);
	cout << endl;
}

void shiftRight(int arr[], const unsigned int N, int k, int shift_R)
{
	
	for (int i = 0; i < k; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			(j == N - 1) ? shift_R = arr[N - 1] : arr[j + 1] = arr[j];
		}
		arr[0] = shift_R;
	}
	
	Print(arr, N);
	cout << endl;
}
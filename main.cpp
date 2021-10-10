#include <iostream>
using namespace std;

void FillRand(int arr[], const unsigned int N);
void Print(int arr[], const unsigned int N);
void ReversePrint(int arr[], const unsigned int N); //������� ������ � �������� �����������;
int Sum(int arr[], const unsigned int N, int sum = 0); //���������� ����� ��������� �������;
double Avg(const unsigned int N, double avg, double s); //���������� ������� �������������� ��������� �������;
int minValueIn(int arr[], const unsigned int N, int min); //���������� ����������� �������� �� �������;
int maxValueIn(int arr[], const unsigned int N, int max); //���������� ������������ �������� �� �������;
void Sort(int arr[], const unsigned int N); //��������� ������ � ������� �����������;
void shiftLeft(int arr[], const unsigned N, int k, int shift_L); //��������� ����������� ����� ������� �����, �� �������� ����� ���������; 
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //��������� ����������� ����� ������� ������, �� �������� ����� ���������;

void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int N = 5;
	int arr[N];
	int sum = 0;
	double avg = 0;
	int min = 0;
	int max = 0;
	int k = 0;
	int shift_L = 0;
	int shift_R = 0;
	FillRand(arr, N);
	Print(arr, N);
	ReversePrint(arr, N);
	double s = (double)Sum(arr, N, sum);
	Avg(N, avg, s);
	minValueIn(arr, N, min);
	maxValueIn(arr, N, max);
	Sort(arr, N); 
	cout << "������� ����� ������ ���������: "; 
	shiftLeft(arr, N, k, shift_L);
	cout << "������� ����� ������ ���������: ";
	shiftRight(arr, N, k, shift_R);

}
void FillRand(int arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const unsigned int N)
{
	cout << "������ ������:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(int arr[], const unsigned int N)
{
	cout << "�������� ������:" << endl;
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

	cout << "����� ��������� �������:\n" << sum << endl;
	return sum;
}
double Avg(const unsigned int N, double avg, double s)
{
	avg = s / N;
	 cout << "������� ��������������:\n" << avg << endl;
	 return avg;
}

int minValueIn(int arr[], const unsigned int N, int min)
{
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "����������� �������� �������:\n" << min << endl;
	return min;
}

int maxValueIn(int arr[], const unsigned int N, int max)
{
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "������������ �������� �������:\n" << max << endl;
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
	cout << "������ � ������� �����������:" << endl;
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
	cout << "��������� ������ ������� �����:" << endl;
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
	cout << "��������� ������ ������� � �����:" << endl;
	for (int b = 0; b < N; b++)
	{
		cout << arr[b] << "\t";
	}
	cout << endl;
}


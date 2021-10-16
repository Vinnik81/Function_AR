#pragma once
#include"stdafx.h"

void ReversePrint(int arr[], const unsigned int N); //Выводит массив в обратном направлении;
int Sum(int arr[], const unsigned int N, int sum = 0); //Возвращает сумму элементов массива;
double Avg(const unsigned int N, double avg, double s); //Возвращает среднее арифметическое элементов массива;
int minValueIn(int arr[], const unsigned int N, int min); //Возвращает минимальное значение из массива;
int maxValueIn(int arr[], const unsigned int N, int max); //Возвращает максимальное значение из массива;
void Sort(int arr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void shiftLeft(int arr[], const unsigned N, int k, int shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;


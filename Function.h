#pragma once
#include"stdafx.h"

void ReversePrint(int arr[], const unsigned int N); //������� ������ � �������� �����������;
int Sum(int arr[], const unsigned int N, int sum = 0); //���������� ����� ��������� �������;
double Avg(const unsigned int N, double avg, double s); //���������� ������� �������������� ��������� �������;
int minValueIn(int arr[], const unsigned int N, int min); //���������� ����������� �������� �� �������;
int maxValueIn(int arr[], const unsigned int N, int max); //���������� ������������ �������� �� �������;
void Sort(int arr[], const unsigned int N); //��������� ������ � ������� �����������;
void shiftLeft(int arr[], const unsigned N, int k, int shift_L); //��������� ����������� ����� ������� �����, �� �������� ����� ���������; 
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //��������� ����������� ����� ������� ������, �� �������� ����� ���������;


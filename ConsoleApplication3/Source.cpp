#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<stdint.h>
#include<time.h>

using namespace std;
#define k 20

int main()

{
	setlocale(LC_ALL, "Russian");
	int n;
	srand(time(NULL));
	do
	{
		cout << "������� ����� �������:";
		cin >> n;
		switch (n) {
//����� ��������
		case 1: {
			int m[k] = { 0 };
			cout << "������ �� ����������: " << endl;

			for (int i = 0; i <= k - 1; i++)
			{
				m[i] = 1 + rand() % 99;
				cout << m[i] << endl;
			}
			for (int i = 0; i < k - 1; i++)
			{
				for (int j = k - 1; j > i; j--)
				{
					if (m[j - 1] > m[j])
					{
						int l = m[j - 1];
						m[j - 1] = m[j];
						m[j] = l;
					}
				}
			}

			cout << "������ ����� ����������: " << endl;
			for (int i = 0; i <= k - 1; i++)
			{

				cout << m[i] << endl;
			}
		} break;

			//����� ���������� ������
		case 2: {
			int l, min;
			int m[k] = { 0 };
			cout << "������ �� ����������: " << endl;

			for (int i = 0; i <= k - 1; i++)
			{
				m[i] = 1 + rand() % 99;
				cout << m[i] << endl;
			}

			for (int i = 0; i <= k - 1; i++)
			{
				min = i;
				for (int j = i + 1; j < k; j++)
				{
					if (m[j] < m[min])
						min = j;
				}
				l = m[i];
				m[i] = m[min];
				m[min] = l;
			}

			cout << "������ ����� ����������: " << endl;
			for (int i = 0; i <= k - 1; i++)
			{
				cout << m[i] << endl;
			}

		}break;
		
			//���������� ���������
		case 3: {
			int m[k] = { 0 };
			cout << "������ �� ����������: " << endl;

			for (int i = 0; i <= k - 1; i++)
			{
				m[i] = 1 + rand() % 99;
				cout << m[i] << endl;
			}

			for (int i = 1; i < k; i++)
			{
				int value = m[i]; //���������� �������� ��������
				int index = i;// � ��� ������
				while ((index > 0) && (m[index - 1] > value))
				{
					m[index] = m[index - 1];
					index--; //������� �������� � ������ �������
				}
				m[index] = value;// ��������������� ������� ����������
			}
			cout << "����� ����������: " << endl;
			for (int i = 0; i <= k - 1; i++)
			{
				cout << m[i] << endl;
			}


		}break;
			
		}
	} while (n > 0);
}
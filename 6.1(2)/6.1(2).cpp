#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int Sum1(int mas[], const int k);
int Sum2(int mas[], const int k);
int Num1(int mas[], const int k);
int Num2(int mas[], const int k);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 25;
	int r[n] = {};
	int minNum = 4;
	int maxNum = 73;
	cout << "a = " << "{ ";
	for (int i = 0; i < n; i++) {
		r[i] = minNum + rand() % (maxNum - minNum + 1);
		cout << r[i] << "; ";
	}
	cout << "}" << endl;
	cout << endl;
	cout << "Сума чисел кратних 6-ти: " << Sum1(r, n) << endl;
	cout << "Кількість чисел кратних 6-ти: " << Num1(r, n) << endl;
	cout << "Сума чисел з індексом не кратним 5-ти: " << Sum2(r, n) << endl;
	cout << "Кількість чисел з індексом не кратним 5-ти: " << Num2(r, n) << endl;
	cout << endl;
	cout << "a = " << "{ ";
	for (int i = 0; i < n; i++) {

		if (r[i] % 6 == 0 || i % 5 != 0)
		{
			r[i] = 0;
		}
		cout << r[i] << "; ";
	}
	cout << "}" << endl;


}

int Sum1(int mas[], const int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++) {
		if (mas[i] % 6 == 0) {
			sum += mas[i];
		}
	}
	return sum;
}

int Sum2(int mas[], const int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += mas[i];
		if (i % 5 == 0) {
			sum -= mas[i];
		}
	}
	return sum;
}

int Num1(int mas[], const int k)
{
	int n = 0;
	for (int i = 0; i < k; i++) {
		if (mas[i] % 6 == 0) n++;
	}
	return n;
}

int Num2(int mas[], const int k)
{
	int n = 0;
	for (int i = 0; i < k; i++) {
		if (i % 5 != 0) {
			n++;
		}

	}
	return n;
}
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int days;
	double distance = 1.5;
	double distance_for_all_days = 0;
	cout << "Введіть кількість днів в які черепаха рухалась:" << endl;
	cin >> days;
	if (days < 0)
	{
		cout << "Кількість днів не може бути менше нуля.";
		return 0;
	}
	for (int day = 0; day < days; day++)
	{
		distance_for_all_days += distance;
		distance += 0.20;
	}
	cout << distance_for_all_days << "м.";
}
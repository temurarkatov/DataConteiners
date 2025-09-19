#include<iostream>
using namespace std;

void elevator(int floar);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите номер этажа: ";cin >> n;
	elevator(n);
	/*cout << "Recusion";
	main();*/
}

void elevator(int floar)
{
	if (floar == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floar << " этаже" << endl;
	elevator(floar - 1);
	cout << "Вы на " << floar << " этаже" << endl;
}
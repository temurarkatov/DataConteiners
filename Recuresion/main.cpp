#include<iostream>
using namespace std;

void elevator(int floar);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ����� �����: ";cin >> n;
	elevator(n);
	/*cout << "Recusion";
	main();*/
}

void elevator(int floar)
{
	if (floar == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floar << " �����" << endl;
	elevator(floar - 1);
	cout << "�� �� " << floar << " �����" << endl;
}
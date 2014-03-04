#include <iostream>
using namespace std;
int search(int[], int, int);
int main()
{
	int arr[50]; int tmp, score;

	cout << "Enter up to 50 score or end with -1: ";
	cin >> tmp;

	int i = 0;
	while(tmp != -1 && i < 49)
	{
		arr[++i] = tmp;
		cin >> tmp;
	}
	cout << "\nEnter the score to search for: ";
	cin >> score;

	int index = search(arr, i, score);
	if(index == -1)
	{
		cout << "\nValue not found\n";
	}
	else
	{
		cout << "\nValue found at " << index << endl;
	}

	system("pause");
	return 0;

}

int search (int a[], int size, int s)
{
	for(int i = 0; i < size; ++i)
	{
		if(s == a[i])
			return i;
	}
	return -1;
}

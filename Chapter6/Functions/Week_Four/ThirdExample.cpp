/*Write a function called minmax which will find the minimum 
and maximum test score them in a pair of parameters passed by reference. 
Have main print the min and max score**/
#include <iostream>
using namespace std;
void minmax(int&, int&, int&, int&);
int search(int[], int, int);
int main()
{
	int arr[50]; int tmp, score, min, max;

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

	minmax(arr, i , min, max);


	if(index == -1)
	{
		cout << "\nValue not found\n";
	}
	else
	{
		cout << "\nValue found at " << index << endl;
		cout << "\nMinimum score: " << min << endl;
		cout << "\nMaximum score: " << max << endl;
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

void minmax(int a[], int size, int& min, int& max)
{
	min = max = a[0];
	for(int i = 0; i < size; ++i)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}

}

#include <iostream>
using namespace std;
bool score(int[], int);
int main()
{

	int arr[19]; int temp, num;

	cout << "Enter up to 20 number or end with with -99: ";
	//intarr[20] = {0} set everything to zero
	cin >> temp;
	
	int i = 0;
	while(temp != -99  && i <= 4)//Stop when the user enters -99
	{
	arr[i++] = temp;
	cin.getline(temp, 19, '\n');
	}
	
	cout << "\nEnter number of elements to display: ";
	cin >> num;
	display(arr,num);

	system("pause");
	return 0;
}

bool display(int r_arr[],  int r_num)//What;s being passed is the first address of the array
{
	for(int i = 0; i < r_num; ++i)
	{
		cout << r_arr[i] << ' ';
		cout << endl;
	}
	return r_arr;
}

#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 25;
int r(int[]);
int main()
{
	int store[MAX];
	
	int i = 0;
	do{
	cout << store[i++] << ' ';
	}while(i <= MAX);

	r(store);

	system("pause");
	return 0;
}
int r(int ran[])
{
	srand((unsigned)time(0));

	int num = 1 + rand() % 100;

	//UNFINISHED WITHOUT ARRAYS

}

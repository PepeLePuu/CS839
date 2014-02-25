#include <iostream>
using namespace std;
int main()
{
  char str1[26], str2[26], str3[52];
  
  cout << "Enter a string: ";
  cin.getline(str1, 26, '\n');
  cout << "\nEnter a string: ";
  cin.getline(str2, 26, '\n');
  
  if(strcmp(str1, str2) < 0)
  {
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
  }
  else
  {
    strcpy(str3, str2);
    strcat(str3, " ");
    strcat(str3, str1);
  }
  
  cout << endl << str3 << endl;
  
  str1[0] = toupper(str1[0]);
  str2[0] = toupper(str2[0]);
  cout << str1 << endl << str2;

if(str1[0]) > str1[1])
{
  char temp = str1[0];
  str1[0] = str1[1];
  str1[1] = temp;
}
if(str2[0]) > str2[1])
{
  char temp = str2[0];
  str2[0] = str2[1];
  str2[1] = temp;
}

cout << str1 << endl << str2;
//system("pause");
return 0;
}

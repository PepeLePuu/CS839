{
	char str1[26], str2[26], str3[26];

	int convstr1[26], convstr2[26];

	cout << "Enter first name: \n";
	cin.getline(str1, 26, '\n');
	cout << "Enter last name: \n";
	cin.getline(str2, 26, '\n');

	char ID[26];

	ID[0] = toupper(str1[0]);
	ID[1] = str1[1];
	ID[2] = toupper(str2[0]);
	ID[3] = toupper(str2[1]);

	cout << ID[0] << ID[1] << ID[2] << ID[3] << endl;

	system("pause");
	return 0;
}

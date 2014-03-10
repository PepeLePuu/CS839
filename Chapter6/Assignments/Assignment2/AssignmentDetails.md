

USE C-STRINGS FOR THE FOLLOWING PROJECT. NO STRINGS! :

Write a C++ program that repeatedly asks for and gets a string from the user and presents the following menu of operations on the string until user chooses to exit:

1. Search for a character in the string

2. Change a character within the string

3. Display the first n characters of the string

4. Display the last n character of the string

5. Display all characters that lie between two given indices

6. Null the string

7. Exit

If option 1 is selected, the program calls a function which takes the string and a character and returns either the index within the string of the first occurrence of the character or -1 if it could not be found.  Print the location found or that it was not found along with how many times it was found.

If option 2 is selected, the program calls a function that takes a string, an integer for the position of the character to be changed and a character and changes the character located at the given position in the string to the given character.  Keep looping until a valid value is entered for the position.

If option 3 is selected, a function is called which takes a string and an integer n and displays the first n characters of the string.  Keep looping until a valid value is entered for the number of characters to be printed.

If option 4 is selected, a function is called which takes a string and an integer n and displays the last n characters of the string.  Keep looping until a valid value is entered for the number of characters to be printed.

If option 5 is selected, a function is called which takes a string and two integers and displays all the characters that lie between the two indices, inclusive.  Keep looping until a valid value is entered for both numbers.

If option 6 is selected, a function is invoked which takes a string and nulls the string meaning it makes it a 0-length string.  If it already has 0 length, it must display a message saying that.

Upload both exe and cpp files using the Browse and Upload buttons below.  (The cpp file is in the folder that has the name you gave the project.  The exe file is located in a folder called Debug within the main folder mentioned above.  There are two Debug folders - the other one is one level deeper.)  Once you see both files uploaded, click Finish to submit.  Make sure you don't click Finish before uploading the files as this will submit a blank page and won't let you resubmit.
The following is a Sample execution of the program:
Please enter a string: My roommate is not home right now.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 1
 
Please enter the character to search for: o
There are 5 o's in "My roommate is not home right now." with the 1st one at index 4.
 
Please enter a string: I am a student at Valley College.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 1
 
Please enter the character to search for: v
There are no v's in "I am a student at Valley College."
 
Please enter a string: My brother John is not home
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 2
 
What is the index of the character you want to change? 21
What character do you want in that position? w
The new string is "My brother John is now home"
 
Please enter a string: C++ is fun
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 2
 
What is the index of the character you want to change? 30
What character do you want in that position? X
That position is outside the bounds of the string. String unchanged.
 
Please enter a string: My brother has a new job.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 3
 
How many characters from the beginning of the string do you want to display? 8
My broth
 
Please enter a string: Valley Glen, CA
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 3
 
How many characters from the beginning of the string do you want to display? 32
Error: too many characters.
 
Please enter a string: I'm hungry. Let's order a pizza.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 4
 
How many characters from the end of the string do you want to display? 10
r a pizza.
 
Please enter a string: I have $1.32
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 4
 
How many characters from the end of the string do you want to display? 30
Error: too many characters.
 
Please enter a string: My brother Joseph is married.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 5
 
Please enter the beginning index: 5
Please enter the ending index: 12
other Jo
 
Please enter a string: He lives in Ohio.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 5
 
Please enter the beginning index: 5
Please enter the ending index: 32
Error: one or more indices are outside the bounds of the array.
 
Please enter a string: This is just another string.
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 6
 
The string is now Null.
 
Please enter a string: (the user presses Enter)
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 6
 
The string was already Null. Nothing was changed.
 
Please enter a string: this is the last string in the example
 
Make a selection:
1. Search for a character in the string
2. Change a character within the string
3. Display the first n characters of the string
4. Display the last n character of the string
5. Display all characters that lie between two given indices
6. Null the string
7. Exit
Choice: 7
 
Press any key to continue . . .

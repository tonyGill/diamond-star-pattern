/*

Algorithm was designed in the following series of steps:
1) Define variables for rows, spacing and stars as integer data type
2) Initialize the rows variable to 4 for ascending and 3 for descending rows
3) Define for loop for number of rows and nested loops within this for loop
5) The nested loops are for spacing and displaying  stars 
6) Output the pattern for ascending and descending stars, respectively 

Functions/Formulas:
Displaying stars equivalent to the number of rows:
stars <= (2* i -1) where i is the specific row number

Function in this case was only the main function with all data, formulas and output


Revision History:
January 30, 2019: First working edition created, revised and completed


*/

#include <iostream>
using namespace std;

int main()
{

	// This represents the ascending rows in which stars count is increasing with row number
	int rowsA = 4;

	// This represents the rows in which stars count is decreasing with row number
	int rowsD = 3;

	// Defines variables for number rows, stars and spacing
	int i, starsAsc, k, starsDesc, spacing;


	// for loop for inceasing row count
	for (i = 1; i <= rowsA; i++)
	{
		//for loop displays the amount of spacing in each row
		for (spacing = i; spacing < rowsA; spacing++)
		{
			cout << " ";
		}
		//for loop displays star as being equivalent to row and star formula mentioned above
		for (starsAsc = 1; starsAsc <= (2 * i - 1); starsAsc++)
		{
			// Outputs the ASCII symbol representing stars
			cout << "*";
		}

		// Escape sequence for new line 
		cout << "\n";
	}

	//for loop for rows with deceasing star count 
	for (k = rowsD; k >= 1; k--)
	{
		//for loop displays the amount of spacing in each row
		for (spacing = k - 1; spacing < rowsD; spacing++)
			cout << " ";

		//for loop displays star as being equivalent to row and star formula mentioned above
		for (starsDesc = 1; starsDesc <= (2 * k - 1); starsDesc++)
			cout << "*";
		cout << "\n";

	}

	return 0;

}

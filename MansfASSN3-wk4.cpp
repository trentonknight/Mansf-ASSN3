// MansfASSN3-wk4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
	int array[10] = {2,10,6,8,1,3,4,9,5,7};
	cout << "int array[10] = {2,10,6,8,1,3,4,9,5,7};" << endl;

	for(int x=0; x < 10; x++)

	{
		cout << "entered outside for loop." << endl;

		for(int y=0; y < 10-1; y++)

		{
			cout << "entered inside for loop." << endl;
			cout << "array[y]: = " << array[y] << "\narray[y + 1] = ";
			cout << array[y + 1] << endl;
			cout << "Is " << array[y]<< " Greater Than " << array[y + 1]<< " ? " << endl;

			if(array[y]>array[y+1])

			{
				cout << "array [y + 1] " << array[y + 1] << " = " << "array[y] " << array[y] << endl;

				int temp = array[y+1];

				array[y+1] = array[y];

				array[y] = temp;
				cout << "array[y] equals "<< array[y+1] <<"previous number: " << temp << endl; 

			}

		}

	}

   system("PAUSE");
	return 0;
}

 
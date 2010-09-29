// MansfASSN3-wk4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

bool swapped = false;
int boolNUM;

int main()
{
	int array[10] = {2,10,6,8,1,3,4,9,5,7};
	
	cout <<endl<< "Using BUBBLE SORT with: int array[10] = {2,10,6,8,1,3,4,9,5,7};" << endl;
	cout << "DO WHILE LOOP until all index are TRUE" << endl;
	
	do{
		
		
		if(swapped == false){
		cout << "SWAPPED = FALSE: " << swapped << endl;
		}
		else{
			cout << "SWAPPED = TRUE: " << swapped << endl;
		}
		
		for(int y=0; y < 10-1; y++)
			
		{
			
			if(swapped == false){
				cout << "SWAPPED = FALSE: " << swapped << endl;
			}
			else{
				cout << "SWAPPED = TRUE: " << swapped << endl;
			}
			cout << "array[y]: = " << array[y] << "\narray[y + 1] = ";
			cout << array[y + 1] << endl<< endl;
			cout <<endl << "Is " << array[y]<< " Greater Than " << array[y + 1]<< " ? " << endl;
			
			if(array[y]>array[y+1])
				
			{
				cout << "Yes so swap: " << endl;
				cout << "array [y + 1] " << array[y + 1] << " swapped with array[y] making it equal " << array[y] << endl;
				
				int temp = array[y+1];
				
				array[y+1] = array[y];
				
				array[y] = temp;
				cout << "array[y] swapped with array[y+1] making it equal: "<< temp << endl<< endl; 
			    swapped = true;
				
								
			}
			else{
				cout << "continue to next index to make all index in array TRUE..." << endl;
			}
			
			
		}
		
		
		
	}while (!swapped);
	cout << "array";
	for(int z = 0; z < 11; z++){
		cout << "["<<array[z]<<"]";
	}
	cout << endl;
	cout << "EXIT DO WHILE LOOP all index are true" << endl;
	
	
	return 0;
}


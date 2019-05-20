#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;

int main ()
{
	int n=10, i;
	float num[9], sum=0.0, average, largest, smallest, total;
	
	

	for (i=0; i<n; ++i)
	{
		cout << "Enter number: ";
		cin >> num [i]; 
		sum += num [i];
	
	if (num[0] < num[i] )
	largest = num[i];
	
	if (num[0] > num[i] )
	smallest = num[i];
	}
    total=sum;
    average = sum/n;
     cout << endl; 
    cout << "Average = " << average;
    cout << endl; 
    cout << "Largest value= " << largest;
     cout << endl; 
    cout << "Smallest value= " << smallest;
    cout << endl;
     cout << "Total = " << total;
     cout << endl; 
    cout << "Average = " << average;
	
	
	
	
return 0;
}

#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;


const int week = 7
int main ()
{
	int temperature[province][week];
    char province ='A'
	
	cout<<"Enter all temperatures for a week of Province A, Province B, Province C. ";
	
	While (i=0; province <= 'C')
	{
		for (int j=0; j<week; ++j)
    
        {
        cout<< "Province " << province++; << ", Day " << j+1 << " : ";
       
		cin >> temperature[i][j];
        }
        
	}
	
	While (province <= 'C')
    {
        for (int j=0; j<week; ++j)
    
        {
        cout<< "Province " << province++; << ", Day " << j+1 << " : ";
       
        cin >> temperature[i][j];
        }
        
    }	
return 0;
}

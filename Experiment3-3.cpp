#include <iostream>
#include <conio.h>
#include<cstring>
using namespace std;

int main()
{

    char a[25];
    int num;
    
    cout << "Enter array: ";
    
    cin.getline(a, 25);
    
    num = strlen(a);
    
    for (int i = num; i >= 0; i--)
    
    {
    cout << "The output is: " << a[i] << endl;
    }
    
    cout << "The array size is: "<< num + 1;
    
        
_getch();

return 0;
}
# include "rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    float length ,width;

    
    rectangle show2;
    // input the value of length and width 

    cout << " enter the value of length of rectangle :";
    cin>> length;

    cout << " enter the value width of rectangle : ";
    cin>> width;
    
    
    rectangle show (length,width);
    cout<< "the area of a rectangle is :" << show2.areaOfRectangle<< endl;
    return 0;
}

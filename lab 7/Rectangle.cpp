#include <iostream>
# include "rectangle.h"

using namespace std;

int main()
{
    float length ,width;

    rectangle show ;
    rectangle show2;
    // input the value of length and width 

    cout << " enter the value of length of rectangle :";
    cin>> length;
`
    cout << " enter the value width of rectangle : ";
    cin>> width;
    
    
    show.setWIdth (width);
    show.setLength(length);
    cout<< "the area of a rectangle is :" << show2.areaOfRectangle<< endl;
    return 0;
}

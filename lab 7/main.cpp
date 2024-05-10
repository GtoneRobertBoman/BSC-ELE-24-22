#include <iostream>
#include "circle.h"
#include "area.h"
#include "rectangle.h"
#include "square.h"

using namespace std;
int main(){
    char option='0';

    while (choice != '4'){
          cout << "1 .for  calculate the area of a square"<< endl;
          cout << "2 .for calculate the area of a rectangle"<< endl;
          cout << "3 .for calculate the area of a circle"<< endl;
          cout << "4 .to  quit " <<endl;
          cout << endl;
          cout << "Enter your choice :"<< endl;

          cin >> option ;
          cin.ignore();

          if (option == '1'){
             float side ;
             cout << "enter the side of length of square :"
             cin.ignore();
             shapes :: sqaure square (side);
             cout << "Area of square is :"  << area:: calcualateArea(square) << endl;
    }
        else if (option == '2'){
            float base,hieght ;
            cout << "enter the base and hieght of the triangle respectively :" << endl;
            cin >> base ;
            cin >> hieght ;
            cin.ignore() ;
            shaoes :: Circle circle(radius);
            cout << " the area of the circle  is :"<< area::calcualateArea(circle) << endl;
        }
        else {
            cout << "Invalid option " ;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
/// function for calculating the area of a Rectangle

double areaOfRectangle(double length, double width){
    return length * width ;
}
/// function for calculating the area oF a Square

 double areaOfSquare(double width){
    return width * width;
 }
/// function for calculating the area of a Triangle

 double areaOfTriangle (double base , double hieght){
    return 0.5 * base * hieght;
 }
/// prompt the user to choose the shape
///if choose wrong shape  , give  a chance  to choose again
///if correct , prompt the user to enter the size of sides
/// call a function of that particular shape
/// repeat steps
int main()
{
    double hieght;
    double width;
    double length;
    double base ;

    int type;

    for(int i=0; i < 4; i++){
        cout << " choose which area  do you want to calculate " << endl;
        cout << " 1 Rectangle" << endl;
        cout << " 2 Triangle" << endl;
        cout << " 3 Square" << endl;
        cout << " 4 Quit program" << endl;
        cout <<endl;
        cout << "Enter selection : ";

        cin >>type;
        switch (type){
            case 1:
                cout << "Rectangle" << endl;
                cin >> length;
                cin >> width;
                cout << areaOfRectangle(length, width) << endl;
                break;
            case 2:
                cout << "Triangle" << endl;
                cin >> base;
                cin >> hieght ;
                cout << areaOfTriangle(base , hieght) << endl;
                break ;
            case 3:
                cout << "Square" << endl;
                cin >> width;
                cout << areaOfSquare(width) << endl;
                break ;
            case 4:
                return -1;
            default:
                cout << "Your input was " << type << " which is invalid " << endl;
        }
    }
    return 0;
}

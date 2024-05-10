#include "Rectangle.h"

using namespace std;


rectangle :: rectangle (float value1, float value2) : length (value1), width (value2)) {}
rectangle:: ~rectangle ()

 void rectangle :: setLenght (float x){
     length = x;
}
 void rectangle :: setWidth  (float y){
     width = y ;
}
 float  rectangle :: getLength () const{
    return length;
}
 float rectangle :: getWidth () const {
    return width ;
}
float rectangle :: areaOfLectangle ()const{
 return width *length;
 }

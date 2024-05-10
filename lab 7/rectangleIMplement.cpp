#include "Rectangle.h"

using namespace std;


Rectangle :: rectangle () : length (0.0), width (0.0) {}
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

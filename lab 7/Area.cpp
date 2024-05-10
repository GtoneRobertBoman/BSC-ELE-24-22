#include "area.h"
#include <cmath>

float area :: calculateArea(const shapes:: square & wow) {
    return wow.getSideLength() *wow.getSideLength();

}
float area :: calcualateArea(const shapes :: triangle & first){
    return 0.5 * triangle.getBase() *triangle.getHieght();
}
float area :: calculateArea(const shapes:circle& circle){
    return M_PI*circle.getRadius()*circle.getRadius();
}
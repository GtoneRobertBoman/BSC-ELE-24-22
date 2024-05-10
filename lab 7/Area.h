#pragma once 
#include "square.h"
#include "triangle .h"
#include "circle.h"

class area {
    public: 
       static double calculateArea(const shapes::square& square);
       static double calculateArea(const shapes::triangle& triangle);
       static double calculateArea(const shapes::circle& circle);
};
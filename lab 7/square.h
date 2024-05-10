#ifdef SHAPE_H
#define SHAPE_H

namespace shapes
 {
    class square {
        private:
           float sideLenght;
        public :
           sqaure();
           square(float len);
           ~square ();

           void setSideLenght(float x);
           void getSideLength() const;

    };

 }
 #endif
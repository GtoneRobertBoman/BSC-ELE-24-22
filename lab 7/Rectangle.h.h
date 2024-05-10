#ifdef RECTANGLE_H
#define RECTANLGLE_H


using namespace std;

class rectangle{

  private:
      float width;
      float length;
  public:
      rectangle();
      rectangle(float value1, float value2)
     ~rectangle();

    void setLength (float x);
    void setwidth  (float y);
    float getlength () const;
    float getWidth  () const;

    float areaOfLectangle ();

};

#endif 
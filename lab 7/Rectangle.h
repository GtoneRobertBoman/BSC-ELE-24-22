#pragma once

using namespace std;

class rectangle{

  private:
      float width;
      float length;
  public:
      rectangle();
     ~rectangle();

    void setLength (float x);
    void setwidth  (float y);
    float getlength () const;
    float getWidth  () const;

    float areaOfLectangle ();

};

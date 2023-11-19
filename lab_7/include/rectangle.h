#ifndef RECT_H
#define RECT_H
#include <iostream>
#include <graphics.h>
#include "shape.h"

using namespace std;

class rect : public shape
{
    public:
        rect(int _x1 =0, int _y1=0, int _x2=0, int _y2=0, int _color=0): shape(_x1,_y1,_x2,_y2,_color){
            cout<<"Reactangle created" <<endl;
        };
        rect(point _p1, point _p2, int _color ): shape(_p1,_p2,_color){
            cout<<"Reactangle created" <<endl;
        };
          void draw(){
          cout<<"Rectangle draw"<<endl;
          int x1 = p1.getX();
          int y1 = p1.getY();
          int x2 = p2.getX();
          int y2 = p2.getY();
          setcolor(color);
          rectangle(x1,y1,x2,y2);
        }
        ~rect(){
           cout<<"Reactangle destroyed" <<endl;
        };

    protected:

    private:
};

#endif // RECT_H

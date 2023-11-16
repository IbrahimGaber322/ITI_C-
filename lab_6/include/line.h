#ifndef LIN_H
#define LIN_H
#include <iostream>
#include <graphics.h>
#include "shape.h"
using namespace std;

class lin : public shape
{
    public:
         lin(int _x1 =0, int _y1=0, int _x2=0, int _y2=0, int _color=0): shape(_x1,_y1,_x2,_y2,_color){
            cout<<"Line created" <<endl;
        };
        lin(point _p1, point _p2, int _color ): shape(_p1,_p2,_color){
            cout<<"Line created" <<endl;
        };

        void draw(){
          int x1 = p1.getX();
          int y1 = p1.getY();
          int x2 = p2.getX();
          int y2 = p2.getY();
          setcolor(color);
          line(x1,y1,x2,y2);
        }
        ~lin(){
           cout<<"Line destroyed" <<endl;
        };


    protected:

    private:
};

#endif // LIN_H

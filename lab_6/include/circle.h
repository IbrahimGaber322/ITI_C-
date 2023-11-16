#ifndef CIRC_H
#define CIRC_H
#include <iostream>
#include <graphics.h>
#include "shape.h"
using namespace std;

class circ:public shape
{
    public:
               circ(int _x1 =0, int _y1=0, int _x2=0, int _y2=0, int _color=0, int _radius = 0): shape(_x1,_y1,_x2,_y2,_color){
            cout<<"Circle created" <<endl;
            radius = _radius;
        };
        circ(point _p1, point _p2, int _color, int _radius ): shape(_p1,_p2,_color){
            cout<<"Circle created" <<endl;
            radius = _radius;
        };
          void draw(){
          int x1 = p1.getX();
          int y1 = p1.getY();
          setcolor(color);
           circle(x1,y1,radius);
        }
        ~circ(){
           cout<<"Circle destroyed" <<endl;
        };


    protected:

    private:

        int radius;
};

#endif // CIRC_H

#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <graphics.h>
#include "point.h"

using namespace std;

class shape
{
    public:
        shape(int _x1 =0, int _y1=0, int _x2=0, int _y2=0, int _color=0):p1(_x1, _y1),p2(_x2, _y2){
              cout<<"Shape created"<<endl;
              color = _color;
        };
           shape(point _p1, point _p2, int _color=0):p1(_p1),p2(_p2){
              cout<<"Shape created"<<endl;
              color = _color;
        };
        ~shape(){

             cout<<"Shape destroyed"<<endl;
        };

    protected:
        point p1;
        point p2;
        int color;
    private:
};

#endif // SHAPE_H

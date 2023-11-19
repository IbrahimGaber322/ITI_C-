#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <graphics.h>
using namespace std;

class point
{
    public:

         point(int _x=0, int _y=0){
            cout<<"Point created"<<endl;
            x=_x;
            y=_y;
        };
        int getX(){
          return x;
        }
        int getY(){
            return y;
        }
      ~point(){
          cout<<"Point destroyed"<<endl;
      };

    protected:
        int x;
        int y;
    private:
};

#endif // POINT_H

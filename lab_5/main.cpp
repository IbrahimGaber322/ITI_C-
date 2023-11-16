#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

using namespace std;


class point{

   int x;
   int y;

  public:
      point(int _x=0, int _y=0){
         x=_x;
         y=_y;
      }

      void setX(int _x){
         x=_x;
      }
       void setY(int _y){
         y=_y;
      }
       void setXY(int _x, int _y){
         x=_x;
         y=_y;
      }

      int getX(){
          return x;
      }
       int getY() {
        return y;
       }

      ~point(){
         cout<<"Point is destroyed"<<endl;
      }

};

class lin{
    point p1;
    point p2;

public:
    lin(int _x1=0, int _y1=0, int _x2=0, int _y2=0):p1(_x1,_y1), p2(_x2, _y2){

    }
    lin(point _p1, point _p2){
        p1 = _p1;
        p2 = _p2;
    }

    void draw(){

    line(p1.getX(), p1.getY(), p2.getX(), p2.getY());





    }

    void draw(point _p1, point _p2){

    line(_p1.getX(), _p1.getY(), _p2.getX(), _p2.getY());





    }


      ~lin(){
         cout<<"Rectangle is destroyed"<<endl;
      }

};

class circ{
    point p;
    point * ptr;
    int radius;
public:
    circ(int x=0, int y=0, int rad=0):p(x,y){

    }
    circ(point _p, int rad){
        p=_p;
        radius = rad;
    }

    void draw(){

    circle(p.getX(), p.getY(), radius);





    }

    void draw(point _p, int rad){

    circle(_p.getX(), _p.getY(), rad);

    }

     void draw(point * _ptr, int rad){

    circle(_ptr->getX(), _ptr->getY(), rad);

    }



      ~circ(){
         cout<<"Rectangle is destroyed"<<endl;
      }

};

int main()
{

    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
   initgraph(&gd, &gm, data);
   point p1(2,3);
   point p2(200,200);
   int radius = 150;

   lin l1(p1,p2);

    l1.draw();

   circ c1(p2, radius);

   //c1.draw();

   //c1.draw(p2,150);
    c1.draw(&p2,150);
   getch();
   closegraph();

    return 0;
}




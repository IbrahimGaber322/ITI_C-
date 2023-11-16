#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include "include/point.h"
#include "include/shape.h"
#include "include/circle.h"
#include "include/rectangle.h"
#include "include/line.h"
using namespace std;



int main()
{
    cout << "welcome to shapes drawer :D" << endl;
    int gm, x, y, gd = DETECT, i;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file


    int numOfCirlces=0;
    int numOfRectangles =0;
    int numOfLines =0;
    char shapeType =0;




     while(shapeType != 'e' && shapeType != 'E' ){
            cout << "Going to draw "<<numOfLines<<" Lines, "<<numOfCirlces<<" Circles, "<<numOfRectangles<<" Rectangles." << endl;
        cout << "Enter type of shape you want to draw: L:Line, C:Circle, R:Rectangle, to exit press: e" << endl;

        cin>>shapeType;

        switch (shapeType)  {
    case 'L':
    case 'l':{
      numOfLines++;
    }
        break;

    case 'c':
    case 'C':{
       numOfCirlces++;
    }
        break;
        case 'r':
        case 'R':{
          numOfRectangles++;
        }
        break;
         case 'e':
        case 'E':
            {
               cout << "Now pick dimensions and colors:" << endl;
            }

        break;
    default:
        // code to be executed if
        // expression doesn't match any constant
          break;
    }
     }



    lin lines[numOfLines];
    circ circles[numOfCirlces];
    rect rectangles[numOfRectangles];



    for(int i=0; i<numOfLines; i++){
        int _x1, _y1, _x2, _y2, _color =0;
        cout<<"Enter x1,y1 x2,y2 and color from 1 to 15 for line no:"<< i+1<<endl;
        cin>> _x1>> _y1>> _x2>> _y2>> _color;
        lines[i]= lin (_x1, _y1, _x2, _y2, _color);
    }

      for(int i=0; i<numOfCirlces; i++){
         int _x1, _y1, _radius, _color =0;
        cout<<"Enter x1,y1 radius and color from 1 to 15 for circle no:"<< i+1<<endl;
        cin>> _x1>> _y1>> _radius>> _color;
        circles[i] = circ(_x1,_y1,0,0,_color,_radius);
      }

       for(int i=0; i<numOfRectangles; i++){
          int _x1, _y1, _x2, _y2, _color =0;
        cout<<"Enter x1,y1 x2,y2 and color from 1 to 15 for rectangle no:"<< i+1<<endl;
        cin>> _x1>> _y1>> _x2>> _y2>> _color;
        rectangles[i]= rect (_x1, _y1, _x2, _y2, _color);
      }


initgraph(&gd, &gm, data);


  for(int i=0; i<numOfLines; i++){
        lines[i].draw();
    }

      for(int i=0; i<numOfCirlces; i++){

        circles[i].draw();
      }

       for(int i=0; i<numOfRectangles; i++){

        rectangles[i].draw();
      }

    getch();
    closegraph();
    return 0;
}


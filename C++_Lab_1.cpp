#include <iostream>
using namespace std;

class complex {
   int real, img;
   public:
      void set();
      void get();
      void display();
      complex add(complex);
      complex sub(complex);
};
void complex::set() {
   cout << "Enter Real part: ";
   cin >> real;
   cout << "Enter Imaginary Part: ";
   cin >> img;
}
void complex::get() {
   cout << "The complex number is: "<< real << "+" << img << "i" << endl;
}
void complex::display() {
   if(img < 0)
      if(img == -1)
         cout << "The complex number is: "<< real << "-i" << endl;
      else
         cout << "The complex number is: "<< real << img << "i" << endl;
      else
         if(img == 1)
            cout << "The complex number is: "<< real << " + i"<< endl;
         else
            cout << "The complex number is: "<< real << " + " << img << "i" <<
   endl;
}
complex complex::add(complex c2) {
   complex res;
   res.real = real + c2.real;//addition for real part
   res.img = img + c2.img;//addition for imaginary part
   return res;//the result after addition
}
complex complex::sub(complex c2) {
   complex res;
   res.real = real - c2.real;//subtraction for real part
   res.img = img - c2.img;//subtraction for imaginary part
   return res;//the result after subtraction
}

int main()
{
    int x = 5;
    int y = 6;

    cout << x, y;

    return 0;
}

void swap(int &a, int &b)
{
    int temp;

    temp = b;
    b = a;
    a = temp;
}

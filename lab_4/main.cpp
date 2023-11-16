#include <iostream>

using namespace std;



class Complex {
   int real, img;
   public:


    Complex(int x=0, int y=0) {
        real = x;
        img = y;
    }

    Complex(Complex &x){
        real = x.real;
        img = x.img;
    }
      void set();
      void get();
      void display();
      Complex add(const Complex & c);
      Complex sub(const Complex & c);
      Complex operator + ( Complex &c){
           real = real + c.real;
           img = img + c.img;
           return *this;
      }
       Complex operator - (Complex &c){
          Complex res(real-c.real, img-c.img);
          return res;
      }
     void operator = (const Complex &c){
          this->real = c.real;
          this->img = c.img;
      }

      friend istream & operator >> (istream &in,  Complex &c);
      friend ostream & operator << (ostream &out, const Complex &c);
};
void Complex::set() {
   cout << "Enter Real part: ";
   cin >> real;
   cout << "Enter Imaginary Part: ";
   cin >> img;
}
void Complex::get() {
   cout << "The Complex number is: "<< real << "+" << img << "i" << endl;
}
void Complex::display() {
   if(img < 0)
      if(img == -1)
         cout << "The Complex number is: "<< real << "-i" << endl;
      else
         cout << "The Complex number is: "<< real << img << "i" << endl;
      else
         if(img == 1)
            cout << "The Complex number is: "<< real << " + i"<< endl;
         else
            cout << "The Complex number is: "<< real << " + " << img << "i" <<
   endl;
}
Complex Complex::add(const Complex &c2) {
   Complex res;
   res.real = real + c2.real;//addition for real part
   res.img = img + c2.img;//addition for imaginary part
   return res;//the result after addition
}
Complex Complex::sub(const Complex &c2) {
   Complex res;
   res.real = real - c2.real;//subtraction for real part
   res.img = img - c2.img;//subtraction for imaginary part
   return res;//the result after subtraction
}

 ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.img << endl;
    return out;
}

istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.img;
    return in;
}

class Stack{
    int* arr;
    int top;
    int arrSize;
public:
    Stack() {
        arrSize = 5;
        arr = new int[arrSize];
        top = -1;
    }

    Stack(int arr_size) {
        arrSize = arr_size;
        arr = new int[arrSize];
        top = -1;
    }

    Stack(Stack &x){
        arrSize = x.arrSize;
        top = x.top;
        arr = new int[arrSize];
        for(int i=0; i<=top; i++){
            arr[i] = x.arr[i];
        }
    }
    void print() {
        for (int i=0;i<=top;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    Stack &push(int x) {
        if (this->top < ((this->arrSize) - 1)){
            this->arr[++top] = x;
            cout << "Element : " << arr[top] << " got pushed" << endl;
        }
        else {
            cout<<"Array is full !"<<endl;
        }
        return *this;

    }
      Stack &push(int elements[], int count) {
          if(count <= arrSize - top - 1){
             for (int i = 0; i < count; i++) {
            push(elements[i]);
        }
          }

        return *this;
    }


    Stack& pop(void);

    Stack operator = (Stack & s){
        top = s.top;
        arrSize = s.arrSize;
        delete[] arr;
        arr = new int[arrSize];
        for(int i=0; i<=top; i++){
            arr[i] = s.arr[i];
        }
    }


    ~Stack(){
        delete[] arr;
    }
};
Stack& Stack::pop() {
    if (this->top != -1) {
        cout << "Element : " << arr[top] << " got popped" << endl;
        this->top--;
    } else {
        cout << "Array is empty!" << endl;
    }
    return *this;
}



void popAndPush1(Stack x){
    x.pop();
    x.push(1);
    x.print();

}

int main(){
    /*Stack s1(5);
    Queue q1 (5);
    int newElements[5] = {1,2,3,4,5};
    s1.push(newElements, sizeof(newElements)/sizeof(newElements[0])).pop();
    s1.print();
    popAndPush1(s1);
    s1.print();*/

    Complex c1(2,3);
    Complex c2(4,5);

    Complex c3 ;
     c3 = c1+ c2;


    c1.display();




}

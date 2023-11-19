#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

template <class K>

class Stack{
    K* arr;
    int top;
    int arrSize;
public:

Stack() {
        arrSize = 5;
        arr = new K[arrSize];
        top = -1;
    }

 Stack(K arrsz) {
        arrSize = arrsz;
        arr = new K[arrSize];
        top = -1;
    }

void print() {
        for (K i=0;i<=top;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

Stack<K>&push(K x) {
        if (this->top < ((this->arrSize) - 1)){
            this->arr[++top] = x;
        }
        else {
            cout<<"Array is full !"<<endl;
        }
        return *this;

    }

Stack<K>&push(K elements[], K Count) {
          if(Count <= arrSize - top - 1){
             for (int i = 0; i < Count; i++) {
            push(elements[i]);
        }
          }

        return *this;
    }

Stack<K> & pop() {
        if (this->top != -1){
            this->top--;
            cout<<"Element No.: "<< top <<"got popped"<<endl;
        }
        else {
            cout<<"Array is empty !"<<endl;
        }
        return *this;
    }

~Stack(){
        delete[] arr;
    }

};
#endif // STACK_H

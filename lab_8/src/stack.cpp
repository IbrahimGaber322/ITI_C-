#include <iostream>
#include "Stack.h"
using namespace std;
template <typename K>
Stack<K>::Stack() {
        arrSize = 5;
        arr = new K[arrSize];
        top = -1;
    }
template <typename K>
Stack<K>:: Stack(K arrsz) {
        arrSize = arrsz;
        arr = new K[arrSize];
        top = -1;
    }
template <typename K>
void Stack<K>:: print() {
        for (K i=0;i<=top;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
template <typename K>
Stack<K>&Stack<K>::push(K x) {
        if (this->top < ((this->arrSize) - 1)){
            this->arr[++top] = x;
        }
        else {
            cout<<"Array is full !"<<endl;
        }
        return *this;

    }
template <typename K>
Stack<K>&Stack<K>::push(K elements[], K Count) {
          if(Count <= arrSize - top - 1){
             for (int i = 0; i < Count; i++) {
            push(elements[i]);
        }
          }

        return *this;
    }
template <typename K>
Stack<K> & Stack<K>::pop() {
        if (this->top != -1){
            this->top--;
            cout<<"Element No.: "<< top <<"got popped"<<endl;
        }
        else {
            cout<<"Array is empty !"<<endl;
        }
        return *this;
    }
template <typename K>
Stack<K>::~Stack(){
        delete[] arr;
    }

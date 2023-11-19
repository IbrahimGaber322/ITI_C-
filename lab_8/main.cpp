#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    int x = 5;
    Stack <int>s1(x);
    int newElements[5] = {1,2,3,4,5};
   s1.push(newElements, sizeof(newElements)/sizeof(newElements[0])).pop();
    s1.print();



   return 0;
}

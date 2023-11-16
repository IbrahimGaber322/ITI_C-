#include <iostream>

using namespace std;

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

class Queue{
    int* arr;
    int top;
    int bot;
    int arrSize;
public:
    Queue() {
        arrSize = 5;
        arr = new int[arrSize];
        top = -1;
        bot =-1;
    }

    Queue(int arrsz) {
        arrSize = arrsz;
        arr = new int[arrSize];
        top = -1;
        bot=-1;
    }
    void print() {
        for (int i=0;i<=bot;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    Queue &push(int x) {
        if (this->bot < ((this->arrSize) - 1)){
            this->arr[++bot] = x;
        }
        else {
            cout<<"Array is full !"<<endl;
        }
        return *this;

    }
      Queue &push(int elements[], int count) {
          if(count <= arrSize - bot - 1){
             for (int i = 0; i < count; i++) {
            push(elements[i]);
        }
          }

        return *this;
    }


    Queue &pop() {
        if (this->bot != -1){
            this->bot--;
            this->top++;
            cout<<"Element No.: "<< bot <<"got popped"<<endl;
        }
        else {
            cout<<"Array is empty !"<<endl;
        }
        return *this;
    }


    ~Queue(){
        delete[] arr;
    }
};


void popAndPush1(Stack x){
    x.pop();
    x.push(1);
    x.print();

}

int main(){
    Stack s1(5);
    Queue q1 (5);
    int newElements[5] = {1,2,3,4,5};
    s1.push(newElements, sizeof(newElements)/sizeof(newElements[0])).pop();
    s1.print();
    popAndPush1(s1);
    s1.print();




}

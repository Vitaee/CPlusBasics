#include <iostream>
#define MAX_SIZE 101

using namespace std;

int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if(top == MAX_SIZE -1){
        // stack overflow
        return;
    }
    A[++top] = x;
}

void Pop(){
    if(top == -1){
        //No element to pop
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    for (int i =0; i <= top; i++)
    {
        cout << A[i] << "\n";
    }
    
}


int main() {
    Push(2);
    Push(5);
    Push(8);
    Pop();
    Print();

}
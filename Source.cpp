#include <iostream>
using namespace std;

class stack {

    char *arr;
    int top;
    int capacity;

    public:
    stack(int capacity) {
        this->arr = new char[capacity];
        this->top = -1;
        this->capacity = capacity;
    }

    void push(char data) {
        if((this->top + 1) == this->capacity) {
            cout << "Stack is full. Cannot push data\n";
        }
        else {
            this->arr[++top] = data;
        }
    }

    char pop() {
        if(this->top == -1) {
            cout << "Stack is empty. Cannot pop data\n";
            return ' ';
        }
        else {
            return this->arr[top--];
        }
    }

    char peek() {
        if(this->top == -1) {
            cout << "Stack is empty. Cannot peek data\n";
            return ' ';
        }
        else {
            return this->arr[top];
        }
    }

    bool isEmpty() {
        if(this->top == -1) {
            return true;
        }
        return false;
    }

    void reverse() {

        string reversedString;

        while(!this->isEmpty()) {
            reversedString = reversedString + this->pop();
        }

        cout << "Reversed string is: " << reversedString;
    }
};

int main() {

    // the stack in this code is built on char datatype. datatypes can always be changed as per preference. however, a better option can be string datatype which can cater both char and int
    stack st(5);

    // filling data
    st.push('w');
    st.push('o');
    st.push('r');
    st.push('d');

    // reverse the stack which contains the string 'word'
    st.reverse();

    return 0;
}
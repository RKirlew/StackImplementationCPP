#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];
public:
    Stack() {
        top = -1;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }
    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }

    }
    bool isFull() {
        if (top == 4) {
            return true;
        }
        else {
            return false;
        }
    }
    void push(int num) {
        if (isFull()) {
            cout << "Stack is full" << endl;
        }
        else {
            top++;
            arr[top] = num;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else {
            int popVal = arr[top];
            arr[top] = 0;
            top--;
            return popVal;
        }
    }
    int count(){
        return top + 1;
    }

    int peek(int pos) {

        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else {
            return arr[pos];
        } 
    }

    void change(int pos, int val) {
        arr[pos] = val;
        cout << "Value changed at location" << pos << endl;

    }

    void display() {
        cout << "All values in the stack are:" << endl;

        for (int i = 4; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};


int main()
{
    int answer,position,value;
    Stack s1;
    cout << "\nChoose a Stack Operation:" << endl;
    do {
        cout << "1- Push 2-Pop 3-IsEmpty\n" << endl;
        cout << "4- IsFull 5-Peek 6-Count\n" << endl;
        cout << "7- Change 8-Display 9-ClearScreen\n" << endl;
        cin >> answer;

        switch (answer)
        {
        case 1:
            cout << "Enter a value to push on the stack:" << endl;
            cin >> value;
            s1.push(value); 
            break;
        case 2:
            cout <<"\nValue popped:"<< s1.pop() << endl;
            break;
        case 3:
            cout << s1.isEmpty() << endl;
            break;
        case 4:
            cout << s1.isFull() << endl;
        case 5:
            cout << "Enter position of item you want to peek: " << endl;
            cin >> position;
            cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
            break;
        case 7:
            cout << "Change Function Called - " << endl;
            cout << "Enter position of item you want to change : ";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change : ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            system("COLOR a");
            cout << "Display Function Called - " << endl;

            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            break;
        }
    } while (answer != 0);
    return 0;
}

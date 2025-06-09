// Abstraction means showing only what's important and hiding the internal implementation part.
 
// Real-life example: When you send an email to someone, you just click send, and you get the success message; what happens when you click send, how data is transmitted over the network to the recipient is hidden from you (because it is irrelevant to you).

#include <iostream>
using namespace std;

class abstraction {
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << endl << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
};

int main() {
    abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
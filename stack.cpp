#include <iostream>

using namespace std;

#define MAX_ITEMS 100

class Stack {
    int currentindex;
    public:
        int a[MAX_ITEMS];

        Stack() { currentindex = 0; };
        bool push(int x);
        int pop();
        bool isEmpty();
};

bool Stack::push(int x) {
   if (currentindex >= (MAX_ITEMS-1)) {
        return false;
   } 

   a[++currentindex] = x;
   return true;
}

int Stack::pop() {
    if (currentindex < 0) {
        return 0;
    }

    return a[currentindex--];
}

int main() {
    class Stack mystack;
    mystack.push(11);
    mystack.push(12);
    mystack.push(13);
    cout << mystack.pop() << endl;

    return 0;
}

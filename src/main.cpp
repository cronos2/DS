#include <iostream>

#include <LMaxStack.h>
#include <Vector.h>
#include <Pair.h>

using namespace std;


int main(){

    LMaxStack <int> stack;

    for(int i = 0; i < 5; i++){

        stack.push(i);

    }

    cout << stack.pop() << endl;

    LMaxStack <int> stack2(stack);

    stack2.push(100);

    stack = stack2;

    cout << stack.getMax() << endl;

    cout << stack.pop() << endl;

    cout << stack.getMax() << endl;


}
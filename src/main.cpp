#include <iostream>

#include <LMaxStack.h>

using namespace std;


int main(){

    LMaxStack <int> stack;

    for(int i = 0; i < 5; i++){

        stack.push(i);

    }

    for(int i = 0; i < 5; i++){

        cout << stack.pop();

    }

}
#include <iostream>

#include <QMaxStack.h>
#include <Pair.h>

using namespace std;

/*

Output esperado:

4
100
100
3

*/


int main(){

    QMaxStack <int> stack;

    for(int i = 0; i < 5; i++){

        stack.push(i);

    }

    cout << stack.pop() << endl;

    QMaxStack <int> stack2(stack);

    stack2.push(100);

    stack = stack2;

    cout << stack.getMax() << endl;

    cout << stack.pop() << endl;

    cout << stack.getMax() << endl;

}
#include <SDeque.h>
#include <iostream>

using namespace std;

/*

Output esperado:

4
0
-1

*/


int main(){

    SDeque <int> deque;

    for(int i = 0; i < 5; i++){

        deque.push_back(i);

    }

    cout << deque.pop_back() << endl;
    cout << deque.pop_front() << endl;

    deque.push_front(-1);
    cout << deque.pop_front() << endl;

}
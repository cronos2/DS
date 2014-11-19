#include <iostream>

#include <SMaxQueue.h>

using namespace std;

/* 

Output esperado:

5
100
54321100

*/


int main(){

    SMaxQueue <int> queue;

    for(int i = 5; i > 0; i--){

        queue.push_back(i);

    }

    cout << queue.getMax() << endl;

    queue.push_back(100);

    cout << queue.getMax() << endl;

    for(int i = 0; i < 6; i++){

        cout << queue.pop_front();

    }

}
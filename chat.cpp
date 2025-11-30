/*
execution:
g++ chat.cpp -o chat
./chat
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
 
    cout<<"hola"<<endl;
    return 0;

    
}
    */

    // data race
#include<bits/stdc++.h>
#include <iostream>
#include <thread>

int counter = 0; // shared variable

void increment() {
    for (int i = 0; i < 100000; ++i) {
        counter++;  // ⚠ data race here
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter << std::endl;
}


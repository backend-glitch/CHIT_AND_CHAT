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
#include <iostream>
#include <thread>
#include <conio.h>

using namespace std;

long long counter = 0;

void writer() {
    for (int i = 0; i < 1'000'000; i++) {
        counter++;  // NOT ATOMIC
    }
}

void writer2() {
    for (int i = 0; i < 1'000'000; i++) {
        counter++;  // TWO WRITERS = BAD
    }
}

int main() {
    std::thread t1(writer);
    std::thread t2(writer2);

    t1.join();
    t2.join();

    std::cout << "Final counter: " << counter << "\n";
}

// double free 
#include <iostream>

int main() {
    int* p = new int(10);

    delete p;   // first free (OK)

    delete p;   // ⚠️ second free → DOUBLE FREE → undefined behavior

    std::cout << *p << "\n"; // may crash, may print garbage


//data overflow
int arr[3] = {1, 2, 3};
cout<<"ans:"<< arr[10]; // ❌ runtime panic, NOT memory corruption

}
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    while (true) {
        cout << "度哒迪喜欢忽嘞" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}

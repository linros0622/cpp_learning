#include <iostream>
using namespace std;

class Robot {
public:
    int battery;
    void move() {
        cout << "移动中，电量" << battery << endl;
    }
};

int main() {
    Robot my_robot;
    my_robot.battery = 100;
    my_robot.move();
    
    Robot your_robot;
    your_robot.battery = 50;
    your_robot.move();
    
    return 0;
}

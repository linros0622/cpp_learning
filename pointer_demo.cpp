#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Robot {
public:
    int battery;
    void move() {
        cout << "移动中，电量" << battery << endl;
    }
};

int main() {
    cout << "=== 1. 指针和引用 ===" << endl;
    int a = 10;
    int* p = &a;
    int& ref = a;
    
    *p = 20;
    ref = 30;
    cout << "a = " << a << endl;
    
    cout << "=== 2. 智能指针创建对象 ===" << endl;
    shared_ptr<Robot> my_robot = make_shared<Robot>();
    my_robot->battery = 100;
    my_robot->move();
    
    cout << "=== 3. 引用传参（避免拷贝）===" << endl;
    auto print_vec = [](const vector<int>& vec) {
        cout << "vector 大小: " << vec.size() << endl;
    };
    vector<int> data = {1, 2, 3};
    print_vec(data);
    
    return 0;
}

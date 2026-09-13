#include <iostream>
using namespace std;

// 基类（父类）
class Animal {
public:
    virtual void speak() {  // virtual = 允许子类覆盖
        cout << "动物发出声音" << endl;
    }
    virtual ~Animal() {}    // 虚析构（重要！）
};

// 派生类（子类）
class Dog : public Animal {
public:
    void speak() override {  // override = 明确覆盖父类函数
        cout << "旺旺！" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "喵喵～" << endl;
    }
};

int main() {
    // 多态：父类指针指向子类对象
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    
    a1->speak();  // 输出：旺旺！
    a2->speak();  // 输出：喵喵～
    
    delete a1;
    delete a2;
    return 0;
}
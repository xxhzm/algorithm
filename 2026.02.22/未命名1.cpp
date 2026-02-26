#include <iostream>

using namespace std;

class MyClass {
public:
    int x;
    int y;
    MyClass(int x, int y) : x(x), y(y) {
		std::cout << "初始化" << "\n";
	}  // 构造函数
    void display() {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }
};

int main() {
    MyClass obj(10, 20);
    obj.display();  // 调用成员函数
}

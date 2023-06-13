#include <iostream>

class Point {
public:
    int x = 5;
    int y = 5;

    Point() {std::cout << "DEFAULT CONSTRUCTOR" << std::endl;}

    Point(const Point& other) {
        std::cout << "COPY CONSTRUCTOR" << std::endl;
        x = other.x;
        y = other.y;
    }
    ~Point() { std::cout << " DELETED " << std::endl;}
};

void foo(Point p) {
    p.x = 9;
    p.y = 10;
    std::cout << p.x << "   " << p.y << std::endl;
}

int main() {
    Point p1;
    std::cout << "------------" << std::endl;
    foo(p1);
    std::cout << "------------" << std::endl;
    std::cout << p1.x << "   " << p1.y << std::endl;
}
#include <iostream>
using namespace std;

class Point {
    public:
        Point(int a, int b): x(a), y(b) {};
        void print() {
            cout << x << ", " << y;
        }
    private:
    friend void shift(Point& p, int step) ;
        int x;
        int y;
    
    
};
void shift(Point &p, int step) {
    p.x += step;
    p.y += step;
}

int main() {
    int x, y;
    cin>>x>>y;
    Point p(x, y);

    int step;
    cin>>step;
    shift(p, step);
    
    p.print();
}

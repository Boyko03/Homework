#include <stdio.h>
#include <math.h>

class Point{
    double x;
    double y;
    double save_x;
    double save_y;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
        save();
    }
    double distance(Point p){
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
    void save(){
        save_x = x;
        save_y = y;
    }
    void load(){
        x = save_x;
        y = save_y;
    }
    void move(double x, double y){
        this->x = x;
        this->y = y;
    }
    void print(){
        printf("x: %f\ny: %f\n", x, y);
    }
};

int main(){
    Point p1(0, 0);
    Point p2(3, 4);

    printf("Distance is %f\n", p1.distance(p2));
    p1.print();
    p1.move(1, 1);
    p1.print();
    
    p1.save();

    p1.move(2, 2);
    p1.print();

    p1.load();
    p1.print();

    return 0;
}
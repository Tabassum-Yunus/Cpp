#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    // Virtual function to draw the shape
    virtual void draw() const {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Override draw function for Circle
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    // Override draw function for Square
    void draw() const override {
        cout << "Drawing a square." << endl;
    }
};

// Derived class 3
class Triangle : public Shape {
public:
    // Override draw function for Triangle
    void draw() const override {
        cout << "Drawing a triangle." << endl;
    }
};

int main() {
    const int shapeCount = 3;

    // Array of pointers to Shape objects
    Shape* shapes[shapeCount];

    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Triangle();

    // Call draw through the base-class pointers
    for (int i = 0; i < shapeCount; ++i) {
        shapes[i]->draw();
    }

    // Release memory allocated on the heap
    for (int i = 0; i < shapeCount; ++i) {
        delete shapes[i];
    }

    return 0;
}

/*
    Assignment: Chapter 4 Excersize 10

    Programmer: Vincent Epefanio

    Date: 10/25/2024

    Requirements: Write a program that displays the following menu:
    Geometry Calculator     
    1. Calculate the Area of a Circle     
    2. Calculate the Area of a Rectangle     
    3. Calculate the Area of a Triangle     
    4. Quit     
    Enter your choice (1–4):
    If the user enters 1, the program should ask for the radius of the circle then display its area. Use the following formula:

    area = πr2 

    Use 3.14159 for π and the radius of the circle for r. If the user enters 2, the program should ask for the length and width of the rectangle, then display the rectangle’s area. Use the following formula:

    area = length * width 

    If the user enters 3, the program should ask for the length of the triangle’s base and its height, then display its area. Use the following formula:

    area = base * height * .5 

    If the user enters 4, the program should end.

    Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu. Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
*/




#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

void calculateCircleArea() {
    double radius;
    do {
        cout << "Enter the radius of the circle (positive value): ";
        cin >> radius;
        if (radius < 0) {
            cout << "Error: Radius cannot be negative. Please try again." << endl;
        }
    } while (radius < 0);

    double area = PI * radius * radius;
    cout << fixed << setprecision(2);
    cout << "The area of the circle is: " << area << endl;
}

void calculateRectangleArea() {
    double length, width;
    do {
        cout << "Enter the length of the rectangle (positive value): ";
        cin >> length;
        if (length < 0) {
            cout << "Error: Length cannot be negative. Please try again." << endl;
        }
    } while (length < 0);

    do {
        cout << "Enter the width of the rectangle (positive value): ";
        cin >> width;
        if (width < 0) {
            cout << "Error: Width cannot be negative. Please try again." << endl;
        }
    } while (width < 0);

    double area = length * width;
    cout << fixed << setprecision(2);
    cout << "The area of the rectangle is: " << area << endl;
}

void calculateTriangleArea() {
    double base, height;
    do {
        cout << "Enter the base of the triangle (positive value): ";
        cin >> base;
        if (base < 0) {
            cout << "Error: Base cannot be negative. Please try again." << endl;
        }
    } while (base < 0);

    do {
        cout << "Enter the height of the triangle (positive value): ";
        cin >> height;
        if (height < 0) {
            cout << "Error: Height cannot be negative. Please try again." << endl;
        }
    } while (height < 0);

    double area = base * height * 0.5;
    cout << fixed << setprecision(2);
    cout << "The area of the triangle is: " << area << endl;
}

int main() {
    int choice;

    do {
        
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1–4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateTriangleArea();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter a number between 1 and 4." << endl;
        }
        cout << endl; 
    } while (choice != 4);

    return 0;
}

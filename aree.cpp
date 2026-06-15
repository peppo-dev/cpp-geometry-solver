#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    cout << "Enter the name of the shape:" << endl;
    string shape_name;
    cin >> shape_name;

    // --- TRIANGLE ---
    if (shape_name == "triangle")
    {
        float side;
        float height;
        cout << "Enter the side:" << endl;
        cin >> side;
        cout << "Enter the height:" << endl;
        cin >> height;
        cout << "The area is: " << (side * height / 2) << endl;
        return 0;
    }
    // --- RECTANGLE ---
    else if (shape_name == "rectangle")
    {
        float side2;
        float height2;
        cout << "Enter the side:" << endl;
        cin >> side2;
        cout << "Enter the height:" << endl;
        cin >> height2;
        cout << "The area is: " << (side2 * height2) << endl;
        return 0;
    }
    // --- SQUARE ---
    else if (shape_name == "square")
    {
        float side3;
        cout << "Enter the side:" << endl;
        cin >> side3;
        cout << "The area is: " << pow(side3, 2) << endl;
        return 0;
    }
    // --- PARALLELOGRAM ---
    else if (shape_name == "parallelogram")
    {
        float side4;
        float height4;
        cout << "Enter the side:" << endl;
        cin >> side4;
        cout << "Enter the height:" << endl;
        cin >> height4;
        cout << "The area is: " << (side4 * height4) << endl;
        return 0;
    } 
    // --- TRAPEZOID ---
    else if (shape_name == "trapezoid")
    {
        float major_base;
        float minor_base;
        float height6;
        cout << "Enter the major base:" << endl;
        cin >> major_base;
        cout << "Enter the minor base:" << endl;
        cin >> minor_base;
        cout << "Enter the height:" << endl;
        cin >> height6;
        float sum = major_base + minor_base;
        cout << "The area is: " << (sum * height6 / 2) << endl;
        return 0;
    }
    // --- RHOMBUS ---
    else if (shape_name == "rhombus")
    {
        float side5;
        float height7;
        cout << "Enter the side:" << endl;
        cin >> side5;
        cout << "Enter the height:" << endl;
        cin >> height7;
        cout << "The area is: " << side5 * height7 << endl;
        return 0;
    }
    // --- INVALID INPUT ---
    else
    {
        cout << "Invalid shape or not yet supported. Here is the list of available shapes:" << endl;
        cout << "triangle, rectangle, square, parallelogram, rhombus, trapezoid" << endl;
        return 0;
    }
    return 0;
}

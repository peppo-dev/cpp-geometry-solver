#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    cout << "Enter the name of the shape (triangle/rectangle/square):" << endl;
    string shape_name;
    cin >> shape_name;

    // --- TRIANGLE MANAGEMENT ---
    if (shape_name == "triangle")
    {
        string missing_data;
        cout << "Which value is missing? (side/height)" << endl;
        cin >> missing_data;
        
        if (missing_data == "side")
        {
            float area, height;
            cout << "Enter the area value:" << endl;
            cin >> area;
            cout << "Enter the height value:" << endl;
            cin >> height;
            cout << "The side measures: " << (area * 2) / height << endl;
            return 0;
        } 
        else if (missing_data == "height")
        {
            float area1, side1;
            cout << "Enter the area value:" << endl;
            cin >> area1;
            cout << "Enter the side value:" << endl;
            cin >> side1;
            cout << "The height measures: " << (area1 * 2) / side1 << endl;
            return 0;        
        }
        else 
        {
            cout << "Invalid input" << endl;
            return 0;
        }
    }
    
    // --- RECTANGLE MANAGEMENT ---
    else if (shape_name == "rectangle")
    { 
        cout << "What do you need for the rectangle? (side/height)" << endl;
        string needed_data;
        cin >> needed_data;
        
        if (needed_data == "side")
        {
            string calculation_method;
            cout << "Which data do you want to use for the calculation? (diagonal/area)" << endl;
            cin >> calculation_method;
            
            if (calculation_method == "diagonal")
            {
                float diagonal, height1;
                cout << "Enter the diagonal value:" << endl;
                cin >> diagonal;
                cout << "Enter the height value:" << endl;
                cin >> height1;
                
                float diagonal_sq = pow(diagonal, 2);
                float height_sq = pow(height1, 2);
                float subtraction = diagonal_sq - height_sq;
                
                cout << "The side measures: " << sqrt(subtraction) << endl;
                return 0; 
            }
            else if (calculation_method == "area") 
            {
                float area2, height2;
                cout << "Enter the area value:" << endl;
                cin >> area2;
                cout << "Enter the height value:" << endl;
                cin >> height2;
                cout << "The side measures: " << area2 / height2 << endl;
                return 0;
            }
            else 
            {
                cout << "Invalid calculation method" << endl;
            }
        }
        else if (needed_data == "height") 
        {
            string calculation_method_height;
            cout << "Which data do you want to use for the calculation? (diagonal/area)" << endl;
            cin >> calculation_method_height;
            
            if (calculation_method_height == "diagonal") 
            {
                float diagonal, base;
                cout << "Enter the diagonal:" << endl;
                cin >> diagonal;
                cout << "Enter the base:" << endl;
                cin >> base;
                cout << "The height measures: " << sqrt(pow(diagonal, 2) - pow(base, 2)) << endl;
                return 0;
            }
            else if (calculation_method_height == "area") 
            {
                float area, base;
                cout << "Enter the area:" << endl;
                cin >> area;
                cout << "Enter the base:" << endl;
                cin >> base;
                cout << "The height measures: " << area / base << endl;
                return 0;
            }
        }
    }
    
    // --- SQUARE MANAGEMENT ---
    else if (shape_name == "square") 
    {
        string needed_data_square;
        cout << "What do you need? (side/diagonal)" << endl;
        cin >> needed_data_square;

        if (needed_data_square == "side")
        {
            string calculation_method_square;
            cout << "Which data do you want to use for the calculation? (diagonal/area)" << endl;
            cin >> calculation_method_square;
            
            if (calculation_method_square == "diagonal")
            {
                float diagonal;
                cout << "Enter the diagonal value:" << endl;
                cin >> diagonal;
                cout << "The side measures: " << diagonal / sqrt(2) << endl;
            }
            else if (calculation_method_square == "area")
            {
                float area;
                cout << "Enter the area value:" << endl;
                cin >> area;
                cout << "The side measures: " << sqrt(area) << endl;
            }
        }
        else if (needed_data_square == "diagonal") 
        {
            string calculation_method_diag;
            cout << "Which data do you want to use for the calculation? (perimeter/area)" << endl;
            cin >> calculation_method_diag;
            
            if (calculation_method_diag == "perimeter")
            {    
                float perimeter;
                cout << "Enter the perimeter value:" << endl;
                cin >> perimeter;
                cout << "The diagonal measures: " << (perimeter / 4) * sqrt(2) << endl;
            }
            else if (calculation_method_diag == "area")
            {
                float area_sq;
                cout << "Enter the area value:" << endl;
                cin >> area_sq;
                cout << "The diagonal measures: " << sqrt(area_sq * 2) << endl;
            }
        }
    }
    
    return 0;
}

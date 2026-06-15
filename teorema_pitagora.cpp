#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char y_or_n;
    cout << "Do you already have both legs?" << endl;
    cout << "y or n" << endl;
    cin >> y_or_n;
    cin.ignore();

    // --- CASE: BOTH LEGS AVAILABLE ---
    if (y_or_n == 'y')
    {
        int major_leg;
        int minor_leg;
        cout << "Enter the value of the major leg:" << endl;
        cin >> major_leg;
        cout << "Enter the value of the minor leg:" << endl;
        cin >> minor_leg;
        
        double major_leg_sq = pow(major_leg, 2);
        double minor_leg_sq = pow(minor_leg, 2);
        double hypotenuse = sqrt(major_leg_sq + minor_leg_sq);
        
        cout << "The hypotenuse is: " << hypotenuse << endl;
    }
    // --- CASE: MISSING ONE LEG ---
    else if (y_or_n == 'n')
    {
        int hypotenuse_input;
        int given_leg; 
        cout << "Enter the value of the hypotenuse:" << endl;
        cin >> hypotenuse_input;
        cout << "Enter the value of the known leg:" << endl;
        cin >> given_leg;
        
        double hypotenuse_sq = pow(hypotenuse_input, 2); // Hypotenuse squared
        double given_leg_sq = pow(given_leg, 2);         // Leg squared
        double missing_leg = sqrt(hypotenuse_sq - given_leg_sq); // Calculating the missing leg
        
        cout << "The missing leg is: " << missing_leg << endl; // Output
    }
    // --- INVALID INPUT ---
    else
    {
        cout << "Invalid input, please enter y or n" << endl;
    }
    
    return 0;
}

// CSC 134
// M2HW1
// Sebastian Camacho
// 02/22/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // This program is used to calculate the volume, cost, customer charge, and profit of a crate of any size

    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double MAX_CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length,width,height,volume,cost,charge,profit;

    // Set the desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet)" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit
    volume = length * width * height;
    cost= volume * COST_PER_CUBIC_FOOT;

    charge = volume * MAX_CHARGE_PER_CUBIC_FOOT;
    // does not exceed 0.52
    if (charge > volume * MAX_CHARGE_PER_CUBIC_FOOT) {
        charge = volume * MAX_CHARGE_PER_CUBIC_FOOT;
    }

    // display profit
    profit = charge - cost;

    // Display calculations
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
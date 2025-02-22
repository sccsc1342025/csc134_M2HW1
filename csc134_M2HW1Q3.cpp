// CSC 134
// M2HW1-GOlD
// Sebastian Camacho
// 02/22/2025

#include <iostream>

using namespace std;

int main()
{
    cout << "question 3" << endl;
    
    // variables
    int numPizzas, slicesPerPizza, numVisitors;
    int totalSlices, slicesNeeded, leftoverSlices;

    // number of pizza ordered
    cout << "How many pizzas will you order ";
    cin >> numPizzas;

    // slices per pizza
    cout << "How many slices per pizza ";
    cin >> slicesPerPizza;

    // how many visitors
    cout << "How many visitors will come ";
    cin >> numVisitors;

    // calculations
    totalSlices = numPizzas * slicesPerPizza;
    slicesNeeded = numVisitors * 2;
    leftoverSlices = totalSlices - slicesNeeded;

    cout << "Total slices of pizza " << totalSlices << endl;
    cout << "Slices needed for visitors " << slicesNeeded << endl;

    if (leftoverSlices >= 0) {
        cout << "Leftover slices of pizza: " << leftoverSlices << endl;
    }

    return 0;
}
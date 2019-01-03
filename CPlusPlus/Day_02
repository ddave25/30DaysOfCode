#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double mealCost = 0, tip = 0, tax = 0, total = 0;
    int tipPercent = 0, taxPercent = 0, totalCost = 0;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    tip = mealCost * (tipPercent * 0.01);
    tax = mealCost * (taxPercent * 0.01);
        
    total = mealCost + tip + tax;
    
    totalCost = int(total);
        
    if (total - totalCost >= 0.5)
    totalCost++;
        
    cout << "The total meal cost is " << totalCost << " dollars.\n";
    
    return 0;
}

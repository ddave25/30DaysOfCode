#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    int count = 0, subtotal = 0, quotient = 0, remainder = 0;
    
    while (n > 0) {
        quotient = n/2;
        remainder = n%2;
                
        if (remainder == 1)
        subtotal++;
        else {
            if (subtotal > count)
            count = subtotal;
            
            subtotal = 0;
        }
            
        n = quotient;
    }
    
    if (n == 0 && remainder == 1){
        if (subtotal > count)
        count = subtotal;
    }
    
    cout << count;
    
    cin.get();
    cin.get();
    
    return 0;
}

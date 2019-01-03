#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Factorial(int n) {
    if (n > 1)
    return n * Factorial(n-1);
    else
    return n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin >> n;
    
    int result = Factorial(n);
    
    cout << result;
    
    cin.get();
    cin.get();
       
    return 0;
}

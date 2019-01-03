#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j = 0;
    double e = 0;
    string s1;
    
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    // getline must be used as string has whitespaces
    if (getline(cin >> e, s1))
    getline(cin, s1);
    
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;    

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << e + d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s1 << endl;
    
    return 0;
}

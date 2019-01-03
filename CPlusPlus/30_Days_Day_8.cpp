#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    // Variable to hold no. of test cases and input for test cases
    int n;
    string name;
    int phoneNumber;
    map <string, int> phoneBook;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }
    
    while (cin >> name){
        if (phoneBook.find(name) != phoneBook.end())
        cout << name << "=" << phoneBook.find(name)->second << endl;
        else
        cout << "Not found\n";
    }
    
    cin.get();
    cin.get();
    
    return 0;
}

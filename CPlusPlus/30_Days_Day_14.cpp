#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  	
  	// Add your code here
  	Difference(vector <int> a) : elements(a)
  	{}
  	
  	int computeDifference(){
        int difference = 0;
        maximumDifference = 0;
        
        for (int i = 0; i < elements.size(); i++){
            for (int j = 1; j < elements.size(); j++){
                difference = abs(elements[i] - elements[j]);
                if (difference > maximumDifference)
                maximumDifference = difference;
            }
        }

		return maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    cin.get();
    cin.get();
    
    return 0;
}

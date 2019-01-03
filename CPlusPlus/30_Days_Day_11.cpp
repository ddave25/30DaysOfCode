#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int sum = 0, current_sum = 0;
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            current_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            cout << current_sum << endl;
            
            if (i == 0 && j == 0)
            sum = current_sum;
            
            if (current_sum > sum)
            sum = current_sum;
        }
    }
    
    cout << sum;
    
    cin.get();
    cin.get();
    
    return 0;
}

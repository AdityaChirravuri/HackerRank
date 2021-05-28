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
    Difference(vector<int>arr){
        elements = arr;
    }
    
    void computeDifference(){
        int max = -1;
        int min = 101;
        int n = elements.size();
        for(int i=0; i<n; i++){
            if(elements[i] < min)
                min = elements[i];
            
            if(elements[i] > max)
                max = elements[i];
        }
        
        maximumDifference = max-min;
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
    
    return 0;
}
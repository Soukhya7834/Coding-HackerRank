#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x ;
    cin >> n;
    vector<int> vect;
    for(int i=0;i<n;i++){
        cin >> x;   
        vect.push_back(x);
    }
    sort(vect.begin(), vect.end());
     for(int i=0;i<n;i++){
        cout << vect[i]<< " ";
    }
    return 0;
}

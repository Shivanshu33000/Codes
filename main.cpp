#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    int x , n;
    cout<< "Enter The Size of Array:-  ";
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x;
        a.push_back(x);
        cout << a[i];
    }
    
}
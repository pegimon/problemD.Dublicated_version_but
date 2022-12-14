#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
const int MAX = 1e7;
int arr[MAX];

int solve(int n){
    if(n<4) return 0;
    int count=1;
    bool isPrime = true;
    arr[0]=2;
    for (int i = 3; i <= sqrt(n); ++i) {
        for (int j = 0; j < count; ++j) {
            if (i%arr[j]==0){
                isPrime = false;
            }
        }
        if(isPrime) {
            count++;
            arr[count-1]=i;
        }
        isPrime= true;
    }
    return count;
}

int main() {
    int t,n;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}

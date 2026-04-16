#include <iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int>&dp) {
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}
int main(){
    int n; 
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << fib(n, dp) <<endl;
    return 0;
}

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int a = 0;int b = 1; int next;
        for(int i = 2; i <=n; ++i) {
            next = a+b;
            a = b;
            b = next;

        }
        return b;
        
        
    }
};
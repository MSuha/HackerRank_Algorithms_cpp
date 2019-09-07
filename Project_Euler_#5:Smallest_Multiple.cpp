#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
    if( b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a * b / gcd (a,b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int input_size;
    long long input;

    cin >> input_size;

    for(int i = 0; i < input_size; i++){
        cin >> input;
        long long result = 1;

        for(long long j = 2; j <= input; j++){
            result = lcm(result, j);
        }
        cout << result << endl;
    }
    return 0;
}

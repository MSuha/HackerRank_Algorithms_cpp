#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long max_prime(long long a){
    long long prime = -1;

    while(a % 2 == 0){
        prime = 2;
        a /= 2;
    }

    for(long long i = 3; i <= sqrt(a); i += 2){
        while(a % i == 0){
            prime = a;
            a /= i;
        }
    }

    if(a > 2)
        prime = a;

    return prime;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_size;
    long long prime,input;

    cin >> test_size;

    for(int i = 0; i < test_size; i++){
        cin >> input;
        prime = max_prime(input);
        cout << prime << endl;
    }

    return 0;
}

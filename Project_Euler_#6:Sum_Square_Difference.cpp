#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long square_sum(long long input){
    long long n = input*(input+1)*(2*input+1)/6;
    return n;
}

long long sum_square(long long input){
    long long n = (input*(input+1)/2)*(input*(input+1)/2);
    return n;
}

int main() {
    int input_size, input;

    cin >> input_size;

    for(int i = 0; i < input_size; i++){
        cin >> input;
        cout << sum_square(input) - square_sum(input) << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

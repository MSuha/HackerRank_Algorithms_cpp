#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long fib(long long a){
    long long n = 1, m = 2, cnt, tmp;

    for (cnt = 0; m < a;){
        if(m%2 ==0)
            cnt  += m;
        tmp = m;
        m = n + m;
        n = tmp;
    }
    return cnt;
}

int main() {
    int test_size;
    long long input;

    cin >> test_size;

    for(int i = 0; i < test_size; i++){
        cin >> input;
        cout << fib(input) << endl;
    }

    return 0;
}

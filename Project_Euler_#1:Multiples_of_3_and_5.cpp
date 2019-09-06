#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long sum(long long a){
    return ( a * (a+1) / 2);
}

int main() {
    long long test_case, input;

    cin >> test_case;

    for(int i = 0; i < test_case; i++){
        cin >> input;
        input -= 1;

        long long cnt = 0;
        cnt += 3 * sum(input/3);
        cnt += 5 * sum(input/5);
        cnt -= 15 * sum(input/15);

        cout << cnt << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

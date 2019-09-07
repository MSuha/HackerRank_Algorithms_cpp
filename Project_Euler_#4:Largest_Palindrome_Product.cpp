#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPalindrome(long long num){
    long long fake_num = num;
    long long reverse = 0;

    while(fake_num){
        reverse = reverse * 10 + ( fake_num % 10 );
        fake_num /= 10;
    }

    if(reverse == num)
        return true;
    else
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int input_size;
    long long givenMax, currentMax;
    cin >> input_size;

    for(int i = 0; i < input_size; i++){
        currentMax = 0;
        long long result = 0;

        cin >> givenMax;

        for(int j = 100; j <= 999; j++){
            for(int k = 100; k <= 999; k++){
                result = j * k;
                if(isPalindrome(result) && result < givenMax && result > currentMax)
                    currentMax = result;
            }
        }
        cout << currentMax << endl;
    }
    return 0;
}

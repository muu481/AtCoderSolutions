#include <string>
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
 
#include <regex>
#include <atomic>
#include <thread>
 
using namespace std;
#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))
 
long long ToDecimal(long long base, long long num) {
    long long ret = 0;
 
    for(long long digit = 0; num > 0; ++digit) {
        ret += (num % 10) * pow(base, digit);
        num /= 10;
    }
 
    return ret;
}
 
long long Solve(long long K, long long A, long long B) {
    return ToDecimal(K, A) * ToDecimal(K, B);
}
 
int main() {
    long long K, A, B;
    cin >> K;
    cin >> A >> B;
 
    cout << Solve(K, A, B) << endl;
    return 0;
}
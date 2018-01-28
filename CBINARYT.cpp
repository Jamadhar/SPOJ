#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <fstream>
#include <functional>

using namespace std;

int main()
{
    vector<long long> v;
    for (int i = 0; i <= 55; i++) {
        v.push_back(pow(2, i + 1) - 1);
    }

    int t;
    cin >> t;

    long long num;
    int test = 0;
    while (t-- > 0) {
        cin >> num;

        cout << "Case " << ++test << ": " << v[num] << endl;
    }

    return 0;
}
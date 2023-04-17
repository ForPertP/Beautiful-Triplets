#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulTriplets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

int beautifulTriplets(int d, vector<int> arr)
{
    auto check = [&arr](int n)
    {
        return std::binary_search(begin(arr), end(arr), n);
    };

    auto result = std::count_if( begin(arr), end(arr),
    [&](int n)
    {
        return check(d+n) && check(2*d + n);
    });
    
    return result;
}

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

#include <iostream>
using namespace std;

int kthbit(int n, int k)
{
    int mask = 1 << k;
    int ans = n | mask;

    return ans;
}

int main()
{
    cout << kthbit(10, 2);
    return 0;
}
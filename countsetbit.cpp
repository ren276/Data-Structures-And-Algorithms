#include <iostream>
using namespace std;

int countsetbit(int n)
{
    int cnt = 0;

    // while (n > 0)
    // {
    //     int bit = n % 2;
    //     if (bit == 1)
    //     {
    //         cnt++;
    //     }
    //     n = n / 2;
    // }
    // return cnt;

    //bitwise approach

    while (n>0){
        int bit  = n & 1;
        if (bit == 1)
        {
            cnt++;
        }
        n= n>>1;

    }
    return cnt;
    
}

int main()
{
    int n; cin >> n;
    cout << countsetbit(n);
    return 0;
}
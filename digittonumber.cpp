#include <bits/stdc++.h>
using namespace std;

int digittonumber(int noofdigits)

{ 
    int num = 0;
    for ( int i=0 ; i <noofdigits ; ++i)
    {
        
        int digit;
        cin >> digit;
        num = num*10 + digit;
    }
    return num;



}

int main()
{
    int noofdigits;
    cin >> noofdigits;

    int num = digittonumber(noofdigits);
    cout << num ;
    
    return 0;
}
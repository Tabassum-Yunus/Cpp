#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << "\n";
    int n;
    bool isprime;
    cout << "Enter the no upto which u want to check for prime no.: ";
    cin >> n;
    cout << "List of prime no. from 1 to " << n << " : ";
    for(int i=2; i<=n; i++)
    {
        isprime = true;
        for(int j=2; j<= sqrt(i); j++)
        {
            if(i%j == 0)
            {
                isprime = false;
            }
        }
        if(isprime)
            cout << i << " ";
    }
    cout << "\n";
    return 0;
}








//                                       SIEVE METHOD
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the no upto which u want to check for prime no.: ";
//     cin >> n;
//     bool arr[n+1] = {true};
//     arr[1]=false;
//     for(int i=2; i<=sqrt(n); i++)
//     {
//         if(arr[i])
//         {
//             for(int j=2; i*j<=n; j++)
//                 arr[i*j] = false;
//         }
//     }
//     for(int i=1; i<=n; i++)
//     {
//         if(arr[i])
//             cout << i << " ";
//     }
// }
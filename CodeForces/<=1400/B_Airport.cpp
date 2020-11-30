//"It's not a bug, It's a feature
// 1100
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i, n, j) for (int j = i; j < n; j++)
#define fd(i, n, j) for (int j = i; j >= 0; j--)

using namespace std;

int minEarning(int n, int m, vector<int> emptySeats)
{
    int minEarnt = 0, i = 0;
    sort(emptySeats.begin(), emptySeats.end());
    while (--n >= 0)
    {
        if (emptySeats[i] == 0)
        {
            i++;
        }
        minEarnt += emptySeats[i];
        emptySeats[i]--;
    }
    return minEarnt;
}

int maxEarning(int n, int m, vector<int> emptySeats)
{
    int maxEarnt = 0, i = m - 1;
    sort(emptySeats.begin(), emptySeats.end());
    while (--n >= 0)
    {
        // cout << emptySeats[i] << "  " << emptySeats[1] << endl;
        // cout<<i;
        if (emptySeats[i] < emptySeats[i - 1])
        {
            sort(emptySeats.begin(), emptySeats.end());
        }
        maxEarnt += emptySeats[i];
        // cout<<maxEarnt;
        emptySeats[i]--;
    }
    return maxEarnt;
}

int main()
{
    int n, m;
    // TAKING INPUTS
    // n = number of people in queue
    // m = number of planes at airport
    cin >> n >> m;
    // int emptySeats[m];
    vector<int> emptySeats(m);
    int sum = 0;
    int temp;
    // total seats available
    fu(0, m, i)
    {
        cin >> emptySeats[i];
        sum += emptySeats[i];
    }

    vector<int> copy1 = emptySeats;
    // This keeps a track of all the empty seats in all planes

    //write code here
    int minEarnt = 0;
    int maxEarnt;
    if (m == 1){
        minEarnt = n*emptySeats[0] - ((n-1) * n / 2);

    }
    else
        minEarnt = minEarning(n, m, copy1);

    
    if (n == sum || m == 1)
        maxEarnt = minEarnt;
    
    else
        maxEarnt = maxEarning(n, m, emptySeats);
    cout << maxEarnt << " " << minEarnt;
    return 0;
}
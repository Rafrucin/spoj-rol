//SPOJ submission 23152022 (C++ 4.3.2) plaintext list. Status: AC, problem PTROL, contest SPOJPL. By ravruc (ravruc), 2019-01-30 20:52:48.
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
 
using namespace std;
 
 
 
 
int main()
{
 
    int a, b, c;
    cin >> a;
 
    for (int i = 1 ; i<=a; i++)
    {
        cin >> b;
        
        vector <int> taba;
        
        for (int j = 1 ; j <=b ; j++)
        {
            cin >> c;
            taba.push_back(c);
        }
for (int r = 1; r<=b-1 ; r++)
{
    cout << taba[r] << " " ;
}
        cout << taba[0] << endl;
    }
 
    return 0;
}
 
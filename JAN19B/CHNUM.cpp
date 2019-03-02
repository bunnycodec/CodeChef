// Sunny Kumar -- 02/03/2019

#include<iostream>
using namespace std;

int main()
{
	int t, n, temp, c1, c2;
    cin >> t;

    while(t--)
    {
        c1=0, c2=0;
        cin >> n;
        for(auto i=0; i<n; i++)
        {
            cin >> temp;
            (temp>0)?c1++:c2++;
        }
        (c1==n || c2==n) ? cout << n << " " << n << endl : (c1>=c2) ? cout << c1 << " " << c2 << endl : cout << c2 << " " << c1 << endl;
    }
    
	return 0;
}

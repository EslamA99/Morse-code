#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,z=1,k=1;
    cin>>x;
    while (z<=100)
{
    double c=1,counter=1;
    while (counter<=z)
        {
            c=c*counter;
            counter++;
        }
    k=k+(pow(x,z)/c);
    z++;
    }
    cout<< "exp = " <<fixed<<k<<endl;

    return 0;
}


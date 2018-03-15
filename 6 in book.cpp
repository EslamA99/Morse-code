#include <iostream>

using namespace std;
const double pi=3.14;
const double y = 62.4;
int main()
{
    double w,r,v,fb;
    cout << "enter weight and radius please: ";
    cin>>w>>r;

    while (w<=0 || r<=0){
        cout<< "please enter different value for weight and radius :";
        cin>>w>>r;
    }
    v=(4/3)*pi*r*r*r;

    fb=v*y;

    if (fb>=w){
        cout<<"it will float"<<endl;
    }
    else {
        cout<<"it will sink"<<endl;
    }

    return 0;
}

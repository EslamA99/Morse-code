#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter Year : ";
    cin>>x;
    while (x<1000 && x>3000){
        cout<<"Enter Year : ";
        cin>>x;
    }
    if(x==3000){
            cout<<"MMM";
        x-=3000;
    }
    else if  (x>=2000){
            cout<<"MM";
        x-=2000;
    }
    else if  (x>=1000){
            cout<<"M";
        x-=1000;
    }
    if (x>=900){
            cout<<"CM";
        x-=900;
    }
    else if  (x>=800){
            cout<<"DCCC";
        x-=800;
    }
    else if  (x>=700){
            cout<<"DCC";
        x-=700;
    }
    else if  (x>=600){
            cout<<"DC";
        x-=600;
    }
    else if  (x>=500){
            cout<<"D";
        x-=500;
    }
    else if  (x>=400){
            cout<<"CD";
        x-=400;
    }
    else if  (x>=300){
            cout<<"CCC";
        x-=300;
    }
    else if  (x>=200){
            cout<<"CC";
        x-=200;
    }
    else if  (x>=100){
            cout<<"C";
        x-=100;
    }
    if(x>=90){
        cout<<"XC";
        x-=90;
    }
    else if(x>=80){
        cout<<"LXXX";
        x-=80;
    }
    else if(x>=70){
        cout<<"LXX";
        x-=70;
    }
    else if(x>=60){
        cout<<"LX";
        x-=60;
    }
    else if(x>=50){
        cout<<"L";
        x-=50;
    }
    else if(x>=40){
        cout<<"XL";
        x-=40;
    }
    else if(x>=30){
        cout<<"XXX";
        x-=30;
    }
    else if(x>=20){
        cout<<"XX";
        x-=20;
    }
    else if(x>=10){
        cout<<"X";
        x-=10;
    }
    if(x>=9){
        cout<<"IX";
        x-=9;
    }
    else if(x>=8){
        cout<<"VIII";
        x-=8;
    }
    else if(x>=7){
        cout<<"VII";
        x-=7;
    }

    else if(x>=6){
        cout<<"VI";
        x-=6;
    }
    else if(x>=5){
        cout<<"V";
        x-=5;
    }
    else if(x>=4){
        cout<<"IV";
        x-=4;
    }
    else if(x>=3){
        cout<<"III";
        x-=3;
    }
    else if(x>=2){
        cout<<"II";
        x-=2;
    }
    else if(x>=1){
        cout<<"I";
        x-=1;
    }


    return 0;
}

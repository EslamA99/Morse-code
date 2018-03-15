#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x,mors,m;
    int y,k,q;

    string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "\t" };
    //two arrays for capital and small
    char eng[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ' };
    char eng2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    while(true){
    cout<<"Ahlan ya user ya habibi ."<<endl<<"What do you like to do today?"<<endl<<"1- Cipher a message"<<endl<<"2- Decipher a message"<<endl<<"3- End"<<endl;
    cin>>k;

    while (k!=1 && k!=2 &&k!=3)
    {
        cout<<"No more options"<<endl;
        cin>>k;
    }
    if (k==1)
    //cipher
    {

        cout<<"please enter your sentence  ";
        cin.ignore();
        getline(cin,x);
        y=x.size();
        //input sentence

        for (int i = 0; i<y; ++i)
        {
            for(int k=0; k<=26; ++k)
            //2 for to loop for the sentence and the array of eng character
            {
                if ( x[i] == eng[k] || x[i] == eng2[k] )
                {

                    mors+= " "+morse[k];
                    //باخد نفس مكان الحرف من الاراى بتاع التشفير
                }

            }
        }
        cout<<mors;
    }



     else if (k==2)
    //decipher
    {
        cout<<"please enter your sentence:";
        cin.ignore();
        getline(cin,x);
        y=x.size();
        //input sentence

        for (int i =0; i<y; ++i)
        // for loop for the sentence
        {
            if (x[i]==' ')
            {
                cout<<" ";
                // if there is a space print space
            }
            else if (x[i]!= ' ')
            //if x[i] is a character
            {
                m+=x[i];
                //plus the character to string m
                if(x[i+1]==' ' || (i+1)==(y))
                    //if next x[i] is space or the next index is the end of the sentence
                {

                    for( int n=0; n<26; ++n)
                        //loop th array of morse
                    {
                        if(morse[n]==m)
                        //if element of morse array is the same of string m
                        {
                            cout<< eng[n];
                             //اطبع المساوي له من الاراري بتاع الحروف الابجدية
                            m="";
                            //clean string m for next character
                        }
                    }
                }


            }

        }
        cout <<m;

    }
    if(k==3){break;}

    cout<<endl<<"Again (1) or Leave (2)";
    cin>>q;
    while(q!=1&&q!=2){
        cout<<"No More Option : ";
        cin>>q;
    }
    if(q==2){
        break;
    }

    }

    return 0;

}

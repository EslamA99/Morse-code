#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int version;
        cout<<"choose 0:9 : ";
        cin>> version;
        while ((version<0)||(version>9))
        {
            cout<<"no more option"<<endl;
            cin>> version;
        }
        if(version==0)
        {
            cout << "Encrypt (1) or decode (2) ? " ;
            int q;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            cout<<"please enter your massage: ";
            string x;
            cin.ignore();
            getline(cin, x);
            int z,c,y;
            cout<<"please enter parameters: ";
            int a,b,m;
            cout<<"your first and second input should be like that(a*c)%26=1: ";
            cin>>a>>m>>b;
            while ((a*m)%26!=1)
            {
                cout<<"please enter parameters again: ";
                cin>>a>>b>>m;
            }
            if (q==1)
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {
                        z = x[i]-97;
                        c=(((a*z)+b)%26);
                        cout<<char(c+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=((a*z)+b)%26;
                        cout<<char(c+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            if (q==2)
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {

                        z = x[i]-97;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            cout<<endl;
        }
        if (version==1)
        {
            int q;
            cout<<" Cipher(1) & Decipher(2)? ";
            cin>>q;

            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            //capital only
            cout<<"enter massage: ";
            cin.ignore();
            getline(cin,word);
            int n ;
            cout << "enter your shift num";
            cin >>n;
            if (q==1)
            {
                for (int i = 0 ; i<word.length() ; i++)
                {

                    int z,c;
                    word[i]=toupper(word[i]);
                    z=word[i];
                    if(65<= z && z <=(90-n))
                    {
                        c= z + n ;
                        cout<< char (c);

                    }
                    if((90-n)< z && z<= 90)
                    {
                        c= (65 + (n-(91-z)));
                        cout<< char (c);

                    }


                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }

            }
            if(q==2)
            {

                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z,c;
                    word[i]=toupper(word[i]);
                    z=word[i];

                    if (90>= z && z >=(65+n))
                    {
                        c= z - n;
                        cout<<char(c);
                    }
                    else if (65<= z && z<= (65+n))
                    {
                        c = 91 - (n-(z-65)) ;
                        cout<<char(c);
                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }
            }
            cout<<endl;

        }
        if (version==2)
        {
            int q;
            cout<<" Cipher(1)  &  Decipher(2)? ";
            cin>>q;

            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            cout<<"enter massage: ";

            if (q==1)
            {
                cin.ignore();
                getline(cin,word);
                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z, c ;
                    z = word[i];
                    if (96<z && z<123)
                    {

                        c =  (123) - (z  - 97)-1  ;
                        cout <<  char (c);
                    }
                    else if (64<z && z<91)
                    {
                        c = (91) - (z-65) - 1;
                        cout <<  char (c);
                    }
                    else if(z>=32 && z<=64)
                    {
                        cout<< char(z);
                    }
                }
            }
            if(q==2)
            {

                cin.ignore();
                getline(cin,word);
                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z, c ;
                    z = word[i];
                    if (96<z && z<123)
                    {

                        c =  (123) - (z  - 97)-1  ;
                        cout <<  char (c);
                    }
                    else if (64<z && z<91)
                    {
                        c = (91) - (z-65) - 1;
                        cout <<  char (c);
                    }
                    else if(z>=32 && z<=64)
                    {
                        cout<< char(z);
                    }
                }
            }
            cout<<endl;
        }
        if(version==3)
        {
            int q;
            cout<<" Cipher(1) & Decipher(2)? ";
            cin>>q;

            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            cout<<"enter massage: ";
            cin.ignore();
            getline(cin,word);
            if (q==1)
            {
                for (int i = 0 ; i<word.length() ; i++)
                {

                    int z,c;
                    z=word[i];
                    if((z>=97)  && (z<=109))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>109)  && (z<=122))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if((z>=65)  && (z<=77))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>77)  && (z<=90))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }

            }
            if(q==2)
            {

                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z,c;
                    z=word[i];
                    if((z>=97)  && (z<=109))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>109)  && (z<=122))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if((z>=65)  && (z<=77))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>77)  && (z<=90))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }
            }
            cout<<endl;

        }
        if (version==4)
        {
            cout << "Encrypt (1) or decode (2) ? " ;
            int q;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            cout<<"please enter your massage: ";
            string x;
            cin.ignore();
            getline(cin, x);
            int z,c,y;
            if (q==1)
            {
                for (int i=0; i<x.length(); i++)
                {

                    z=x[i];
                    if (z>=65)
                    {
                        int counter=1;
                        z=z-1;
                        string w;
                        while(counter<=5)
                        {

                            if (z%2==0)
                            {
                                w="a"+w;

                            }
                            if (z%2==1)
                            {
                                w="b"+w;

                            }

                            z=z/2;
                            counter++;
                        }
                        cout<<w;
                        cout<<" ";
                    }

                }
            }
            if (q==2)
            {
                int o=0,counter=4;
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];



                    if (z!=32)
                    {
                        if  (counter>=0)
                        {
                            if ((z==65)||(z==97))
                            {
                                o=o+0;

                            }
                            if ((z==66)||(z==98))
                            {
                                o=o+pow(2,counter);

                            }
                            counter--;


                        }
                        if (counter==0)
                        {
                            cout<<char(o+65);
                            o=0;
                            counter=5;
                        }


                    }

                }

            }
            cout<<endl;
        }
        if (version==5)
        {
            int choice;
            bool cipher=false, decipher=false;
            string key,message,message2;
            char full[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            cout << "Encrypt (1) or decode (2) ? " ;
            cin >> choice ;
            while(choice !=1 && choice !=2 && choice!=3)
            {
                cout << "Enter a correct number: ";
                cin >> choice;
            }
            if(choice==1)
                cipher=true;
            else if (choice==2)
                decipher=true;
            cout << "Enter the key: ";
            cin >> key;
            vector<char>view;
            for(int i=0 ; i<5 ; i++)
                view.push_back(key[i]);
            for(int i =0; i<26 ; i++)
            {
                if(full[i]!=key[0] && full[i]!=key[1] && full[i]!=key[2] && full[i]!=key[3] && full[i]!=key[4])
                    view.push_back(full[i]);
            }
            if (cipher==true)
            {
                cout << "Enter the message to cipher: ";
                cin.get();
                getline(cin,message);
                char cipher[message.length()];
                for(int i=0 ; i<message.length(); i++)
                {
                    for (int j=0 ; j<26 ; j++)
                    {
                        if(message[i]==full[j])
                            cipher[i]=view[j];
                        else if (message[i]==' ')
                            cipher[i]=' ';
                    }
                }
                for (int i=0 ; i<message.length() ; i++)
                    cout << cipher[i];
                cout << endl;
            }
            else if(decipher==true)
            {
                cout << "Enter the message to decipher: ";
                cin.get();
                getline(cin,message2);
                char text[message2.length()];
                for(int i=0 ; i<message2.length() ; i++)
                {
                    for (int j=0 ; j<26; j++)
                    {
                        if (message2[i]==view[j])
                            text[i]=full[j];
                        else if (message2[i]==' ')
                            text[i]=' ';
                    }
                }
                for (int i=0 ; i<message2.length() ; i++)
                    cout << text[i];
            }
            cout << endl;



        }



        if (version==6)
        {
            bool cipher=false, decipher=false;
            string msg,x;
            int choice,key;
            vector<int> v;
            cout << "Encrypt (1) or decode (2) ? " ;
            cin >> choice ;
            while(choice !=1 && choice !=2 && choice!=3)
            {
                cout << "Enter a correct number: ";
                cin >> choice;
            }
            if(choice==1)
                cipher=true;
            else if (choice==2)
                decipher=true;
            cout << "Enter the key you want to cipher :";
            for (int i=0 ; i<5 ; ++i)
            {
                cin >> key;
                v.push_back(key);
            }

            if(cipher == true)
            {
                cout << "Enter the message you want to cipher : ";          //cipher
                cin.get();
                getline(cin, msg );
                int x[msg.length()];
                for ( int i=0 ; i < msg.length(); ++i )
                {
                    if      (msg[i]=='a')
                        x[i]=v[0]*10+v[0];
                    else if (msg[i]=='b')
                        x[i]=v[0]*10+v[1];
                    else if (msg[i]=='c')
                        x[i]=v[0]*10+v[2];
                    else if (msg[i]=='d')
                        x[i]=v[0]*10+v[3];
                    else if (msg[i]=='e')
                        x[i]=v[0]*10+v[4];
                    else if (msg[i]=='f')
                        x[i]=v[1]*10+v[0];
                    else if (msg[i]=='g')
                        x[i]=v[1]*10+v[1];
                    else if (msg[i]=='h')
                        x[i]=v[1]*10+v[2];
                    else if (msg[i]=='i')
                        x[i]=v[1]*10+v[3];
                    else if (msg[i]=='j')
                        x[i]=v[1]*10+v[4];
                    else if (msg[i]=='k')
                        x[i]=v[2]*10+v[0];
                    else if (msg[i]=='l')
                        x[i]=v[2]*10+v[1];
                    else if (msg[i]=='m')
                        x[i]=v[2]*10+v[2];
                    else if (msg[i]=='n')
                        x[i]=v[2]*10+v[3];
                    else if (msg[i]=='o')
                        x[i]=v[2]*10+v[4];
                    else if (msg[i]=='p')
                        x[i]=v[3]*10+v[0];
                    else if (msg[i]=='q')
                        x[i]=v[3]*10+v[1];
                    else if (msg[i]=='r')
                        x[i]=v[3]*10+v[2];
                    else if (msg[i]=='s')
                        x[i]=v[3]*10+v[3];
                    else if (msg[i]=='t')
                        x[i]=v[3]*10+v[4];
                    else if (msg[i]=='u')
                        x[i]=v[4]*10+v[0];
                    else if (msg[i]=='v')
                        x[i]=v[4]*10+v[1];
                    else if (msg[i]=='w')
                        x[i]=v[4]*10+v[2];
                    else if (msg[i]=='x')
                        x[i]=v[4]*10+v[3];
                    else if (msg[i]=='y')
                        x[i]=v[4]*10+v[4];
                    else if (msg[i]=='z')
                        x[i]=99;
                    else if (msg[i]==' ')
                        x[i]=88;
                }
                cout << endl << "cipher : ";
                for ( int i=0 ; i < msg.length(); ++i )
                    cout << x[i];
                cout << endl << endl;
            }

            else if(decipher==true)
            {
                cout << "Enter the message you want to decipher : ";            //decipher
                cin.get();
                getline(cin,x);
                cout << endl << "decipher : ";
                for ( int i=0 ; i < x.length(); i+=2 )
                {
                    if      (x[i]-'0'==v[0] && x[i+1]-'0'==v[0])
                        cout <<"a";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[1])
                        cout <<"b";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[2])
                        cout <<"c";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[3])
                        cout <<"d";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[4])
                        cout <<"e";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[0])
                        cout <<"f";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[1])
                        cout <<"g";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[2])
                        cout <<"h";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[3])
                        cout <<"i";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[4])
                        cout <<"j";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[0])
                        cout <<"k";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[1])
                        cout <<"l";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[2])
                        cout <<"m";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[3])
                        cout <<"n";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[4])
                        cout <<"o";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[0])
                        cout <<"p";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[1])
                        cout <<"q";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[2])
                        cout <<"r";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[3])
                        cout <<"s";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[4])
                        cout <<"t";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[0])
                        cout <<"u";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[1])
                        cout <<"v";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[2])
                        cout <<"w";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[3])
                        cout <<"x";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[4])
                        cout <<"y";
                    else if (x[i]=='9' && x[i+1]=='9')
                        cout <<"z";
                    else if (x[i]=='8' && x[i+1]=='8')
                        cout <<" ";
                }
                cout<<endl << endl;
            }

        }
        if (version==7)
        {
            string x,mors,m;
            int y,k,q;
            string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "\t" };
            //two arrays for capital and small
            char eng[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ' };
            char eng2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            cout << "Encrypt (1) or decode (2) ? " ;
            cin>>k;

            while (k!=1 && k!=2 )
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
                cout<<mors<<endl;
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
                cout <<m<<endl;

            }

        }
        if (version==8)
        {
            string toBinary(int n);
            int xor_f (int num1, int num2);
            int choice ;
            cout << "Encrypt (1) or decode (2) ? " ;
            cin>> choice ;
            while ((choice!=1)&&(choice!=2))
            {
                cout<<"no more option"<<endl;
                cin>> choice ;
            }
            if (choice==1)
            {
                int k, c, cipher_d ;
                char cipher_ascii;
                char key;
                cout<<"Enter The secret key,please: ";
                cin>>  key;
                string m ;
                cout<<"Enter The massage , please : " ;
                cin>> m ;
                int l=m.length() ;
                cout <<"hexa: ";
                for (int i=0; i<l; i++)
                {
                    k=key ;
                    c=m[i] ;
                    cipher_d = k^c ;
                    cout << hex<< cipher_d ;
                }
                cout <<endl << "Cipher text: ";
                for (int i=0; i<l; i++)
                {
                    k=key ;
                    c=m[i] ;
                    cipher_d = k^c ;
                    cipher_ascii = cipher_d ;
                    cout<< cipher_ascii ;
                }
                cout << endl;
            }
            else if (choice==2)
            {
                char key,word ;
                int k,w;
                cout <<"Enter The key character: "<<endl;
                cin>> key ;
                k=key;
                cout<< "Enter The Cipher message as: " <<endl;
                cout<< "1- hexa number      2- Cipher text " <<endl ;
                int choice2 ;
                cin>> choice2 ;
                if (choice2 == 1)
                {
                    string hexa_num;
                    cout<<"Enter The hexa num: "<<endl;
                    cin >>hexa_num ;
                    int l=hexa_num.length() ;
                    for (int c=0; c<l; c=c+2)
                    {
                        string hexa_digit ;
                        hexa_digit=hexa_digit+hexa_num[c];
                        hexa_digit=hexa_digit+hexa_num[c+1];
                        int x;
                        stringstream ss;
                        ss << hex << hexa_digit;
                        ss >> x;
                        hexa_digit ="";
                        w=k^x;
                        word = w ;
                        cout <<word ;
                    }

                    cout<<endl;
                }

                else if (choice2==2)
                {
                    string cipher ;


                    cout << "Enter The cipher massage: ";
                    cin >> cipher ;
                    int l=cipher.length() ;
                    for (int c=0; c<l; c=c+1)
                    {
                        char cha_cipher=cipher[c];
                        int c_c = cha_cipher;
                        w=k^c_c;
                        word = w ;
                        cout << word;
                    }
                    cout<<endl;


                }

            }
        }
        if (version==9)
        {
            int start;
            cout << "Encrypt (1) or decode (2) ? " ;
            cin>>start;
            while((start!=1)&&(start!=2))
            {
                cout<<"no more option"<<endl;
                cin>>start;
            }
            if (start==1)
            {
                string message, railmessage;
                int key, i, j, row=0, col=0, k=-1;
                cout<<"Please enter the message to cipher:"<<endl;
                cin.ignore();
                getline(cin,message);
                cout<<"Please enter the key:";
                cin>>key;
                for(int i=0 ; i<=message.length(); i++)
                {
                    if(message[i]!= ' ')
                    {
                        railmessage+=message[i];
                    }
                }
                int length;
                length=railmessage.size();
                char railmatrix[key][length];
                for(i=0; i<key; i++ )
                {
                    for(j=0; j<length; j++)
                        railmatrix[i][j]='-';
                }
                for(i=0; i<length; i++)
                {
                    railmatrix[row][col]=message[i];
                    if(row==0||row==key-1)
                    {
                        k=k*(-1);
                    }
                    row+=k;
                    col++;
                }
                cout<<"\nCipher message:";
                for(i=0; i<key; i++)
                {
                    for(j=0; j<length; j++)
                    {
                        if(railmatrix[i][j]!='-')
                            cout<<railmatrix[i][j];
                    }
                }

                cout<<endl;

            }
            else if (start==2)
            {
                string message;
                int key,length,i,j,row=0,col=0,k=-1,w=0;
                cout<<"Please enter the message to Decipher:";
                cin.ignore();
                getline(cin,message);
                cout<<"Please enter the key:";
                cin>>key;
                length=message.size();
                char railmatrix[key][length];
                for (i=0; i<key; i++)
                {
                    for(j=0; j<length; j++)
                        railmatrix[i][j]='-';

                }
                for (i=0; i<length; i++)
                {
                    railmatrix[row][col]='@';
                    if(row==0||row==key-1)
                    {
                        k=k*(-1);
                    }
                    row+=k;
                    col++;
                }
                for(i=0; i<key; i++)
                {
                    for(j=0; j<length; j++)
                    {
                        if(railmatrix[i][j]=='@')
                        {
                            railmatrix[i][j]=message[w];
                            w++;
                        }
                    }
                }
                row=col=0;
                k=-1;
                cout<<"Dechiper message:";
                for(i=0; i<length; i++)
                {
                    cout<<railmatrix[row][col];
                    if(row==0||row==key-1)
                        k=k*(-1);
                    row+=k;
                    col++;
                }

                cout<<endl;

            }

        }
        cout<<endl;
        int p;
        cout<<"again(1) & end(2)=> ";
        cin>>p;
        while ((p!=1)&&(p!=2))
        {
            cout<<"no more option"<<endl;
            cin>>p;
        }
        if (p==2)
        {
            exit(0);
        }

    }

}

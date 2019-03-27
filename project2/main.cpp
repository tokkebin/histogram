#include <iostream>
#include "include/histogram.h"
#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string text;

    cout<<"Write text:"<<endl;
    getline(cin,text); //a co w przypadku roznych dlugosci wpisywanego tekstu ?? moze lepiej vector ??

    cout<<text<<endl;
    /*if(!cin)//obsluga bledoow
    {
        while(!cin)
            {
                cout<<"Incorrectly entered data. Please, write again:"<<endl;
                cin>>text;
            }
    }*/

    histogram hist(text);    //create histogram




    return 0;
}

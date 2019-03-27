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
    string all;
    string text;

    histogram histo;    //create histogram

    cout<<"Write text:"<<endl;
    //getline(cin,text); //a co w przypadku roznych dlugosci wpisywanego tekstu ?? moze lepiej vector ??

    text.clear();
    cin>>text;
    all.append(text);
    cout<<"Whole text:"<<all<<endl;

    histo.counterevrydigit(histo.occurranceofdigits,all);

    cout<<histo<<endl;

    while(1)
    {
        cout<<"*****************************************************************************"<<endl;
        cout<<"1-create new histogram"<<endl<<"2-add text to existing histogram"<<endl<<"3-compare two histograms"<<endl;
        cout<<"4-add two histograms"<<endl;
        int i;
        cin>>i;

        switch(i)
        {
        case 1:
            histogram hist;
            string text1;
            cout<<"Write text:"<<endl;
            cin>>text1;
            hist.counterevrydigit(hist.occurranceofdigits,text1);
            cout<<"New histogram:"<<endl<<hist<<endl;
            break;
        case 2:
            cout<<"Write text:"<<endl;
            //text.clear(); //czyszczenie stringa
            string tekscik
            cin>>tekscik;
            //all.append(text); //dodajemy do calego tekstu
            //cout<<"Whole text:"<<all<<endl;
            histo.counterevrydigit(histo.occurranceofdigits,tekscik); //aktualizacja
            cout<<"Edit histogram:"<<endl<<histo;
            break;
        case 3:
            histogram hist1;
            string textnew;
            cout<<"Write text:"<<endl;
            cin>>textnew;
            hist1.counterevrydigit(hist1.occurranceofdigits,textnew);
            cout<<"New histogram:"<<endl<<hist1<<endl;

            histogram hist2;
            textnew.clear();
            cout<<"Write text:"<<endl;
            cin>>text1;
            hist.counterevrydigit(hist.occurranceofdigits,text1);
            cout<<"New histogram:"<<endl<<hist<<endl;
            break;

        }


    }

    return 0;
}

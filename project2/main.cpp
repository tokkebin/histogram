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
    text.clear();
    cin>>text;
    all.append(text);
    cout<<"Whole text:"<<all<<endl;
    histo.counterevrydigit(histo.occurranceofdigits,all);
    histo.counterfrequency(histo.frequency,histo.occurranceofdigits,all);
    cout<<histo<<endl;

    //aktualizacja histogramu
    cout<<"Write text for editing histogram:"<<endl;
    text.clear();
    cin>>text;
    all.append(text);
    cout<<"Whole text:"<<all<<endl;
    histo.counterevrydigit(histo.occurranceofdigits,all);
    histo.counterfrequency(histo.frequency,histo.occurranceofdigits,all);
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
            {
                histogram hist;
                string text1;
                cout<<"Write text:"<<endl;
                cin>>text1;
                hist.counterevrydigit(hist.occurranceofdigits,text1);
                hist.counterfrequency(hist.frequency,hist.occurranceofdigits,text1);
                cout<<"New histogram:"<<endl<<hist<<endl;
            }
            break;
        case 2:
            {
                cout<<"Write text:"<<endl;
                string tekscik;
                cin>>tekscik;
                histo.counterevrydigit(histo.occurranceofdigits,tekscik); //aktualizacja
                histo.counterfrequency(histo.frequency,histo.occurranceofdigits,tekscik);
                cout<<"Edit histogram:"<<endl<<histo;
            }
            break;
        case 3:
            {
                histogram hist1; //pierwszy histogram
                string textnew;
                cout<<"Write first text:"<<endl;
                cin>>textnew;
                hist1.counterevrydigit(hist1.occurranceofdigits,textnew);
                hist1.counterfrequency(hist1.frequency,hist1.occurranceofdigits,textnew);
                cout<<"New histogram:"<<endl<<hist1<<endl;

                histogram hist2; //drugi histogram
                textnew.clear();
                cout<<"Write second text:"<<endl;
                cin>>textnew;
                hist2.counterevrydigit(hist2.occurranceofdigits,textnew);
                hist2.counterfrequency(hist2.frequency,hist2.occurranceofdigits,textnew);
                cout<<"New histogram:"<<endl<<hist2<<endl;


                cout<<"Result ==:"<<(hist1==hist2)<<endl; //identycznosc
                cout<<"Result !=:"<<(hist1!=hist2)<<endl; //roznosc
            }
            break;
        case 4:
            {
                histogram h1; //pierwszy histogram
                string t1;
                cout<<"Write first text:"<<endl;
                cin>>t1;
                h1.counterevrydigit(h1.occurranceofdigits,t1);
                h1.counterfrequency(h1.frequency,h1.occurranceofdigits,t1);
                cout<<"New histogram:"<<endl<<h1<<endl;

                histogram h2; //drugi histogram
                t1.clear();
                cout<<"Write second text:"<<endl;
                cin>>t1;
                h2.counterevrydigit(h2.occurranceofdigits,t1);
                h2.counterfrequency(h2.frequency,h2.occurranceofdigits,t1);
                cout<<"New histogram:"<<endl<<h2<<endl;

                histogram h3;
                h3 = h1 + h2;
                cout<<"Result for operator +:"<<endl<<h3<<endl;
                h2+=h1;
                cout<<"Result for operator +=:"<<endl<<h2<<endl;
            }
            break;

        }


    }

    return 0;
}

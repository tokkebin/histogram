#include "histogram.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

histogram::histogram()
{
    //int occurranceofdigits[10];

    for(int i=0;i<10;i++)
    {
            this->occurranceofdigits[i] = 0; //zerowanie tablicy
    }

    cout<<"Default constructor"<<endl;
    //konstruktor domyslny
}

/*histogram::histogram(string text)
{
    //konstruktor

    int *p = new int[10];

    p = counterevrydigit(this->occurranceofdigits[],text);

    for(int i=0;i<10;i++)
    {

        this->occurranceofdigits[i]=p[i];
        cout<<this->occurranceofdigits[i]<<endl;
    }

    cout<<"constructor with parametr"<<endl;



}*/

histogram::histogram(histogram& hist)
{
    //konstruktor kopiujacy
    for(int i=0;i<10;i++)
    {
        this->occurranceofdigits[i] = hist.occurranceofdigits[i];
    }
}

histogram::~histogram()
{

    cout<<"Default destructor"<<endl;
    //destruktor
}


void histogram::counterevrydigit(int occurranceofdigits[], string text)
{

    //metoda liczy wystapienia kazdej z cyfr
    for( int i = 0; i < text.length(); i++ )
    {

        char a = text[i];
        switch(a)
        {
        case '0':
            occurranceofdigits[0]++;
            break;
        case '1':
            occurranceofdigits[1]++;
            break;
        case '2':
            occurranceofdigits[2]++;
            break;
        case '3':
            occurranceofdigits[3]++;
            break;
        case '4':
            occurranceofdigits[4]++;
            break;
        case '5':
            occurranceofdigits[5]++;
            break;
        case '6':
            occurranceofdigits[6]++;
            break;
        case '7':
            occurranceofdigits[7]++;
            break;
        case '8':
            occurranceofdigits[8]++;
            break;
        case '9':
            occurranceofdigits[9]++;
            break;
        }
    }

}

histogram histogram::operator+(const histogram &hist1)
{
    histogram hist;
    //hist.numberofdigits = numberofdigits + hist1.numberofdigits;
    for(int i=0;i<10;i++)
    {
        hist.occurranceofdigits[i] = this->occurranceofdigits[i] + hist1.occurranceofdigits[i];
    }

    return hist;
}

bool operator==(histogram &hist, histogram &hist1)
{
    for(int i=0;i<10;i++)
    {
        if(hist.occurranceofdigits[i]!=hist1.occurranceofdigits[i]) //szukamy chociaz jednej roznicy
            return false;
    }
    return true;
}

bool operator!=(histogram &hist1, histogram &hist2)
{
    for(int i=0;i<10;i++)
    {
        if(hist1.occurranceofdigits[i]!=hist2.occurranceofdigits[i]) //szukamy chociaz jednej roznicy
            return true;

    }
    return false;
}

ostream& operator<<(ostream& os, const histogram &hist)
{
    os<<"Occurrance of number 0: "<<hist.occurranceofdigits[0]<<endl;
    os<<"Occurrance of number 1: "<<hist.occurranceofdigits[1]<<endl;
    os<<"Occurrance of number 2: "<<hist.occurranceofdigits[2]<<endl;
    os<<"Occurrance of number 3: "<<hist.occurranceofdigits[3]<<endl;
    os<<"Occurrance of number 4: "<<hist.occurranceofdigits[4]<<endl;
    os<<"Occurrance of number 5: "<<hist.occurranceofdigits[5]<<endl;
    os<<"Occurrance of number 6: "<<hist.occurranceofdigits[6]<<endl;
    os<<"Occurrance of number 7: "<<hist.occurranceofdigits[7]<<endl;
    os<<"Occurrance of number 8: "<<hist.occurranceofdigits[8]<<endl;
    os<<"Occurrance of number 9: "<<hist.occurranceofdigits[9]<<endl;
    return os;
}

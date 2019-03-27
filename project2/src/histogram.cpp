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

histogram::histogram(string text)
{
    //konstruktor

    this->occurranceofdigits = counterevrydigit(text);
    cout<<"constructor with parametr"<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<this->occurranceofdigits[i]<<endl;
    }

}

histogram::histogram(histogram& hist)
{
    //konstruktor kopiujacy

    this->occurranceofdigits = hist.occurranceofdigits;

}

histogram::~histogram()
{

    cout<<"Default destructor"<<endl;
    //destruktor
}

/*int histogram::counteralldigits(string text)
{
    //metoda liczaca wystapienia wszystkich cyfr

    for( int i = 0; i < text.length(); ++i )
    {
        if (isdigit(text[i]))
        {
            numberofdigits++;
        }

    }

    return numberofdigits;
}*/

int* histogram::counterevrydigit(string text)
{
    int occurrance[10];
    for(int k=0;k<10;k++)
    {
        occurrance[k]=0;
    }
    //metoda liczy wystapienia kazdej z cyfr
    for( int i = 0; i < text.length(); i++ )
    {
        //cout<<text[i]<<endl;
        //if(isdigit(text[i]))

        char a = text[i];
        switch(a)
        {
        case '0':
            occurrance[0]++;
            break;
        case '1':
            occurrance[1]++;
            break;
        case '2':
            occurrance[2]++;
            break;
        case '3':
            occurrance[3]++;
            break;
        case '4':
            occurrance[4]++;
            break;
        case '5':
            occurrance[5]++;
            break;
        case '6':
            occurrance[6]++;
            break;
        case '7':
            occurrance[7]++;
            break;
        case '8':
            occurrance[8]++;
            break;
        case '9':
            occurrance[9]++;
            break;
        }


    }

    /*for(int j=0;j<10;j++)
    {
        cout<<occurrance[j]<<endl; //petla do testow
    }*/

    return occurrance;

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
    if(hist1.occurranceofdigits==hist.occurranceofdigits)
    {
        return 1;
    }
    else
        return 0;
}

ostream& operator<<(ostream &os, const histogram &hist)
{
    os<<"Occurrance of number 0:"<<hist.occurranceofdigits[0]<<"Occurrance of number 1:"<<hist.occurranceofdigits[1]<<"Occurrance of number 2:"<<hist.occurranceofdigits[2]<<"Occurrance of number 3:"<<hist.occurranceofdigits[3]<<"Occurrance of number 4:"<<hist.occurranceofdigits[4]<<"Occurrance of number 5:"<<hist.occurranceofdigits[5]<<"Occurrance of number 6:"<<hist.occurranceofdigits[6]<<"Occurrance of number 7:"<<hist.occurranceofdigits[7]<<"Occurrance of number 8:"<<hist.occurranceofdigits[8]<<"Occurrance of number 9:"<<hist.occurranceofdigits[9];

    return os;
}

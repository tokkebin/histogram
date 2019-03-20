#include "histogram.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

histogram::histogram()
{
    cout<<"Default constructor"<<endl;
    //konstruktor
}

histogram::histogram(string text)
{
    numberofdigits = counteralldigits(text);



}

histogram::~histogram()
{
    cout<<"Default destructor"<<endl;
    //destruktor
}

int histogram::counteralldigits(string text)
{
    //metoda liczaca wystapienia cyfr

    for( int i = 0; i < text.length(); ++i )
    {
        if (isdigit(text[i]))
        {
            numberofdigits++;
        }

    }

    return numberofdigits;
}

int histogram::counterevrydigit(string text)
{
    //metoda liczy wystapienia kazdej z cyfr
    for( int i = 0; i < text.length(); ++i )
    {
        if(stoi(text[i])==0)
            occurranceofnumber0++; //sprawdzenie 0
        else if(stoi(text[i])==1)
            occurranceofnumber1++;  //sprawdzenie 1
        else if(stoi(text[i])==2)
            occurranceofnumber2++;  //sprawdzenie 2
        else if(stoi(text[i])==3)
            occurranceofnumber3++;  //sprawdzenie 3
        else if(stoi(text[i])==4)
            occurranceofnumber4++;  //sprawdzenie 4
        else if(stoi(text[i])==5)
            occurranceofnumber5++;  //sprawdzenie 5
        else if(stoi(text[i])==6)
            occurranceofnumber6++;  //sprawdzenie 6
        else if(stoi(text[i])==7)
            occurranceofnumber7++;  //sprawdzenie 7
        else if(stoi(text[i])==8)
            occurranceofnumber8++;  //sprawdzenie 8
        else if(stoi(text[i])==9)
            occurranceofnumber9++;  //sprawdzenie 9

    }

    return ;
}

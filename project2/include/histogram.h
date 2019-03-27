#ifndef histogram_h
#define histogram_h

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class histogram
{

    public:
        int *occurranceofdigits;
        //konstruktory
        histogram();//domyslny
        histogram(string text);//z parametrem
        histogram(histogram &hist);//kopiujacy

        //destruktor
        ~histogram();

        //methods
        int counteralldigits(string text); //wystapienie cyfr
        int *counterevrydigit(string text); //wystapienia konkretnych cyfr
        int getnumberofdigits;

        //operators
        bool operator ==(histogram &hist);
        bool operator !=(histogram &hist);
        friend ostream& operator <<(ostream &os, const histogram &hist);
        histogram operator +(const histogram &hist);

        //public data
        //int numberofdigits;



    protected:

    private:

        //string text[50];
        //private data




};
#endif // histogram_h

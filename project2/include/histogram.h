#ifndef histogram_h
#define histogram_h

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class histogram
{

    public:
        int occurranceofdigits[10];
        //konstruktory
        histogram();//domyslny
        histogram(string text);//z parametrem
        histogram(histogram &hist);//kopiujacy

        //destruktor
        ~histogram();

        //methods
        int *counterevrydigit(string text); //wystapienia konkretnych cyfr
        int getnumberofdigits;

        //operators
        bool operator ==(histogram &hist);
        bool operator !=(histogram &hist);
        ostream& operator <<(ostream &os);
        histogram operator +(const histogram &hist);

        //public data
        //int numberofdigits;



    protected:

    private:

        //string text[50];
        //private data




};
#endif // histogram_h

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
        void counterevrydigit(int occurranceofdigits[], string text); //wystapienia konkretnych cyfr
        int getnumberofdigits;

        //operators
        friend bool operator ==(histogram &hist, histogram &hist1);
        friend bool operator !=(histogram &hist, histogram &hist1);
        friend ostream& operator <<(ostream& os,const histogram &hist);
        histogram operator +(const histogram &hist);

        //public data
        //int numberofdigits;



    protected:

    private:

        //string text[50];
        //private data




};
#endif // histogram_h

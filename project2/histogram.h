#ifndef histogram_h
#define histogram_h


class histogram
{
    public:
        //konstruktory
        histogram();

        //destruktor
        ~histogram();

        //methods
        int counteralldigits(text); //wystapienie cyfr
        int counterevrydigit(text); //wystapienia konkretnych cyfr

        //operators
        bool operator ==(histogram hist1, histogram hist2);
        bool operator !=(histogram hist1, histogram hist2);
        ostream& operator <<(ostream &os, histogram hist1);
        histogram operator +(histogram hist1, histogram hist2);

        //public data


    protected:

    private:

        //string text[50];
        //private data
        int occurranceofnumber0;
        int occurranceofnumber1;
        int occurranceofnumber2;
        int occurranceofnumber3;
        int occurranceofnumber4;
        int occurranceofnumber5;
        int occurranceofnumber6;
        int occurranceofnumber7;
        int occurranceofnumber8;
        int occurranceofnumber9;

        int numberofdigits;

};

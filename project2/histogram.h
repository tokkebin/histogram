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
        int counteralldigits(text); //wystąpienie cyfr
        int counterevrydigit(text); //wystąpienia konkretnych cyfr

        //operators
        bool operator ==(histogram hist1, histogram hist2);
        bool operator !=(histogram hist1, histogram hist2);
        ostream& operator <<(ostream &os, histogram hist1);
        histogram operator +(histogram hist1, histogram hist2);

    protected:

    private:

        //string text[50];

};

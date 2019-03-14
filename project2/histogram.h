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
        int counteralldigits(text); //wyst¹pienie cyfr
        int counterevrydigit(text); //wyst¹pienia konkretnych cyfr

        //operators
        bool operator ==(histogram hist1, histogram hist2);
        bool operator !=(histogram hist1, histogram hist2);
        ostream& operator <<(ostream &os, histogram hist1);
        histogram operator +(histogram hist1, histogram hist2);

    protected:

    private:

        //string text[50];

};

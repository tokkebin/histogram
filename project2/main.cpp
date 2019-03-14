#include <iostream>

using namespace std;

int main()
{
    cout<<"Write text:"<<endl;
    cin>>text; //a co w przypadku roznych dlugosci wpisywanego tekstu ?? moze lepiej vector ??
    if(!cin)//obsluga bledoow
    {
        while(!cin)
            {
                count<<"Incorrectly entered data. Please, write again:"<<endl;
                cin>>text;
            }
    }
    return 0;
}

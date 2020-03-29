#include <iostream>
#include <fstream>
#include <string.h>


int main()
{
    string word;
    int k=107;
    ifstream plik;
    ofstream plik2;
    cout<<"podaj od 1 do 26"<<endl;
    cin>>k;
    if (k>26): k%=26;
    plik.open("d26-03.txt");
    if (!(plik.good()))
    {        return 0;}

    plik2.open("coded.txt");
    if (!(plik2.good())){   return 0;}

    while(plik>>word)
    {
        for(int i=0; i<word.size(); i++)
        {
            word[i]+=k;
            if(word[i]>'Z') word[i]-=26;
        }
        plik2<<word<<endl;
    }
    plik.close();
    plik2.close();

    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

int key(int litera,int szyfr)
{
    int k=0,bufor;
    for(int i=0; i<26; i++)
    {
        bufor=litera;
        bufor+=k;
        if(bufor>'Z') bufor-=26;
        if(bufor==szyfr) break;
        else k++;
    }
    return k;}
int main()
{
    ifstream plik;
    ofstream plik2;
    plik.open("d02-04.txt");
    plik2.open("bledy");
    string jawne,zaszyfrowane;
    int klucz=0;
    while(True){
        plik>>jawne>>zaszyfrowane;
        klucz = key(jawne[0],zaszyfrowane[0]);
        for(int i=0; i<jawne.size(); i++)
        {
            int co = jawne[i]+klucz;
            if (co>'Z') co -= 26;
            if(!(co == zaszyfrowane[i]))
            {
                plik2<<jawne<<endl;
                break;}}}
    return 0;}

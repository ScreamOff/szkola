#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream plik;
	fstream down1;
	int r=10;
	string tab[n];
	int x=0;
	int y=0;
	int i,j;
	string b;
	char z='Z';
	char a='A';

	plik.open("nceph.txt");

	if (!plik.good()){ cout << "nie można otworzyć" << endl; }

	while (getline(plik, b))
	{
		tab[x] = b;
		x++;
		cout<<tab[x-1]<<endl;
	}
	plik.close();

	cin>>x;

	if(x>=26)
	{
		x=x%26;
	}

	down1.open("ceph.txt");
	if (!down1.good())
	{
	cout<<"nie można otworzyć"<<endl;
	}

	for (i=0;i<r;i++)
	{
		for (j=0;j<tab[i].length();j++)
		{
			y=(int)tab[i].at(j)+x;
			if (y>((int)z))
			{
			tab[i].at(j)= ((y-(int)z)+(int)a)-1;
			}
			else
			{
			tab[i].at(j) = (int)tab[i].at(j) + x;
			}
		}
		down1<<tab[i]<<endl;
	}

}


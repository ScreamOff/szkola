#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	
	char a = 'A';
	char z = 'Z';
	ifstream coded;
	ofstream decoded;
	string arrw[3000];
	int keys[3000];
	const int n = 3000;
	string bufor, k, word;
	bool numf;
	int f,j,i,exit;
	coded.open("d30-03-1.txt");
	decoded.open("deco.txt");
	while (getline(coded, bufor))
	{
		numf = false;
		k = "";
		word = "";

		for (i = 0; i < bufor.size(); i++)
		{
			if (bufor.at(i) != ' ' && numf)
			{
				k += bufor.at(i);
			}

			if (bufor.at(i) != ' ' && !numf)
			{
				word+= bufor.at(i);
			}
			else
			{
				numf = true;
			}}
		arrw[j] = word;
		if (k.size() == 0)
		{keys[j] = 0;}
		else
		{keys[j] = atoi(k.c_str());}
		j++;}
	for (i = 0; i < n; i++)
	{k[i] = k[i] % 26;}
	for (i = 0; i < n; i++)
	{for (j = 0; j < arrw[i].length(); j++)
		{
			f = (int)arrw[i].at(j) - keys[i];
			if (f < ((int)a))
			{arrw[i].at(j) = (int)z - ((int)a - f) + 1;}
			else
			{arrw[i].at(j) = (int)arrw[i].at(j) - keys[i];}}
		decoded << arrw[i] << endl;}
	cout<<"wciśnij enter by zakonczyc program"<<endl;
	cin>>exit;
	return 0;}

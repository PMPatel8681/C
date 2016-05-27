//--------------------------------------------------------------------
//
//  Project 3                                              anagram.cpp
//
//--------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main (int argc, char *argv[])
{

  // Your code
	ifstream infile;
	string word;
	set<string> dict;
	
	infile.open("C:\\Users\\Pinal\\Documents\\Visual Studio 2015\\Projects\\Hitz3\\Debug\\words.txt");
	
	if (!infile.bad())
	{
		while (getline(infile, word))
		{
			dict.insert(dict.end(), word);
			cout << word << endl;
		}
		cout << endl;
		infile.close();
	}

	string temp = argv[1]; 
	string lowerTemp = "";

	for (size_t i = 0; i < temp.length(); i++)
	{
		lowerTemp += tolower(temp[i]);
	}
	sort(lowerTemp.begin(), lowerTemp.end());

	set<string>::iterator it; 
	cout << "The following are anagrams of " << temp << ":" << endl << endl;

	do
	{
		it = dict.find(lowerTemp);
		if (it != dict.end())
		{
			cout << *it << endl;
		}
	} while (next_permutation(lowerTemp.begin(), lowerTemp.end()));

	cin.get();
 return 0; // success
}

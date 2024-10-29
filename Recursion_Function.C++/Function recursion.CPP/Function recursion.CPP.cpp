#include <iostream>
using namespace std;
#include <string>

string Word(string word)
{
	if (word.length() == 1)
	{
		return word;
	}
	if (word[0] == word[1]) // WWWOOORRRLLLDDD
	{
		return Word(word.substr(1));
	}
	return word[0] + Word(word.substr(1));
}

int main()
{
	cout << Word("WWWOOORRRLLLDDD");
}

















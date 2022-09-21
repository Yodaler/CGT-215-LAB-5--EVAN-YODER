// CGT 215-LAB 5 -EVAN YODER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void cypherLocation(string, word)
{
    int character
    int cyberlocation
    int 
    vector<char> charVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string text;
    string outPut = "";
    cout << "Input text to cypher: ";
    getline(cin, text);
    int position = 0;

    for (int i = 0; i < text.length(); i++)
    {
        int position = 0;
        position = (int)text.at(i);

        if (text.at(i) >= 65 && text.at(i) <= 90) // is a capital letter
        {
            //position = (int)text.at(i);
            outPut.push_back(charVector[position - 65]); // IN CODE TABLE
        }

        else if (text.at(i) >= 97 && text.at(i) <= 122) // is a lower case letter
        {
            //position = (int)text.at(i);
            outPut.push_back(tolower(charVector[position - 97]));
        }

        else outPut.push_back(position);

    }
    cout << "Encoded Message: " << '\"' << outPut << '\"';
}
int main()
{
    getWord();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

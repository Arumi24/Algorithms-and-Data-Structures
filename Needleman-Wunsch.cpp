#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

class Needleman_Wunsch()
{
    public:
        Needleman_Wunsch(int match,int mismatch, int gap penalty);
        char[][] fillTable();
        string backTrack();





    private:
        int match;
        int mismatch;
        int gapPenalty;

};

main()
{
    cout << "Enter string?\n";
}

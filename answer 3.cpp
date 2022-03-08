#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    

    for (int i = 1; i < argc; i++)
    {
        argv[i]++;
    }


    int alpha[26] = {0}; 

    

    for (int i = 0; i < 26; i++)
    {
        cout << char(i+'a') << " ; " << alpha[i] << endl;
    }

    return 0;
}
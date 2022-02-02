#include <iostream>
#include <vector>
#include <string>
#include "vertex.h"

using namespace std;


int main()
{
    vector<string> msg = {"hello","c++","World","from","VS code"};

    for(const string& word:msg)
    {
        cout << word << " ";
    }
    cout << endl;




    for(auto s:msg)
    {
        cout << s << " ";
    }    
    cout << endl;



    return 0;
}
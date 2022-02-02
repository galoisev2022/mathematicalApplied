#include <iostream>
#include <vector>
#include <string>
#include "vertex.h"
#include "assert.h"

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


    
    enum type {_1d = 1, _2d = 2, _3d = 3};
    type dim = _2d;
    const string pretexte = "\ttraitement";
    switch(dim)
    {
        
        case _1d:
            std::cout << pretexte + "\t1d" << std::endl;
            break;
        case _2d:
            std::cout << pretexte + "\t2d" << std::endl;
            break;
        case _3d:
            std::cout << pretexte + "\t3d" << std::endl;
            break;
        default:
            break;

    }
    
    
    typedef Vertex<double> tvd;
    //tvd *ptvd = new tvd[10];
    //ptvd[0].name = "O",ptvd[0].x = 0.0; ptvd[0].y = 0.0;
    //vector<tvd> p;
    //p.push_back(ptvd[0]);



    return 0;
}
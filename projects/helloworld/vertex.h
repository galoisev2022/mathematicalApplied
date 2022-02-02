
#include <cassert>
#include <string>



template<class T>
T MAX(T& a, T& b)
{
    return a > b ? a : b;
}

template<class T>
class Vertex
{
    public:
    T x,y;
    std::string name;

    Vertex(/**/); // default constructor
    Vertex(std::string& nname, T& a, T&b):name(nname),x(a),y(b){} //constructor
    Vertex(const Vertex<T>& v) = default; //copy constructor
    Vertex<T>& operator= (const Vertex<T>& v) = default;//copy assignment
    Vertex<T>  operator+ (const Vertex<T>& v);
    Vertex<T>  operator- (const Vertex<T>& v);
    Vertex<T>& operator+=(const Vertex<T>& v);
    Vertex<T>& operator-=(const Vertex<T>& v);


    


};
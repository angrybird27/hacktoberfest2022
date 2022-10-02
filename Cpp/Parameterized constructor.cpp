#include <iostream>
using namespace std;

class Point // create point class  
{
    private:
        int x, y; // the two data members of class Point  
    public:
        Point(int x1, int y1) // create paramterised Constructor and initialise data member  
    {
        x = x1; // x1 is now intialised to x  
        y = y1; // y1 is now intialised to y  
    }
    
    intgetX()
    {
        return x; // to get the value of x  
    }
    
    intgetY() 
    {
        return y; // to get the value of y  
    }
};

int main() 
{
    Point p1(10, 15); // created object for paramterised constructor  

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); // print x and y  

    return 0;
}

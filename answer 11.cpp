#include <iostream>
using namespace std;

int main()
{
    float p;
    float q;
    cout << "Enter value of p : ";
    cin >> p;
    cout << "Enter value of q : ";
    cin >> q;

    try
    {
        if (q == 0)
        {
            throw q;
        }
        cout << "Result of p/q is : " << p/q;
    }

    catch (float x)
    {
        cout << "The divisor can't be zero !!" << endl;
        exit(-1);
    }
}
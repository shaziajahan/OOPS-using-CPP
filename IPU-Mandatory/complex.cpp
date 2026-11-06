#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        img = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        img = i;
    }

    // Add two complex numbers
    Complex add(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.img = img + c.img;
        return result;
    }

    // Display complex number
    void show()
    {
        cout << "(" << real << " + " << img << "i)" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    cout << "First Complex Number: ";
    c1.show();

    cout << "Second Complex Number: ";
    c2.show();

    Complex c3 = c1.add(c2);

    cout << "Addition: ";
    c3.show();

    return 0;
}

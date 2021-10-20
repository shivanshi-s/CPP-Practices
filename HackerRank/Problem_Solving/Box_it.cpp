/*Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

The default constructor of the class should initialize , , and  to .

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.

The copy constructor BoxBox ) should set  and  to 's  and , respectively.

Apart from the above, the class should have  functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
Overload the operator  for the class Box. Box   Box  if:

 <
 <  and ==
 <  and == and ==
Overload operator  for the class Box().
If  is an object of class Box:

 should print ,  and  on a single line separated by spaces.

For example,

Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
Constraints


Two boxes being compared using the  operator will not have all three dimensions equal. */
#include<bits/stdc++.h>

using namespace std;
class Box
{
    private:
        int l,b,h;

    public:
        Box()
        {
            l = b = h = 0;
        }
        Box(int length,int breadth,int height)
        {
            l = length;
            b = breadth;
            h = height;
        }
        Box(const Box& B)
        {
            l = B.l;
            b = B.b;
            h = B.h;
        }

        int getLength()
        {
            return(l);
        }
        int getBreadth()
        {
            return(b);
        }
        int getHeight()
        {
            return(h);
        }

        long long CalculateVolume()
        {
            return ((long long)l*b*h);
        }

        friend bool operator < (Box& b1, Box& b2)
        {
            if((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) ||
               (b1.l == b2.l && b1.b == b2.b && b1.h <b2.h))
                return(true);
            else
                return(false);
        }

        friend ostream& operator << (ostream& s,Box& b1)
        {
            s << b1.l << " " << b1.b << " " << b1.h;
            return s;
        }
};
//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

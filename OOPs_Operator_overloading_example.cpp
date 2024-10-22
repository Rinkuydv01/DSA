// operator overloading
#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    // Overloading (+) operator to 
    // perform addition of two distance objects
    // Call by reference
    Distance operator+(Distance& d2) {
        // Create an object to return
        Distance d3;

        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;

        // Handle the case where inches exceed 12
        if (d3.inch >= 12) {
            d3.feet += d3.inch / 12; // Convert excess inches to feet
            d3.inch = d3.inch % 12;   // Remainder of inches
        }

        // Return the resulting object
        return d3;
    }
};

// Driver Code
int main() {
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;

    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch << "\"";
    return 0;
}

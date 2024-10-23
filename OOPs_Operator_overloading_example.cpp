///////////////////////////////////////////Code from GFG //////////////////////////
// // operator overloading
// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int feet, inch;

//     Distance() {
//         feet = 0;
//         inch = 0;
//     }

//     Distance(int f, int i) {
//         feet = f;
//         inch = i;
//     }

//     // Overloading (+) operator to 
//     // perform addition of two distance objects
//     // Call by reference
//     Distance operator+(Distance& d2) {
//         // Create an object to return
//         Distance d3;

//         d3.feet = feet + d2.feet;
//         d3.inch = inch + d2.inch;

//         // Handle the case where inches exceed 12
//         if (d3.inch >= 12) {
//             d3.feet += d3.inch / 12; // Convert excess inches to feet
//             d3.inch = d3.inch % 12;   // Remainder of inches
//         }

//         // Return the resulting object
//         return d3;
//     }
// };

// // Driver Code
// int main() {
//     Distance d1(8, 9);
//     Distance d2(10, 2);
//     Distance d3;

//     // Use overloaded operator
//     d3 = d1 + d2;

//     cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch << "\"";
//     return 0;
// }

//////////////////////// Simply written /////////////////////////////////////
// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class plusminus{
    public:
    int a;
    int b;
    
    plusminus(){}
    plusminus(int x,int y){
        a=x;
        b=y;
    }
    
    plusminus operator +(const plusminus& p1){
        plusminus ps;
        ps.a=p1.a+a;
        ps.b=p1.b+b;
        
        return ps;
    }
    
};
int main() {
    plusminus ps;
    plusminus ps1(56,99);
    plusminus ps2(44,1);
    
    ps=ps1+ps2;
    cout<<ps.a<<"   "<<ps.b;
    
    
}

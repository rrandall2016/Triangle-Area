/**
 * Problem 2: Triangle -Assignment 1
 * Randy Randall
 * */

#include <iostream>
#include <cmath>
using namespace std;

    int main()
    {
    	double side1, side2, side3, area, s;
        double x1,y1,x2,y2,x3,y3;

	
        cout<<" Enter x y for point 1 : ";
    	cin >> x1 >> y1 ;
        cout <<" Enter x y for point 2 : ";
    	cin >> x2 >> y2 ;
        cout <<" Enter x y for point 3 : ";
    	cin >> x3 >> y3 ;


        side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        side2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

		s = (side1+side2+side3)/2;//semiperimeter

		area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        
        cout<<" The area of the triangle is : "<< area << endl;
        

        return 0;
    }
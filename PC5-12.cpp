/*  
 
 This program coverts celisius to farenheit, 
 and then dislplays a conversion table.
 
*/

//  PC5-12.cpp
//  Created by Bryan Brinkman on 3/5/17.
//  Copyright © 2017 Bryan Brinkman. All rights reserved

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Define the variables!
    double c, f;
    
    // Address user
    cout << "This is a table of the Celsius temperatures from 0\n"
    << "through 20 and their Fahrenheit equivalents:\n\n"
    << "Celsius  =  Fahrenheit\n"
    << "----------------------\n"
    << "----------------------\n";
    
    // Do math
    for(c = 0; c <= 20; c++)
      {
        f = (9/5 * c) + 32;
        cout << right << setw(4) << c;
        cout << setw(12) << f << endl;
      }
    
    // End
    return 0;
}
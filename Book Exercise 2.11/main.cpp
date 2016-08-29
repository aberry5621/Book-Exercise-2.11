//
//  main.cpp
//  Book Exercise 2.11
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Population Projection 2
//

#include <iostream>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Population Projects in N Years \n";

    // D
    double years_input = 0.0;
    double pop_calc = 0.0;
    
    // I
    cout << "Enter the number of years: ";
    cin >> years_input;
    
    // P
    // multiply years by 7 births per minute, 13 deaths and 45 immigrations; add to current pop
    pop_calc = years_input * (((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0)) + 312032486;
    
    // O
    cout << "The population in " << years_input << " is " << pop_calc << endl;
    
    return 0;
    
}
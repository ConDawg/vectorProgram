//
//  Controller.cpp
//  vectorProgram
//
//  Created by Johnson, Connor on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    
    for( int i=0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << endl;
    }
    
    vector<string> names;
    names.push_back("Barni");
    names.push_back("Bagingi");
    names.push_back("Bort");
    
    for(int a=0; a< names.size() ; a++)
    {
        cout << names.at(a) << endl;
    }
    
}

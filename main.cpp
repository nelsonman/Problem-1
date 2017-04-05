//
//  main.cpp
//  Problem 1
//
//  Created by Nelson D'souza on 12/02/17.
//  Copyright © 2017 Nelson D'souza. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int uprlmt, c = 0;
    
    //Taking the Upper Value for the search
    std::cout << "Please enter the upper limit of your search:" << std::endl;
    std::cin >> uprlmt;
    
    cout << endl << "--------------------------------------------------------------" << endl;
    
    //Looping to find out multiples of 3 & 5
    for (int i = 1; i < uprlmt; i++)
    {
        if ((i % 3) == 0 || (i % 5) == 0 )
        {
            // and printing them
            cout << endl << i << endl;
            
            //Adding the multiples
            c = c + i;
        }
        
        /*if ((i % 3) == 0 || (i % 5) == 0 )
        {
            c = c + i;
        }*/
       
    }
    
    cout << endl << "--------------------------------------------------------------" << endl;
    
    //Printing the sum of multiples
    cout << c << endl << endl;
    
    return 0;
}



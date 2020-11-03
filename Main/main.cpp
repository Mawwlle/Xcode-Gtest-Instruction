//
//  main.cpp
//  Main
//
//  Created by Максим Дунаев on 02.11.2020.
//

#include <iostream>
#include "RootMath.hpp"

int main()
{
    /*std::string agreement = "y";
    while (agreement == "y") {
        agreement = Sqrt(agreement);
        std::cout<<"_____________________________________________________\n";
    }*/
    for(int n = 0;n<10;n++){
    std::cout<<"Fibbo = "<<SimpleMathOperation::Fibbo(n)<<" ";
        std::cout<<"Factor = "<<SimpleMathOperation::Factor(n)<<std::endl;
}
}


// ControllFlowBranchingLooping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Adam Lundell 
//if and else if and else tuturial for beginners

#include <iostream>

int main()
{
    int myAge = 27;
   
    while(myAge = true) {
        system("CLS");
        std::cout << "This is a simple program using if and else and elif feel fre to clone and learn the basic logic in if statments" << std::endl;
        std::cout  << std::endl;
        std::cout << "Guess my age" << std::endl;
        std::cin >> myAge;
        if (myAge <= 26) { // LES THAN 26==PRINT TTHIS
            std::cout << "Under my age" << std::endl;
        }
        else if (myAge >= 28) {// MORE OR = 28==PRINT THIS
            std::cout << "over myage" << std::endl;
        }

        else { //IF MY AGE IS 27 == TRUE
            break; //if age is correct break the while loop 
        }
    }
    std::cout << "You guessed right my age is : " << myAge << std::endl;
}


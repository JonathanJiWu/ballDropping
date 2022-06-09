// ballDropping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//simulate a ball being dropped off of a tower. To start, the user should be asked for the height 
//of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity 
//(the ball is not moving to start). Have the program output the height of the ball above the 
//ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

#include <iostream>

double GetBallHeight()
{
    double input{};
    std::cin >> input;
    return input;
}

void AskForInput(std::string word)
{
    std::cout << word << "\n";
}

void GiveOutHeights(double height)
{
    constexpr double gravity_constant{ 9.8 };
     //double distanceMoved{ gravity_constant };
    for (int i = 0; i != 100; i++)
    {
        double distanceMoved{ gravity_constant * pow(i, 2)/2};
        if (height - distanceMoved >= 0)
        {
            std::cout << "At " << i << " seconds, the ball is at height: " << height - distanceMoved << " meters\n";
        }
        else 
        { 
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
            break; 
        }
        //std::cout << "At " << i << " seconds, the ball is at height: " << height - distanceMoved << " meters\n";
    }
}

int main()
{
    AskForInput("Enter the height of the tower in meters: ");
    
    GiveOutHeights(GetBallHeight());
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

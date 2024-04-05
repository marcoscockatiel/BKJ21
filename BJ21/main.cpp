#include <iostream>
//#include "stdafx.h"
#include "BJ21.h"


int main()
{
    int exitGame = 1;

    do
    {
        Blackjack casino_royale;
        casino_royale.playGame();
        std::cout << "\nWould you like to play again? (1 - Yes, 2 - No)\n";
        std::cin >> exitGame;
    } while (exitGame == 1);


    std::cout << "\nThanks for playing!\n";
    system("pause");
    return 0;
}
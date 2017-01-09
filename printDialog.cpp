#include <iostream>
#include <string.h>
#include <typeinfo>

int main()
{
    std::string pronoun;
    std::cout << "What are you?" << std::endl;
    std::cout << "- Friend \n - Buddy \n - Guy" << std::endl;
    std::cin >> pronoun;


    while (pronoun.compare("Friend") != 0 && pronoun.compare("Buddy") != 0 && pronoun.compare("Guy") != 0)
    {
        std::cout << "You can only type Friend, Buddy, or Guy" << std::endl;
        std::cout << "So, what are you?" << std::endl;
        std::cout << "- Friend \n -Buddy \n -Guy" << std::endl;
        std::cin >> pronoun;
    }

    for (int i = 0; i < 6; i++)
    {
        if (pronoun.compare("Friend") == 0)
        {
            std::cout << "I'm not your friend, buddy" << std::endl;
            pronoun = "Buddy";
        }
        else if (pronoun.compare("Buddy") == 0)
        {
            std::cout << "I'm not your buddy, guy" << std::endl;
            pronoun = "Guy";
        }
        else if(pronoun.compare("Guy") == 0)
        {
            std::cout << "I'm not your guy, friend" << std::endl;
            pronoun = "Friend";
        }

    }

    return 0;
}


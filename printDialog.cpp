#include <iostream>
#include <string.h>


int main()
{
    string pronoun;
    std::cout << "What are you?" << std::endl;
    std::cout << "- Friend \n -Buddy \n -Guy" << std::endl;
    std::cin >> pronoun >> std::endl;
    
    while (pronoun != ('Friend' || 'Buddy' || 'Guy'))
    {
        std::cout << "You can only type Friend, Buddy, or Guy" << std::endl;
        std::cout << "So, what are you?" << std::endl;
        std::cout << "- Friend \n -Buddy \n -Guy" << std::endl;
        std::cin >> pronoun >> std::endl;
    }
    
    for (int i = 0 , i < 6 , i++)
    {
        if (pronoun = 'Friend')
        {
            std::cout << "I'm not your friend, buddy" << std::endl;
            pronoun = 'Buddy'
        }
        elseif (pronoun = 'Buddy')
        {
            std::cout << "I'm not your buddy, guy" << std::endl;
            pronoun = 'Guy'
        }
        else (pronoun = 'Guy')
        {
            std::cout << "I'm not your guy, friend" << std::endl;
            pronoun = 'Friend'            
        }
        
    }
    
    
}

#include <iostream>

bool welcome_message()
{
    std::cout << "Should I say hello ?\n";
    std::cout << "1 - Yes\n";
    std::cout << "0 - NO\n";
    int x {};
    std::cin >> x;

    if ( x > 1 )
    {
        std::cout << "Wrong answer!\n" << std::endl;
        exit(1);
    }
        
    else if ( x < 0 )
    {
        std::cout << "Wrong answer!\n" << std::endl;
        exit(1);
    }
        
    return x;
}

void inputting_chars()
{
    std::cout << "Input keyboard character: ";
    char ch {};
    std::cin >> ch;
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n' << std::endl;
}

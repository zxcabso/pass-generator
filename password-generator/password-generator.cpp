#include <iostream>
#include <stdlib.h>

std::string randompass(int lenght) {
    const std::string symbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string pass;
    std::srand(std::time(0));
    for (int i = 0; i < lenght; i++)
    {
        char rndS = symbols[std::rand() % symbols.length()];
        pass += rndS;
    }
    return pass;
}

int main()
{
    std::cout << randompass(16);
}

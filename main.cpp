#include <iostream>

void clear_console() { std::cout << "\033[2J\033[H"; }

int main()
{
    std::cout << 1 << std::endl;
    clear_console();
}
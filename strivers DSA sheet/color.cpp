#include <iostream>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // get console handle
    int fadeSpeed = 10; // fade speed in milliseconds
    int fadeInSteps = 20; // number of steps for fade in animation
    int fadeOutSteps = 20; // number of steps for fade out animation

    // set console text color to pink
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    // print "snehal" with fade-in animation
    for (int i = 0; i <= fadeInSteps; i++)
    {
        // calculate alpha value for fade-in effect
        int alpha = i * 255 / fadeInSteps;

        // set console text color with alpha value
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | alpha);

        // print "snehal" in bold font
        std::cout << "\033[1m" << "snehal" << "\033[0m"; // ANSI escape codes for bold font
        std::cout.flush(); // flush output buffer
        Sleep(fadeSpeed); // wait for fadeSpeed milliseconds
        system("cls"); // clear console screen
    }

    // print "snehal" with fade-out animation
    for (int i = fadeOutSteps; i >= 0; i--)
    {
        // calculate alpha value for fade-out effect
        int alpha = i * 255 / fadeOutSteps;

        // set console text color with alpha value
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | alpha);

        // print "snehal" in bold font
        std::cout << "\033[1m" << "snehal" << "\033[0m"; // ANSI escape codes for bold font
        std::cout.flush(); // flush output buffer
        Sleep(fadeSpeed); // wait for fadeSpeed milliseconds
        system("cls"); // clear console screen
    }

    return 0;
}

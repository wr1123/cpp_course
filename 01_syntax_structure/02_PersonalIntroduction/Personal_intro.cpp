/*
 * Personal Introduction Program
 * Created by: WR1123
 * Date: 04/04/2026
 *
 * Description: This program displays personal information
 * about myself in a formatted way on the console.
 */

/**
 * My Learning Goals:
 * learn C++
 */
#include <iostream>

// Main function - program execution starts here
int main()
{
    // Display header
    std::cout << "====================================" << std::endl;
    std::cout << "       PERSONAL INTRODUCTION        " << std::endl;
    std::cout << "====================================" << std::endl;

    // Display greeting with names
    std::cout << "Hello, my name is Luis." << std::endl;

    // Display current role/ocuupation
    std::cout << "I am a Data Quality Analyst Intermediate." << std::endl;

    // add more personal information 
    std::cout << "Hometown: Zacualpan de Amilpas." << std::endl;
    std::cout << "Favorite Programming Language: Java." << std::endl;
    std::cout << "Hobby: Running." << std::endl;

    // Display footer
    std::cout << "====================================" << std::endl;

    // return statement
    return 0;
}
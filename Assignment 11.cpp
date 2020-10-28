// Assignment 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//calculate the area of a square

class Square {
public:
    int height, width;

    void DisplayArea() {cout<< width* height << endl; }

};

int main()
{
    Square S;
    S.height = 2;
    S.width = 4;
    S.DisplayArea();



}

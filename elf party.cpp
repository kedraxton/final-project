//
//  elf party.cpp
//  working file
//
//  Created by Kenna Draxton on 11/16/18.
//  Copyright © 2018 Kenna Draxton. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

#include "elf party.hpp"

void intro()
{
    cout << "\tWelcome to Elf yerself and White Elephant Gift Exchange!\n"<< endl;
}


void gifts()
{
    int myNumberOfGifts;
    cout << "Enter the number of gifts that you brough to the white elephant party :(between 1 and 5 "<< endl;
    cin >> myNumberOfGifts;
    int& guestNumberOfGifts = myNumberOfGifts;
    cout << "Mumzy Muggle also brough " << guestNumberOfGifts << " gifts! How ironic!"<< endl;
    
}

//welcome to user, get their first name
void userFirstName()
{
    string yourName;
    cout<< "Enter your first name : "<< endl;
    cin >> yourName;
    cout << "Welcome "<< yourName << endl;
}



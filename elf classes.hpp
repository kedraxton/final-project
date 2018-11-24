//
//  elf classes.hpp
//
//

#pragma once
using namespace std;

#include <stdio.h>
void intro();
void gifts();
void userFirstName();
string firstName();
string secondName();
void pressToMeet();



class Elf1
{
    public:
    Elf1();
    void sayName();
    
};


class Elf2:public Elf1
{
    public:
        Elf2();
};

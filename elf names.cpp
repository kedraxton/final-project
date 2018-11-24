//
//  elf names.cpp
//  working file
//
//  Created by Kenna Draxton on 11/16/18.
//  Copyright © 2018 Kenna Draxton. All rights reserved.
//

#include <iostream>
#include "elf names.hpp"
using namespace std;

//calculate Elf first name
string firstName()
{
    string name1;
    string a = "Aksel";
    string b = "Bonnie ";
    string c = "Clyde";
    string d = "Darn";
    string e = "Evie";
    string f = "Freddy";
    string g = "Garf";
    string h = "Honky-Tonk";
    string i = "Igor";
    string j = "Jude";
    string k = "Kiki";
    string l = "Lomi";
    string m = "Monkey";
    string n = "Nino";
    string o = "Ooba";
    string p = "Parker";
    string q = "Quick";
    string r = "Roomie";
    string s = "Silly";
    string t = "Tiny";
    string u = "Uber";
    string v = "Very";
    string w = "Wacky";
    string x = "x";
    string y = "Yo-Yo";
    string z = "Zany";
    
    
    cout << "Please enter first letter of your last name " << endl;
    
    cin >> name1;
    
    if(name1 == "a")
    {
        name1 = a;
    }
    if(name1 == "b")
    {
        name1 = b;
    }
    if(name1 == "c")
    {
        name1 = c;
    }
    if(name1 == "d")
    {
        name1 = d;
    }
    if(name1 == "e")
    {
        name1 = e;
    }
    if(name1 == "f")
    {
        name1 = f;
    }
    if(name1 == "g")
    {
        name1 = g;
    }
    if(name1 == "h")
    {
        name1 = h;
    }
    if(name1 == "i")
    {
        name1 = i;
    }
    if(name1 == "j")
    {
        name1 = j;
    }
    if(name1 == "k")
    {
        name1 = k;
    }
    if(name1 == "l")
    {
        name1 = l;
    }
    if(name1 == "m")
    {
        name1 = m;
    }
    if(name1 == "n")
    {
        name1 = n;
    }
    if(name1 == "o")
    {
        name1 = o;
    }
    if(name1 == "p")
    {
        name1 = p;
    }
    if(name1 == "q")
    {
        name1 = q;
    }
    if(name1 == "r")
    {
        name1 = r;
    }
    if(name1 == "s")
    {
        name1 = s;
    }
    if(name1 == "t")
    {
        name1 = t;
    }
    if(name1 == "u")
    {
        name1 = u;
    }
    if(name1 == "v")
    {
        name1 = v;
    }
    if(name1 == "w")
    {
        name1 = w;
    }
    if(name1 == "x")
    {
        name1 = x;
    }
    if(name1 == "y")
    {
        name1 = y;
    }
    else if(name1 == "z")
    {
        name1 = z;
    }
    
    return name1;
}

//calculate elf second name by birth month
string secondName()
{
    string name2;
    string January = "Marshmallow";
    string February = "Bubbly ";
    string March = "Cooky";
    string April = "Dingle";
    string May = "Emu";
    string June = "Funky";
    string July = "Giggly";
    string August = "Happy Wappy";
    string September = "I";
    string October = "Joojoo";
    string November = "Kookoo";
    string December = "Lanky";
    
    cout << "Please enter the month of your birth :  " << endl;
    
    cin >> name2;
    
    if(name2 == "January")
    {
        name2 = January;
    }
    if(name2 == "February")
    {
        name2 = February;
    }
    if(name2 == "March")
    {
        name2 = March;
    }
    if(name2 == "April")
    {
        name2 = April;
    }
    if(name2 == "May")
    {
        name2 = May;
    }
    if(name2 == "June")
    {
        name2 = June;
    }
    if(name2 == "July")
    {
        name2 = July;
    }
    if(name2 == "August")
    {
        name2 = August;
    }
    if(name2 == "September")
    {
        name2 = September;
    }
    if(name2 == "October")
    {
        name2 = October;
    }
    if(name2 == "November")
    {
        name2 = November;
    }
    
else if(name2 == "December")
    {
        name2 = December;
    }
    
    
    return name2;
}

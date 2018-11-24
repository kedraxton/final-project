//
//  first name.cpp
//  working file
//
//  Created by Kenna Draxton on 11/16/18.
//  Copyright © 2018 Kenna Draxton. All rights reserved.
#include <string>
#include <iostream>
using namespace std;
#include "first name.hpp"


//welcome to user, get their first name
void userFirstName()
{
    string yourName;
    cout<< "Enter your first name : "<< endl;
    cin >> yourName;
    cout << "Welcome "<< yourName << endl;
}


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
    if(name1 == "c")
    {
        cout << c;
    }
    else if(name1 == "b")
    {
        cout << b;
    }
    
    
    return name1;
}


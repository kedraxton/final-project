//
//  elf name and party.cpp
//
//

#include <iostream>
#include <string>
using namespace std;

int gifts()
{
    int myNumberOfGifts;
    cout << "Enter the number of gifts that you brough to the white elephant party :(between 1 and 5 "<< endl;
    cin >> myNumberOfGifts;
    int& guestNumberOfGifts = myNumberOfGifts;
    cout << "Mumzy Muggle also brough " << guestNumberOfGifts << " gifts! How ironic!"<< endl;
    
    
    
    
    return myNumberOfGifts;
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
        cout << February;
    }
    else if(name2 == "March")
    {
        cout << March;
    }
    
    
    return name2;
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

//welcome to user, get their first name
void userFirstName()
{
    string yourName;
    cout<< "Enter your first name : "<< endl;
    cin >> yourName;
    cout << "Welcome "<< yourName << endl;
}



void intro()
{
    cout << "\tWelcome to Elf yerself and White Elephant Gift Exchange!\n"<< endl;
}

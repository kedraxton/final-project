
#include <iostream>
#include <string>
using namespace std;
#include "elf party.hpp"
#include "elf classes.hpp"


//formulate your elf name and attend a white elephant gift party where you exchange gifts with another elf!
int main ()
{
    bool Quit = false;
    char Answer;
    intro();
    
    userFirstName();
    
    string elfFirstName = firstName();
    string elfSecondName = secondName();
    string elfName  = elfFirstName + ' ' + elfSecondName;
    cout << "You will now be referred as : "<< elfFirstName <<" " << elfSecondName<< endl;
    
    gifts();
    
    pressToMeet();
    
    Elf1 uno;
    uno.sayName();
    
    cout<< "Hey, my name is the same!"<< endl;
    
    Elf2 dos;
    dos.sayName();
    
    while(!Quit)
    {
        cout << "Let's come up with another elf name for fun!"<< endl;
        string newElfFirstName = firstName();
        string newElfSecondName = secondName();
        string newElfName = newElfFirstName + ' ' + newElfSecondName;
        cout << "Your new elf name is: " << newElfFirstName << " " << newElfSecondName<< endl;
        
        cout << "Do you want to come up with another name? For your friend perhaps?....."<<endl;
        cin >> Answer;
        Answer = toupper(Answer);
        if (Answer == 'N')
        {
            Quit = true;
        
        }
    }
    
    cout << "Well, we've partied hard and it's time to return for Christmas Eve! Thanks for playing along!" << endl;
    
    return 0;
}


//
//The more humor in this program the better you will remember it.
//Your program must contain a description for the user of what it does.




//Your program must use at least one pointer

//Your program must use heavy comments in the code showing a good understanding of your code.



//Your program must be placed in GitHub
//You may make your program graphical, however you are only required to have a text-based console application. Get your program working using text before you think about making a GUI.
//The video is a demonstration of all functionality in your final project.  There is no maximum time requirement,but there is a the requirement to demonstrate all functionality from a user perspective only. Not from the role of the developer. This will be worth half of your grade on this assignment. Tell an interesting story, sell your program to the viewer on how exciting it is!











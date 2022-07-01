#include <iostream>
#include "question1.h"

using std::cout;
using std::cin;

int main()
{
    auto input = 0;
    auto points = 0;
    auto exit = 'X';

    do{
        cout<<"Please enter the number of Widgets sold: ";
        do{
            //validates that input is a number
            while(!(cin>>input)){
                cout<<"Error. Please enter a number: ";
                cin.clear();
                cin.ignore(123,'\n');
            }

            if(input < 0){
                cout<<"Error. Please enter a positive number: ";
            }
        }
        while (input < 0); //validates that input is not a negative number

        cout<<"\n";
        points = get_earned_points(input);
        cout<<"You earned "<<points<<" points. \n\n";

        cout<<"Do you wish to exit? \nEnter Y to exit: ";
        cin>>exit;
        cout<<"\n";
    }
    while(!(exit == 'Y' || exit == 'y'));

    return 0;
}
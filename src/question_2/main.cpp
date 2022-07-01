#include "question2.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    auto input_mass = 0.0;
    auto input_velocity = 0.0;
    auto exit = 'X';

    do{
        cout<<"Please enter the object's mass: ";
        do{
            //validates that input is a number
            while(!(cin>>input_mass)){
                cout<<"Error. Please enter a number: ";
                cin.clear();
                cin.ignore(123,'\n');
            }

            if(input_mass < 0){
                cout<<"Error. Please enter a positive number: ";
            }
        }
        while (input_mass < 0); //validates that input is not a negative number

        cout<<"Please enter the object's velocity: ";
        //validates that input is a number
        while(!(cin>>input_velocity)){
                cout<<"Error. Please enter a number: ";
                cin.clear();
                cin.ignore(123,'\n');
        }

        cout<<"The kinetic energy of the object is:"<<get_kinetic_energy(input_mass,input_velocity);
        cout<<"\n\n";
        cout<<"Do you wish to exit? \nEnter Y to exit: ";
        cin>>exit;
        cout<<"\n";
    }
    while(!(exit == 'Y' || exit == 'y'));

    return 0;
}
#include <iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    auto input = 0.0;
    auto exit = 'X';

    do{
        cout<<"Please enter the temperature in Celsius: ";
        
        //validates that input is a number
        while(!(cin>>input)){
            cout<<"Error. Please enter a number: ";
            cin.clear();
            cin.ignore(123,'\n');
        }


        cout<<"\n";
        
        cout<<"The temperature is "<<get_fahrenheit(input)<<" degrees Fahrenheit. \n\n";

        cout<<"Do you wish to exit? \nEnter Y to exit: ";
        cin>>exit;
        cout<<"\n";
    }
    while(!(exit == 'Y' || exit == 'y'));

    return 0;
}
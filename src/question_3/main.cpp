#include "question3.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    auto input = 0;
    auto exit = 'X';
    std::vector<double> ingredients = {0,0,0};

    do{
        cout<<"Please enter the number of cookies to be baked: ";
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
        ingredients = get_cookie_ingredients(input);
        cout<<"Cups of sugar: "<<ingredients[0]<<"\n";
        cout<<"Cups of butter: "<<ingredients[1]<<"\n";
        cout<<"Cups of flour: "<<ingredients[2]<<"\n\n";


        cout<<"Do you wish to exit? \nEnter Y to exit: ";
        cin>>exit;
        cout<<"\n";
    }
    while(!(exit == 'Y' || exit == 'y'));


    return 0;
}
#include "question1.h"

bool test_config()
{
    return true;
}

int get_earned_points (int sold)
{
    if (sold > 0 && sold < 6){
        return sold;
    }
    else if(sold > 5 && sold < 11){
        return sold * 5;
    }
    else if (sold > 10 && sold < 16){
        return sold * 10;
    }
    else if (sold > 15)
    {
        return sold * 15;
    }
    else{
        return 0;
    }
}
#include "question3.h"

bool test_config()
{
    return true;
}

std::vector<double> get_cookie_ingredients(int cookies_to_bake)
{
    auto ratio = cookies_to_bake / 48.0;
    std::vector<double> ingredient_amount = {1.5, 1, 2.75};

    for(int i = 0; i < ingredient_amount.size(); i++)
    {
        ingredient_amount[i] *= ratio;
    }

    return ingredient_amount;

}
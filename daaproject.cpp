#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
void mainmenu();
void details();
int choice;
long long int age, contactinfo;
string name, name1, gender, password, password2, mov;
void exit()
{
    cout << "THANK YOU HAVE A GREAT DAY WITH A HEALTHY MEAL";
    exit(0);
}
class diet
{
public:
    int dd;
    int dt;
    string ch;
    void week_diet()
    {
        cout << "Do you want a Vegetarian diet or a Non-Vegetarian diet\n";
        cin >> ch;
        if (ch == "Vegetarian" || ch == "v" || ch == "V" || ch == "vegetarian" || ch == "VEGETARIAN" || ch == "veg" || ch == "VEG")
        {
            cout << "Diet for Vegetarian\n";
            cout << "Press 0 for SUNDAY Diet\nPress 1 for MONDAY Diet\nPress 2 for TUESDAY Diet\nPress 3 for WEDNESDAY Diet\nPress 4 for THURSDAY Diet\nPress 5 for FRIDAY Diet\nPress 6 for SATURDAY Diet\n";
            cin >> dt;
            switch (dt)
            {
            case 0:
            {
                cout << "Selected Day is SUNDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOatmeal with fruit and flaxseeds and 1 medium apple\n";
                cout << "For Lunch\nGrilled veggie and hummus wrap with sweet potato fries\n";
                cout << "For Dinner\n1 serving Mushroom-Quinoa Veggie Burgers with Special Sauce\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 1:
            {
                cout << "Selected Day is MONDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 clementine\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 2:
            {
                cout << "Selected Day is TUESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\n1 serving One-Pot Tomato Bail Pasta topped with 2 Tbsp. shredded Parmesan cheese\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 3:
            {
                cout << "Selected Day is WEDNESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls and 1 clementines\n";
                cout << "For Dinner\n1 serving Stuffed Potatoes with Salsa & Beans topped with 2 Tbsp. shredded Cheddar cheese and 1 Tbsp. sour cream\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 4:
            {
                cout << "Selected Day is THURSDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 2 bananas\n";
                cout << "For Lunch\n1 serving Whole-Wheat Veggie Wrap\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas with 2 Peanut-Butter Energy Balls\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 5:
            {
                cout << "Selected Day is FRIDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nHot water with honey and lime and 1 clementine\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls and 1/2 cup rasberries\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 6:
            {
                cout << "Selected Day is SATURDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water, 1/2 medium apple, diced and 1 Tbsp. chopped walnuts\n";
                cout << "For Lunch\n1 serving Whole-Wheat Veggie Wrap\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            }
        }
        else if (ch == "Non-Vegetarian" || ch == "N" || ch == "n" || ch == "nonvegetarian" || ch == "NONVEGETARIAN" || ch == "nonveg" || ch == "NONVEG")
        {
            cout << "Diet for Non-Vegetarian\n";
            cout << "Press 0 for SUNDAY Diet\nPress 1 for MONDAY Diet\nPress 2 for TUESDAY Diet\nPress 3 for WEDNESDAY Diet\nPress 4 for THURSDAY Diet\nPress 5 for FRIDAY Diet\nPress 6 for SATURDAY Diet\n";
            cin >> dt;
            switch (dt)
            {
            case 0:
            {
                cout << "Selected Day is SUNDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne grapefruit, Two poached eggs (or fried in a non-stick pan), Two slices whole-grain toast with one pat of butter each\n";
                cout << "For Lunch\nChicken breast (6-ounce portion), baked or roasted (not breaded or fried), Large garden salad with tomato and onion with one cup croutons, topped with one tablespoon oil and vinegar (or salad dressing)\n";
                cout << "For Dinner\n1 serving Mushroom-Quinoa Veggie Burgers with Special Sauce\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 1:
            {
                cout << "Selected Day is MONDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne whole-wheat English muffin with two tablespoons peanut butter\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\nOne cup mashed potatoes and One cup cooked spinach\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 2:
            {
                cout << "Selected Day is TUESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\nLow sodium chicken noodle soup with six saltine crackers\n";
                cout << "For Dinner\n1 serving One-Pot Tomato Bail Pasta topped with 2 Tbsp. shredded Parmesan cheese\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 3:
            {
                cout << "Selected Day is WEDNESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne cup whole wheat flakes with one cup non-fat milk and one teaspoon sugar\n";
                cout << "For Lunch\nOne sliced avocado and One cup non-fat milk\n";
                cout << "For Dinner\n1 serving Stuffed Potatoes with Salsa & Beans topped with 2 Tbsp. shredded Cheddar cheese and 1 Tbsp. sour cream\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 4:
            {
                cout << "Selected Day is THURSDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne scrambled or poached egg and One serving turkey bacon with One cup orange juice\n";
                cout << "For Lunch\nVeggie burger on a whole grain bun\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas with 2 Peanut-Butter Energy Balls\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 5:
            {
                cout << "Selected Day is FRIDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nHot water with honey and lime and 1 clementine\n";
                cout << "For Lunch\nMedium garden salad with tomatoes and onions and two tablespoons salad dressing\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 6:
            {
                cout << "Selected Day is SATURDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne cup cooked oatmeal with one-half cup blueberries, one-half cup non-fat milk, and one tablespoon almond slivers\n";
                cout << "For Lunch\nLarge garden salad with tomatoes and onions and two tablespoons salad dressing\n";
                cout << "For Dinner\nOne whole wheat dinner roll with a pat of butter with one cup of orange juice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    week_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            }
        }
    }
    void get_diet()
    {
        time_t t = time(0);
        struct tm *now = localtime(&t);
        dd = (now->tm_wday);
        cout << "Do you want a Vegetarian diet or a Non-Vegetarian diet\n";
        cin >> ch;
        if (ch == "Vegetarian" || ch == "v" || ch == "V" || ch == "vegetarian" || ch == "VEGETARIAN" || ch == "veg" || ch == "VEG")
        {
            cout << "Diet for Vegetarian\n";
            switch (dd)
            {
            case 0:
            {
                cout << "Today is SUNDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOatmeal with fruit and flaxseeds and 1 medium apple\n";
                cout << "For Lunch\nGrilled veggie and hummus wrap with sweet potato fries\n";
                cout << "For Dinner\n1 serving Mushroom-Quinoa Veggie Burgers with Special Sauce\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 1:
            {
                cout << "Today is MONDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 clementine\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 2:
            {
                cout << "Today is TUESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\n1 serving One-Pot Tomato Bail Pasta topped with 2 Tbsp. shredded Parmesan cheese\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 3:
            {
                cout << "Today is WEDNESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls and 1 clementines\n";
                cout << "For Dinner\n1 serving Stuffed Potatoes with Salsa & Beans topped with 2 Tbsp. shredded Cheddar cheese and 1 Tbsp. sour cream\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 4:
            {
                cout << "Today is THURSDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 2 bananas\n";
                cout << "For Lunch\n1 serving Whole-Wheat Veggie Wrap\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas with 2 Peanut-Butter Energy Balls\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 5:
            {
                cout << "Today is FRIDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nHot water with honey and lime and 1 clementine\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls and 1/2 cup rasberries\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 6:
            {
                cout << "Today is SATURDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water, 1/2 medium apple, diced and 1 Tbsp. chopped walnuts\n";
                cout << "For Lunch\n1 serving Whole-Wheat Veggie Wrap\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            }
        }
        else if (ch == "Non-Vegetarian" || ch == "N" || ch == "n" || ch == "nonvegetarian" || ch == "NONVEGETARIAN" || ch == "nonveg" || ch == "NONVEG")
        {
            cout << "Diet for Non-Vegetarian\n";
            switch (dd)
            {
            case 0:
            {
                cout << "Today is SUNDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne grapefruit, Two poached eggs (or fried in a non-stick pan), Two slices whole-grain toast with one pat of butter each\n";
                cout << "For Lunch\nChicken breast (6-ounce portion), baked or roasted (not breaded or fried), Large garden salad with tomato and onion with one cup croutons, topped with one tablespoon oil and vinegar (or salad dressing)\n";
                cout << "For Dinner\n1 serving Mushroom-Quinoa Veggie Burgers with Special Sauce\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 1:
            {
                cout << "Today is MONDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne whole-wheat English muffin with two tablespoons peanut butter\n";
                cout << "For Lunch\n1 serving Lemon-Roasted Vegetable Hummus Bowls\n";
                cout << "For Dinner\nOne cup mashed potatoes and One cup cooked spinach\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 2:
            {
                cout << "Today is TUESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\n1 serving Baked Banana-Nut Oatmeal Cups and 1 medium apple\n";
                cout << "For Lunch\nLow sodium chicken noodle soup with six saltine crackers\n";
                cout << "For Dinner\n1 serving One-Pot Tomato Bail Pasta topped with 2 Tbsp. shredded Parmesan cheese\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 3:
            {
                cout << "Today is WEDNESDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne cup whole wheat flakes with one cup non-fat milk and one teaspoon sugar\n";
                cout << "For Lunch\nOne sliced avocado and One cup non-fat milk\n";
                cout << "For Dinner\n1 serving Stuffed Potatoes with Salsa & Beans topped with 2 Tbsp. shredded Cheddar cheese and 1 Tbsp. sour cream\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 4:
            {
                cout << "Today is THURSDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne scrambled or poached egg and One serving turkey bacon with One cup orange juice\n";
                cout << "For Lunch\nVeggie burger on a whole grain bun\n";
                cout << "For Dinner\n1 serving Butternut Squash & Black Bean Tostadas with 2 Peanut-Butter Energy Balls\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 5:
            {
                cout << "Today is FRIDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nHot water with honey and lime and 1 clementine\n";
                cout << "For Lunch\nMedium garden salad with tomatoes and onions and two tablespoons salad dressing\n";
                cout << "For Dinner\n1 serving Vegetarian Tikka Masala with 3/4 cup cooked brown rice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            case 6:
            {
                cout << "Today is SATURDAY\nYour Diet For Today is: \n";
                cout << "For BreakFast\nOne cup cooked oatmeal with one-half cup blueberries, one-half cup non-fat milk, and one tablespoon almond slivers\n";
                cout << "For Lunch\nLarge garden salad with tomatoes and onions and two tablespoons salad dressing\n";
                cout << "For Dinner\nOne whole wheat dinner roll with a pat of butter with one cup of orange juice\n";
                cout << "Follow Your Diet Sincerely\n";
                int inner;
                cout << "Select One from the below now-\n[1]Go Back\n[2]Go back to MainMenu\n[3]exit\n";
                cin >> inner;
                if (inner == 1)
                {
                    get_diet();
                }
                else if (inner == 2)
                {
                    details();
                }
                else
                {
                    exit();
                }
                break;
            }
            }
        }
    }
};

void details()
{
    cout << "\nDo you need a weekly diet schedule or today's diet schedule ?\n";
    cout << "Select 1 or 2\n";
    cout << "[1]Weekly schedule\n[2]Today's schedule\n";
    cin >> choice;
    if (choice == 1)
    {
        diet w;
        w.week_diet();
    }
    else
    {
        cout << "\n[1] Check Your Diet\n[2]Go Back\n[3]Exit\n";
        cin >> choice;
        if (choice == 1)
        {
            diet d;
            d.get_diet();
        }
        else if (choice == 2)
        {
            details();
        }
        else
        {
            exit();
        }
    }
}
void resignin()
{
    cout << "\nNow, Sign in to continue...";
    cout << "\nUsername - ";
    cin >> name1;
    if (name1 == name)
    {
        cout << "Please enter the Password: ";
        cin >> password;
        if (password == password2)
        {
            details();
        }
        else
        {
            cout << "Incorrect password, Enter Again\n";
            resignin();
        }
    }
    else
    {
        cout << "Please enter correct userid\n";
        resignin();
    }
}
void registerpassword()
{
    cout << "\nUsername - ";
    cin >> name;
    cout << "Please enter the Password: ";
    cin >> password;
    cout << "Please Re-enter the Password: ";
    cin >> password2;
    if (password == password2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Enter Your Age: ";
        cin >> age;
        cout << "Enter Your Gender: ";
        cin >> gender;
        cout << "Enter Your Mobile Number: ";
        cin >> contactinfo;
        resignin();
    }
    else
    {
        cout << "Wrong Password, Enter Again\n";
        registerpassword();
    }
}
void Signup()
{
    registerpassword();
}
void writetofile()
{
    string fitl = ".txt";
    fitl = name + fitl;
    fstream file1(fitl.c_str());
    if (!file1)
    {
        cout << "Please register your self first";
        Signup();
    }
}
void Signin()
{
    writetofile();
}
void mainmenu()
{
    cout << "[1]SignUp\n[2]SignIn\n[3]Exit\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        Signup();
        break;
    }
    case 2:
    {
        Signin();
        break;
    }
    case 3:
    {
        exit();
    }
    }
}
int main()
{
    cout << "*************DIET MANAGEMENT SYSTEM*************\n";
    cout << "DIETITION IS CHENNAPRAGADA. V. S. S. MANI SAKETH\n";
    cout << "ENTER THE WORLD TO MAINTAIN A HEALTHY DIET\n";
    cout << "PLEASE SELECT BELOW OPTIONS TO MAINTAIN A PERFECT DIET\n";
    mainmenu();
}
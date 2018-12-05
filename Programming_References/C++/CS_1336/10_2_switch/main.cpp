// 10_2_switch

#include <iostream>

using namespace std;

/*
- switch(expression) can be used to select one among n choices
- menu is a typical example
- expression must evaluate to an int
- the expressions that follow "case" must evaluate to a constant int
- You can use a char, in which case the ints being handled are the ASCII code
of the char
- default is optional, but recommended to catch error cases
- Execution flow will fall through (execute the next statement, even if
                                    it is under a different case)
 if there is no break
*/

int main()
{
    int choice;

    cout << "Menu of choices" << endl;
    cout << "1 - Chicken" << endl;
    cout << "2 - Fish" << endl;
    cout << "3 - Beef" << endl;
    cout << "4 - Vegan" << endl;
    cin >> choice;

    switch (choice) // Choice must evaluate to an int
    {
    case 1:
        cout << "You chose chicken" << endl;
        break; // Without the break the execution will fall through
    case 2:
        cout << "You chose fish" << endl;
        break;
    case 3:
        cout << "You chose beef" << endl;
        break;
    case 4:
        cout << "You chose vegan" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    char choice2;

    cout << endl << "Menu of choices" << endl;
    cout << "c or C - Chicken" << endl;
    cout << "f or F - Fish" << endl;
    cout << "b or B - Beef" << endl;
    cout << "v or V- Vegan" << endl;
    cin >> choice2;

    switch (choice2) // Choice must evaluate to an int
    {
    case 'c':
    case 'C':
        cout << "You chose chicken" << endl;
        break;
    case 'f':
    case 'F':
        cout << "You chose fish" << endl;
        break;
    case 'b':
    case 'B':
        cout << "You chose beef" << endl;
        break;
    case 'v':
    case 'V':
        cout << "You chose vegan" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

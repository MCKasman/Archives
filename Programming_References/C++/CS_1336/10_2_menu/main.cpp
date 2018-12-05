// 10_2_menu

#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "Menu of choices" << endl;
    cout << "1 - Chicken" << endl;
    cout << "2 - Fish" << endl;
    cout << "3 - Beef" << endl;
    cout << "4 - Vegan" << endl;
    cin >> choice;

    if(choice == 1)
        cout << "You chose chicken" << endl;
    else if(choice == 2)
        cout << "You chose fish" << endl;
    else if(choice == 3)
        cout << "You chose beef" << endl;
    else if(choice == 4)
        cout << "You chose vegan" << endl;
        else
            cout << "Invalid choice" << endl;

    return 0;
}

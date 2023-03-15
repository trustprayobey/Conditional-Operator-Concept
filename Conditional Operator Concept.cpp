#include <iostream>
using namespace std;
//I'm making a guessing game
int main()
{
    int hostUserNun, guestUserNun;
    cout << "Host:";
    cin >> hostUserNun;
    system("cls");

    cout << "Guest:";
    cin >> guestUserNun;
    
    /*if (hostUserNun == guestUserNun)
        cout << "Correct";
    else
        cout << "Failed"; */
     //Tunery Operator style

    (hostUserNun == guestUserNun) ? cout << "Correct" : cout << "Failed";

    system("pause>0"); //I think i think too much... I feel it fade!!!!!!!
}

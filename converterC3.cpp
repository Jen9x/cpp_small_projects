/*Challange from https://www.codecademy.com/resources/blog/c-plus-plus-code-challenges-for-beginners
This is Challange 3 which converts meter into feet
/*/
#include <iostream>

using namespace std;

int main()
{
    double m, ft;
    cout << "\nEnter a meter to convert into ft: ";
    cin >> m;
    ft = m * 3.28084;
    cout << "The " << m <<" meter is " << ft << " ft." << endl;
    return 0;
}
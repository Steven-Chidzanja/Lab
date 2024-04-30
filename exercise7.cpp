#include <iostream>
#include <string>

using namespace std;

int main()
{
    //allocation of an integer
    int *dynaIntVar = new int;
    cout << "Enter an Integer Value to be Allocated: " ;
    cin >> *dynaIntVar;//prompting the user to enter dynamically allocated integer

    //allocation of a string
    string *dynaStringVar = new string;
    cout << "Enter the String Value to be Allocated: " ;
    cin >> *dynaStringVar;//prompting the user to enter dynamically allocated string


    //output on the dynamically allocated integer and string
    cout << "Dynamically allocated integer value: "<< *dynaIntVar << endl;
    cout << "Dynamically allocated string value: " << *dynaStringVar << endl;

    delete dynaIntVar;
    delete dynaStringVar;

    return 0;
}

//Lab10-2.cpp - displays total owed
//Created/revised by Christopher Hall on 3/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayOptions();
void getRegular(double price, int windows, double &total);
void getBoGo(double price, int windows, double &total);


int main()
{
//declare variables
    int option = 0;
    double winPrice = 0.0;
    int numOrder = 0;
    double totalOwed = 0.0;

    cout << fixed << setprecision(2);
    //display options
    displayOptions();
    cin >> option;

    //determine which function to call and then use it.
    if (option == 1 || option == 2)
    {
        cout << "Enter number of windows: ";
        cin >> numOrder;
        cout << "Enter price per window: ";
        cin >> winPrice;
        if (option == 1)
            getRegular(winPrice, numOrder, totalOwed);
        else
            getBoGo(winPrice, numOrder, totalOwed);
        //end if
        cout << "Total owed: $" << totalOwed << endl << endl;
    }
    else
        cout << "Invalid option" << endl << endl;
    //end if
    return 0;
} //end of main function
//*****function definitions*****
void displayOptions()
{
    cout << "Select pricing option:" << endl;
    cout << "Enter 1 for regular pricing." << endl;
    cout << "Enter 2 for bogo pricing." << endl;
}//end of displayOptions function

void getRegular(double price, int windows, double &total)
{
    total = price * windows;
}//end of getRegular function

void getBoGo(double price, int windows, double &total)
{
    total = price * (windows / 2 + windows % 2);
}//end of getBoGo function
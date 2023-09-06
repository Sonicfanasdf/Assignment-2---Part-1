// Joe Bryant
// 9/4/23
// CPMR 131 - Professor Q
/*
Description:
 This program has 3 options:
 */

 // Credit: 
 // Joe Bryant & Erik Santana - 
 // Saul Merino & John Kim - 
 // Otoniel Torres Bernal & Oscar Gallardo - 

#include "input.h"
#include <iostream> 
#include "QuadraticExpression.h"

using namespace std;

void quadraticExpression();
// main menu
void mainMenu();
void pseudorandom();
void rationalNumber();

int main()
{

    // program begins
    mainMenu();

    return 0;
}

// Pre-Conditon: no parameters
// Post-Condition: no return. displays main menu and calls specific functions for the case options
void mainMenu()
{

    // Main Menu

    cout << endl;
    cout << "\tCMPR131 - Chapter 2 ADT Assignment by Erik Santana (9 / 4 / 23)";
    cout << "\n\t" << string(80, char(205)) << endl;
    cout << "\t1> Quadratic Expression" << endl;
    cout << "\t2> Pseudorandom" << endl;
    cout << "\t3> Rational number" << endl;
    cout << "\n\t" << string(80, char(169));
    cout << "\n\t0 > exit" << endl;
    cout << "\n\t" << string(80, char(205)) << endl;

    // get user input/option of main menu
    int option = inputInteger("\n\tOption: ", 0, 3);

    // loop through main menu until user exits
    do
    {
        switch (option)
        {
        case 0: exit(1); break;
        case 1: system("cls"); quadraticExpression(); break;
        case 2: system("cls"); pseudorandom(); break;
        case 3: system("cls"); rationalNumber(); break;

        }

        // new line
        cout << "\n";

    } while (true);

}
void quadraticExpression()
{

    QuadraticExpression object1;
    string input;

    // loop through sub menu until user exits
    do
    {

        cout << "\t\n1 > Quadratic Menu\n";
        cout << "===========================================================\n";
        cout << "1.display the expression\n";
        cout << "2.set coefficient(a)\n";
        cout << "3.set coefficient(b)\n";
        cout << "4.set coefficient(c)\n";
        cout << "5.get evaluation(x)\n";
        cout << "6.get the number of real roots\n";
        cout << "7.get real root(s)\n";
        cout << "------------------------------------------------------------\n";
        cout << "0. return\n";
        cout << "===========================================================\n";

        // get user input/option of main menu
        int option = inputInteger("\n\tOption: ", 0, 7);


        switch (option)
        {
        case 0: system("cls"); mainMenu(); break;
        case 1: // display the expression
        {
            cout << endl;

            object1.displayEquation();


        }break;

        case 2: // set coefficient(a)
        {

            int variableA = inputInteger("\nEnter coeficient(a): ");
            object1.setA(variableA);

            cout << endl << "a = " << object1.getA() << endl;
            getline(cin, input);

        }system("cls"); break;
        case 3: // set coefficient(b)
        {

            int variableB = inputInteger("\nEnter coeficient(b): ");
            object1.setB(variableB);

            cout << endl << "b = " << object1.getB() << endl;
            getline(cin, input);

        }system("cls"); break;
        case 4: // set coefficient(c)
        {

            int variableC = inputInteger("\nEnter coeficient(c): ");
            object1.setC(variableC);

            cout << endl << "c = " << object1.getC() << endl;
            getline(cin, input);

        }system("cls"); break;
        case 5: // set coefficient(x)
        {

            int variableX = inputInteger("\nEnter coeficient(x): ");
            object1.setX(variableX);

            cout << endl << "x = " << object1.getX() << endl;
            getline(cin, input);

            object1.getEvaluation();

        } break;
        case 6:
        {
            object1.numRoots();

        }
        break;
        case 7:
        {
            object1.getRoots();

        }
        break;



        }

        // new line
        cout << "\n";

    } while (true);

}
void pseudorandom()
{


}
void rationalNumber()
{

}
#include <iostream>
using namespace std;

int main()
{
    char kodas;
    float pirm, antr;
    cout<<"Iveskite norima simboli veiksmui ( - , +, / , * )" << endl;
    cin>>kodas;
    cout<<"Iveskite pirma skaiciu veiksmui" << endl;
    cin >> pirm;
    cout<<"Iveskite antra skaiciu veiksmui" << endl;
    cin >> antr;

    switch (kodas)
    {
    case '-':
        cout << pirm << " - " << antr << " = " << pirm - antr;
        break;
    case '+':
        cout << pirm << " + " << antr << " = " << pirm + antr;
        break;
    case '/':
        cout << pirm << " / " << antr << " = " << pirm / antr;
        break;
    case '*':
        cout << pirm << " * " << antr << " = " << pirm * antr;
        break;
    default:
        cout << "Klaida, tokio pasirinkimo net nera!";;
        break;
    }

    while (kodas>=0001&&kodas<=5000);

    return 0;

}

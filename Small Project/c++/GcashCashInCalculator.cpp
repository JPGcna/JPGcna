#include <iostream>
using namespace std;

int main() {

    double amount, percent, total, additionalPera;
    char response;

    cout << "Magkanong pera naipon this month? ";
    cin >> amount;
    cout << "May pera ba dun sa lagayan?(y/n): ";
    cin>>response;

    if (response == 'y' || response == 'Y') {
        cout << "Magkano ung pera sa lagayan? ";
        cin >> additionalPera;
        additionalPera *= 0.25;
        total = amount + additionalPera;
        cout<<"ung perang nakuha sa lagayan is "<<additionalPera<<"\n";
    }
    else
        total = amount;
        
    cout<<"ung amount na icacash in is "<<total<<"\n";
    cout<<"Wag kalimutan magdala ng extra pera, babyeeeee";
    return 0;
}

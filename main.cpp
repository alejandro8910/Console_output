#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // data for id, name and balances
    int ids[] = {1, 2, 3};
    string names[] = {"Jeff", "Mary", "Lucas"};
    double balances[] = {2302.34, 5403.49, 1849.54};

    // title
    cout << setw(20) << "Daily Report" << "\n" << string(30, '-') << "\n";

    // displays header such as ID, name , and balance
    cout << left << setw(10) << "ID" << setw(15) << "Name" << "Balance" << "\n";
    cout << string(8, '-') << " " << string(15, '-') << " " << string(10, '-') << "\n";

    // data displayed for ids, name and balances
    for (int i = 0; i < 3; i++) {
        cout << setw(8) << setfill('0') << right << ids[i] << setfill(' ') << " "
             << left << setw(15) << names[i]
             << "$" << fixed << setprecision(2) << setw(9) << right << balances[i]<< "\n";
    }

    return 0;
}

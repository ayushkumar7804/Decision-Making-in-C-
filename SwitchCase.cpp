/* Ayush Yadav
 24070123028*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. January" << endl
         << "2. February" << endl
         << "3. March" << endl
         << "4. April" << endl
         << "5. May" << endl
         << "6. June" << endl
         << "7. July" << endl
         << "8. August" << endl
         << "9. September" << endl
         << "10. October" << endl
         << "11. November" << endl
         << "12. December" << endl;

    cout<<"Enter Choice"<<endl;
    cin >> choice;

    switch (choice) {
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
        default: cout << "Invalid Input"; break;
    }
    return 0;
}

// OUTPUT
// 1. January
// 2. February
// 3. March
// 4. April
// 5. May
// 6. June
// 7. July
// 8. August
// 9. September
// 10. October
// 11. November
// 12. December
// Enter Choice
// 11
// November

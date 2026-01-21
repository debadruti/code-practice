#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('=') << setw(10) << ""<< "Student Fee Reciept"<< setw(10) << "" << endl;
    cout << setfill(' ');
    cout << setw(27) << left << "Name"<< ":Debadruti" << endl;
    cout << setw(27) << left << "Register No"<< ":123" << endl;
    cout << setw(27) << left << "Course"<< ":cse" << endl;
    cout << setfill('-') << setw(10) << ""<< "FEE DETAILS"<< setw(10) << "" << endl;
    cout << setfill(' ');
    cout << setw(27) << left << "Tution Fee"<<":"<< showpos<<45000.50 << endl;
    cout << setw(27) << left << "Hostel Fee"<<":"<< showpos<<35000.75 << endl;
    cout << setw(27) << left << "Total Fee"<<":"<< showpos<<80001.5 << endl;
    cout<<setw(27)<<left<<"Scholarship"  <<":True";
    cout<<setfill(' ');



    return 0;
}

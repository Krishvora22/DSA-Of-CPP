#include <iostream>
using namespace std;

class s1
{
private:
    int id;
    char name[50];
    char qualification[50];
    char Experience[10];
    char number[11];

public:
    void input()
    {
        cout << "employee id ";
        cin >> id;

        cout << "employee name ";
        cin.ignore();
        cin.getline(name, 30);

        cout << "qualification ";
        cin.getline(Experience, 30);

        cout << "Contact number ";
        cin.getline(number, 11);
        cin.ignore();
        repeat();
        showdata();
    }
    void repeat()
    {
        char ch;
        cout << "Press 'Y' to enter another detail,press 'N' to exit ";
        cin.ignore();
        ch = cin.get();

        if (ch == 'Y' || ch == 'y')
        {
            input();
        }
        else
        {
            exit(0);
        }
    }

    void showdata()
    {
        cout << "-----------------------------" << endl;
        cout << "Employee id    : " << id << endl;
        cout << "-----------------------------" << endl;
        cout << "Employee name  : " << name << endl;
        cout << "Qualification  : " << qualification << endl;
        cout << "Experience     : " << Experience << " year" << endl;
        cout << "Contact number : " << number << endl;
    }
};

int main()
{

    int n;
    cout << "Enter number of Employee : ";
    cin >> n;
    s1 e[n];
    for (int i = 0; i < n; i++)
        e[i].input();
    return 0;
}
// namespace std;

#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int age;
    string branch;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Student s;

            cout << "Enter Roll No: ";
            cin >> s.roll;

            cout << "Enter Name: ";
            cin >> s.name;

            cout << "Enter Age: ";
            cin >> s.age;

            cout << "Enter Branch: ";
            cin >> s.branch;

            students.push_back(s);

            cout << "\nStudent Added Successfully!\n";
            break;
        }

        case 2: {
            if(students.empty()) {
                cout << "\nNo students found.\n";
            } else {
                cout << "\nStudent List\n";
                cout << "-------------------------\n";

                for(auto s : students) {
                    cout << "Roll No : " << s.roll << endl;
                    cout << "Name    : " << s.name << endl;
                    cout << "Age     : " << s.age << endl;
                    cout << "Branch  : " << s.branch << endl;
                    cout << "-------------------------\n";
                }
            }
            break;
        }

        case 3: {
            int roll;
            bool found = false;

            cout << "Enter Roll No to search: ";
            cin >> roll;

            for(auto s : students) {
                if(s.roll == roll) {
                    cout << "\nStudent Found\n";
                    cout << "Name: " << s.name << endl;
                    cout << "Age: " << s.age << endl;
                    cout << "Branch: " << s.branch << endl;
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Student Not Found\n";

            break;
        }

        case 4: {
            int roll;
            bool deleted = false;

            cout << "Enter Roll No to delete: ";
            cin >> roll;

            for(int i = 0; i < students.size(); i++) {
                if(students[i].roll == roll) {
                    students.erase(students.begin() + i);
                    deleted = true;
                    break;
                }
            }

            if(deleted)
                cout << "Student Deleted Successfully!\n";
            else
                cout << "Student Not Found\n";

            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 5);

    return 0;
}

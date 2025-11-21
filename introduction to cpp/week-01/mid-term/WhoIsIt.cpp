#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;

    Student(int id, char name[], char section, int marks)
    {
        strcpy(this->name, name);
        this->id = id;
        this->section = section;
        this->marks = marks;
    }
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int id, marks;
        char name[101], section;

        cin >> id >> name >> section >> marks;
        Student S1(id, name, section, marks);

        int studentCount = 1;

        for (int i = 0; i < 2; i++)
        {
            cin >> id >> name >> section >> marks;

            if (marks > S1.marks)
            {
                S1 = Student(id, name, section, marks);
            }
            else if (marks == S1.marks && id < S1.id)
            {
                S1 = Student(id, name, section, marks);
            }

            studentCount++;
        }

        cout << S1.id << " " << S1.name << " " << S1.section << " " << S1.marks << endl;
    }

    return 0;
}

#include <iostream>//Insert begin....................
#include <string>
using namespace std;

using namespace std;

struct student {
    int roll;
    string name;
    struct student *next;
};

void insBeg(struct student **head, int roll, string name) {
    struct student *newN = new student;
    newN->roll = roll;
    newN->name = name;
    newN->next = *head;
    *head = newN;
}

int main() {
    struct student S1, S2, S3, *head;

    head = &S1;

    S1.roll = 1;
    S1.name = "Tanvir";
    S1.next = &S2;

    S2.roll = 2;
    S2.name = "Anney";
    S2.next = &S3;

    S3.roll = 3;
    S3.name = "Shaheen";
    S3.next = nullptr;

    // INSERT AT START
    insBeg(&head, 0, "Tahmid");


    struct student *temp = head;
    while (temp != nullptr) {
        cout << "Roll: " << temp->roll << ", Name: " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}

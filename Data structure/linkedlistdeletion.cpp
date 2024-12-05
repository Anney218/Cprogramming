

//Deletion nth pos
#include<iostream>
#include<cstring>
using namespace std;

struct student
{

    int roll;
    char name[25];
    struct student *next;
};
void DeleteNthLL(struct student **h, int N)
{
    int i;

struct student *temp = *h, *temp2;

    if (*h == NULL)
    {
        cout << "There is no node in the linked list." << endl;
        return;
    }
    else if (N == 1)
    {
        *h = temp->next;
        free(temp);
    }
    else
    {
        for (i = 1; i <= N - 2; i++)
            temp = temp->next;

        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}
int main()
{
    int roll, size, N;
    char name[25];
    struct student a, b, c, *head;
    head = &a;

    a.roll = 101;
    strcpy(a.name, "ABC");
    a.next = &b;

    b.roll = 102;
    strcpy(b.name, "DEF");
    b.next = &c;

    c.roll = 103;
    strcpy(c.name, "GHI");
    c.next = NULL;

   // InsertNthLL(&head, 105, "XYZ", 3);


    // Uncomment the following line to test deletion:
    DeleteNthLL(&head, 2);

    struct student *temp = head;

    while (temp != NULL)
    {
        cout << "Roll: " << temp->roll << ", Name: " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}



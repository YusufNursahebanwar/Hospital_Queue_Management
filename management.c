#include <stdio.h>
#include <string.h>

// Structure for patient
struct Patient
{
    int id;
    char name[50];
};

int main()
{
    int n, i;
    int front = 0;

    // Take number of patients from user
    printf("Enter Number of Patients: ");
    scanf("%d", &n);

    // Create queue array using user size
    struct Patient queue[n];

    // Adding patients
    printf("\n--- Add Patients ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Patient ID: ");
        scanf("%d", &queue[i].id);

        printf("Enter Patient Name: ");
        scanf("%s", queue[i].name);
    }

    // Display queue
    printf("\n--- Patients in Queue ---\n");

    for(i = front; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID: %d\n", queue[i].id);
        printf("Name: %s\n", queue[i].name);
    }

    // Remove first patient
    printf("\n--- Removing First Patient ---\n");

    printf("Removed Patient:\n");
    printf("ID: %d\n", queue[front].id);
    printf("Name: %s\n", queue[front].name);

    front++;

    // Display remaining patients
    printf("\n--- Remaining Patients ---\n");

    for(i = front; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID: %d\n", queue[i].id);
        printf("Name: %s\n", queue[i].name);
    }

    return 0;
}

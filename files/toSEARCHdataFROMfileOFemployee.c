#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_DEPT_LEN 30
#define FILE_NAME "employees.dat"

typedef struct Employee {
    int id;
    char name[MAX_NAME_LEN];
    char department[MAX_DEPT_LEN];
    float salary;
} Employee;

// Function prototypes
void addEmployees(FILE *fp);
void displayAllEmployees(FILE *fp);
void searchByDepartment(FILE *fp);

int main() {
    FILE *fp;

    // Open file in append+read mode ("a+b")
    fp = fopen(FILE_NAME, "a+b");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n***** Employee Record Management *****\n");

    // Add 10 employee records
    printf("\nEnter details for 10 employees:\n");
    addEmployees(fp);

    // Display all employees
    printf("\nAll Employee Records:\n");
    displayAllEmployees(fp);

    // Search employees by department, then salary, then optionally name
    searchByDepartment(fp);

    fclose(fp);
    return 0;
}

// Function to add 10 employees records to file
void addEmployees(FILE *fp) {
    Employee emp;
    int i;

    // Move file pointer to end for appending
    fseek(fp, 0, SEEK_END);

    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp.id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp.name);  // To read string with spaces

        printf("Enter Department: ");
        scanf(" %[^\n]", emp.department);

        printf("Enter Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(Employee), 1, fp);
    }
}

// Display all records in the file neatly formatted
void displayAllEmployees(FILE *fp) {
    Employee emp;

    rewind(fp); // Move to file start

    printf("--------------------------------------------------------------------------------\n");
    printf("| %-5s | %-20s | %-15s | %-10s |\n", "ID", "Name", "Department", "Salary");
    printf("--------------------------------------------------------------------------------\n");

    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        printf("| %-5d | %-20s | %-15s | %-10.2f |\n", emp.id, emp.name, emp.department, emp.salary);
    }
    printf("--------------------------------------------------------------------------------\n");
}

// Search employees by department then by salary and name if needed
void searchByDepartment(FILE *fp) {
    char searchDept[MAX_DEPT_LEN];
    Employee deptEmployees[100]; // To hold matched department employees
    int deptCount = 0, i;
    float searchSalary;

    rewind(fp);
    printf("\nEnter Department to search: ");
    scanf(" %[^\n]", searchDept);

    // Collect employees of that department
    while (fread(&deptEmployees[deptCount], sizeof(Employee), 1, fp) == 1) {
        if (strcasecmp(deptEmployees[deptCount].department, searchDept) == 0) {
            deptCount++;
        }
    }

    if (deptCount == 0) {
        printf("No employees found in department '%s'.\n", searchDept);
        return;
    }

    // Display employees in that department
    printf("\nEmployees in Department '%s':\n", searchDept);
    printf("--------------------------------------------------------------------------------\n");
    printf("| %-5s | %-20s | %-15s | %-10s |\n", "ID", "Name", "Department", "Salary");
    printf("--------------------------------------------------------------------------------\n");
    for (i = 0; i < deptCount; i++) {
        printf("| %-5d | %-20s | %-15s | %-10.2f |\n", deptEmployees[i].id, deptEmployees[i].name, deptEmployees[i].department, deptEmployees[i].salary);
    }
    printf("--------------------------------------------------------------------------------\n");

    // Ask salary to filter
    printf("\nEnter Salary to search within '%s': ", searchDept);
    scanf("%f", &searchSalary);

    // Collect employees with that salary in the department
    Employee salaryEmployees[100];
    int salaryCount = 0;
    for (i = 0; i < deptCount; i++) {
        if (deptEmployees[i].salary == searchSalary) {
            salaryEmployees[salaryCount++] = deptEmployees[i];
        }
    }

    if (salaryCount == 0) {
        printf("No employee found with salary %.2f in department '%s'.\n", searchSalary, searchDept);
        return;
    }
    
    if (salaryCount == 1) {
        // Only one employee with that salary
        printf("\nEmployee with salary %.2f in '%s':\n", searchSalary, searchDept);
        printf("--------------------------------------------------------------------------------\n");
        printf("| %-5s | %-20s | %-15s | %-10s |\n", "ID", "Name", "Department", "Salary");
        printf("--------------------------------------------------------------------------------\n");
        printf("| %-5d | %-20s | %-15s | %-10.2f |\n", salaryEmployees[0].id, salaryEmployees[0].name, salaryEmployees[0].department, salaryEmployees[0].salary);
        printf("--------------------------------------------------------------------------------\n");
    } else {
        // Multiple employees with same salary - ask for name
        char searchName[MAX_NAME_LEN];
        printf("\nMultiple employees with salary %.2f found. Enter Name to view record: ", searchSalary);
        scanf(" %[^\n]", searchName);

        int found = 0;
        printf("\nSearch Result:\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("| %-5s | %-20s | %-15s | %-10s |\n", "ID", "Name", "Department", "Salary");
        printf("--------------------------------------------------------------------------------\n");

        for (i = 0; i < salaryCount; i++) {
            if (strcasecmp(salaryEmployees[i].name, searchName) == 0) {
                printf("| %-5d | %-20s | %-15s | %-10.2f |\n", salaryEmployees[i].id, salaryEmployees[i].name, salaryEmployees[i].department, salaryEmployees[i].salary);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("No employee with name '%s' found with salary %.2f in '%s'.\n", searchName, searchSalary, searchDept);
        }
        printf("--------------------------------------------------------------------------------\n");
    }
}

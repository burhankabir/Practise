#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define MAX_MOBILE_LENGTH 15

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    char mobileNumber[MAX_MOBILE_LENGTH];
};

void writeToFile(struct Student students[], int count) {
    FILE *file = fopen("file.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < count; ++i) {
            fprintf(file, "%d %s %d %s\n", students[i].id, students[i].name, students[i].age, students[i].mobileNumber);
        }
        fclose(file);
        printf("Data written to file successfully.\n");
    } else {
        printf("Unable to open file.\n");
    }
}

int readFromFile(struct Student students[]) {
    FILE *file = fopen("file.txt", "r");
    int count = 0;
    if (file != NULL) {
        while (fscanf(file, "%d %s %d %s", &students[count].id, students[count].name, &students[count].age, students[count].mobileNumber) == 4) {
            count++;
        }
        fclose(file);
    } else {
        printf("Unable to open file.\n");
    }
    return count;
}

void deleteFromFile(int idToDelete) {
    FILE *file = fopen("file.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (file == NULL || tempFile == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    struct Student student;
    while (fscanf(file, "%d %s %d %s", &student.id, student.name, &student.age, student.mobileNumber) == 4) {
        if (student.id != idToDelete) {
            fprintf(tempFile, "%d %s %d %s\n", student.id, student.name, student.age, student.mobileNumber);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Student with ID %d deleted successfully.\n", idToDelete);
}

void callStudent(const char* mobileNumber) {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    struct Student student;
    while (fscanf(file, "%d %s %d %s", &student.id, student.name, &student.age, student.mobileNumber) == 4) {
        if (strcmp(student.mobileNumber, mobileNumber) == 0) {
            printf("Calling %s at %s...\n", student.name, student.mobileNumber);
            fclose(file);
            return;
        }
    }

    fclose(file);
    printf("No student found with mobile number %s.\n", mobileNumber);
}

int main() {
    struct Student students[100] = {
        {1, "Alice", 20, "1234567890"},
        {2, "Bob", 21, "2345678901"},
        {3, "Charlie", 22, "3456789012"}
    };
    int count = 3;

    writeToFile(students, count);

    // Reading from file and printing
    printf("Reading from file:\n");
    count = readFromFile(students);
    for (int i = 0; i < count; ++i) {
        printf("ID: %d, Name: %s, Age: %d, Mobile: %s\n", students[i].id, students[i].name, students[i].age, students[i].mobileNumber);
    }

    // Deleting a student by ID
    deleteFromFile(2);

    // Calling a student by mobile number
    callStudent("3456789012");

    return 0;
}
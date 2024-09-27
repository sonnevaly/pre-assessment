#include <stdio.h>
#include <string.h>

// Defining the structures to represent the data

struct Lecturer {
    int lecturer_id;
    char first_name[50];
    char last_name[50];
};

struct Course {
    char course[50];
    int lecturer_id;
    char country[50];
};

// Array of lecturers
struct Lecturer lecturers[] = {
    {30, "Him", "Hey"},
    {31, "Ronan", "Ogor"},
    {32, "Gran", "Sabandal"},
    {33, "Christian", "Mediola"}
};

// Array of courses
struct Course courses[] = {
    {"java", 32, "Philippines"},
    {"java", 33, "Philippines"},
    {"html", 30, "Cambodia"},
    {"java", 31, "Cambodia"}
};
 

int main() {
     // You code here
    const char* target_course = "java";
    const char* target_country = "Philippines";

    for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++) {
        if (strcmp(courses[i].course, target_course) == 0 && strcmp(courses[i].country, target_country) == 0) {
            // Find the corresponding lecturer
            for (int j = 0; j < sizeof(lecturers) / sizeof(lecturers[0]); j++) {
                if (lecturers[j].lecturer_id == courses[i].lecturer_id) {
                    // Print the lecturer's name
                    printf("%s %s\n", lecturers[j].first_name, lecturers[j].last_name);
                }
            }
        }
    }
    return 0;
}

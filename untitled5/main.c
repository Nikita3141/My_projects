#include <stdio.h>
#include <string.h>

struct Human {
    int weight;
    const char * name;
    int growth;
    char * color_of_eye;
    int age;
    int amount_of_money;

};


int is_human_older_18(struct Human human) {
    if (human.age > 18) {
        return 1;
    } else {
        return 0;
    }
}

char* is_person_handsome(struct Human human) {
    int is_older_18 = is_human_older_18(human);
    if (is_older_18 == 1) {
        if (strcmp(human.color_of_eye, "blue") == 0 && human.growth >= 180 ) {
            return "handsome";
        } else {
            return "ugly";
        }
    } else {
        return "I don't know";
    }
}




int main() {
    struct Human nikita = {80, "Nikita", 180, "blue", 19, 100};
    struct Human vadim = {120, "Vadim", 100, "green", 20, 0};

    char* about_nikita = is_person_handsome(nikita);
    char * about_vadim = is_person_handsome(vadim);

    printf("%s is %s\n", nikita.name, about_nikita);
    printf("%s is %s\n", vadim.name, about_vadim);
    return 0;
}

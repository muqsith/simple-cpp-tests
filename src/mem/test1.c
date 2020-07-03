#include <stdio.h>


struct City
{
    char *name;
    int year;
};


int main()
{
    struct City p1 = { "Paris", 2012 };

    struct City p2 = p1;


    printf("Name: %s, year: %d\n", p1.name, p1.year);

    printf("Name: %s, year: %d\n", p2.name, p2.year);

    p2.name = "Dubai";

    p2.year = 2015;

    printf("Name: %s, year: %d\n", p1.name, p1.year);

    printf("Name: %s, year: %d\n", p2.name, p2.year);

    /// conclusion : In C and C++ assigning is copying unless explicitly pointers are used

    struct City c = { "Muscat", 2015 };

    struct City *c3 = &c;

    struct City *c4 = &c;

    printf("c => Name: %s, year: %d\n", c.name, c.year);

    printf("c3 => Name: %s, year: %d\n", c3->name, c3->year);

    printf("c4 => Name: %s, year: %d\n", c4->name, c4->year);

    c3->name = "Jeddah";
    c3->year = 2015;

    printf("c => Name: %s, year: %d\n", c.name, c.year);

    printf("c3 => Name: %s, year: %d\n", c3->name, c3->year);

    printf("c4 => Name: %s, year: %d\n", c4->name, c4->year);



    // copying is expensive and referencing is cheap

}
#include <stdio.h>
#include <stdlib.h>


struct User
{
    char *name;
    char *email;
    int age;
};


int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@gmail.com";
    user.age = 98;
    printf("User name: %s User email: %s User age: %d", user.name, user.email, user.age);
    return 0;
}

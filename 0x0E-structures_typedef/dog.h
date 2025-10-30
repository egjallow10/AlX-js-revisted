#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct fo dog
 * @d: pointer to struct dog
 * @name: dogs name
 * @owner: dogs owner 
 * 
 */

struct dog
{
    char *name;
    char *owner;
    float age;
};


#endif
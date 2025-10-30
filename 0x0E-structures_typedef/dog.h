#ifndef DOG_H
#define DOG_H


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


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
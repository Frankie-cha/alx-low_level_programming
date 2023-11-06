#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner) 
{
    if (name == NULL || owner == NULL) 
    {
        return (NULL);
    }

    if (new_dog == NULL) 
    {
        return (NULL); 
    }

    if (new_dog->name == NULL) 
    {
        free(newDog); 
        return (NULL);
    }

    newDog->age = age;
    if (newDog->owner == NULL) 
    {
        free(newDog->name);
        free(newDog);   
        return (NULL);
    }

    return (newDog);
}

int main(void) 
{
    
    char name[] = "Buddy";
    char owner[] = "John";
    dog_t *myDog = new_dog(name, 2.5, owner);

    if (myDog == NULL) 
    {
        printf("Failed to create a new dog.\n");
    } 
    else 
    {
        printf("Dog Name: %s\n", myDog->name);
        printf("Dog Age: %.2f\n", myDog->age);
        printf("Dog Owner: %s\n", myDog->owner);
    }

    if (myDog != NULL) 
    {
        free(myDog->name);
        free(myDog->owner);
        free(myDog);
    }

    return (0);
}

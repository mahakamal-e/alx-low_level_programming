#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creat struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: Define a new type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

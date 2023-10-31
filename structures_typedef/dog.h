#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of dog, a str
 * @age: dog age, float
 * @owner: owner of dog, a str
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines new name for struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Attributes of the dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif

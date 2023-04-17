# ifndef _FILE_NAME_H_
# define _FILE_NAME_H_
/**
 * struct dog - define new type dog
 * @name: dog name
 * @age:  dog age
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int namesize(char *s);
int copyname(char *x, int size, char *y);
dog_t *new_dog(char *name, float age, char *owner);
#endif

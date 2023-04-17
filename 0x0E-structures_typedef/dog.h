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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

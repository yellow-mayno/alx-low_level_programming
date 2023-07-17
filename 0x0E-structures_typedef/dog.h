#ifndef DOG_H
#define DOG_H
/**
* struct dog - fdsfsdf
* @name: dsfgdsfg
* @age: dfgdfg
* @owner: dfgdfg
*
* Description: dfgdsdfs dsfsdfs
*/
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
	typedef struct dog dogt_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif

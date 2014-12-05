#include <stdio.h>

int main(int argc, char *argv[])
{
	/* create two arrays we care about */
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa",
	};

	/* safely get the sizes of ages */
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	/* first way using indexing */
	for (i = count - 1; i >= 0; i--) {
		printf("%s has %d years alive.\n",
			names[i], ages[i]);
	}

	printf("---\n");

	/* setup the pointers to the start of the arrays */

	/* second say using pointers */
	for (i = 0; i < count; i++) {
		printf("%s is %d years old.\n",
			names[i], ages[i]);
	}

	printf("---\n");

	/* third way, pointers are just arrays */
	for (i = 0; i < count; i++) {
		printf("%s is %d years old again.\n",
			names[i], ages[i]);
	}

	printf("---\n");

	/* fourth way with pointers in a stupid complex way */
	for (i = 0; i < count; i++)
	{
		printf("%s lived %d years so far.\n",
			names[i], ages[i]);
	}

	return 0;
}

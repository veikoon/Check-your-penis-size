#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	char* small = "Your penis is so small that";
	char* average = "Your penis";
	char* big = "Your penis is so big that";

	char* small_punchline[] = {
		"when you put it in a girl her immune system tries to fight it.",
		"if you laid it on a keyboard it would go all the way from A to Z.",
		"when you get in the shower you can hear the bacteria from the toilet laughing.",
		"you pee on your own nuts.",
		"it almost makes mine look average-sized."
	};

	char* average_punchline[] = {
		"is the same size as my father's",
		"is the same size as your sister's... Wait...",
		"is ... looking good O.o ...",
	};

	char* big_punchline[] = {
		"it exists only in quantum realm.",
		"it still has snow on it from last year.",
		"it has it's own dick, and your dick's dick is bigger than my dick.",
		"no matter where you go, your dick always gets there first.",
		"when it rains, the head of your dick doesn't get wet."
	};

	char* name = malloc(sizeof(char)*100);

	printf("Please enter your name: ");
	scanf("%s", name);

	int name_size = 0;
	for(int i = 0; i < strlen(name); i++)
		name_size += name[i];

	name_size = name_size % 25 + 10;

	char* size;
	char* size_punchline;
	if(name_size >= 25){
		size = big;
		size_punchline = big_punchline[(rand() % sizeof(big_punchline)/sizeof(char*))];
	}
	else if(name_size <= 20){
		size = small;
		size_punchline = small_punchline[(rand() % sizeof(small_punchline)/sizeof(char*))];
	}
	else{
		size = average;
		size_punchline = average_punchline[(rand() % sizeof(average_punchline)/sizeof(char*))];

	}

	printf("%s your dick is %d cm long.\n", name, name_size);
	printf("%s %s", size, size_punchline);
	return 0;
}
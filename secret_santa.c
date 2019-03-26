#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

static int AMOUNT_OF_PEOPLE = 6;

int main(void)
{
    srand((int)time(0));
    
    char* people[] = {
	"Logan",
	"Caleb",
	"Petra",
	"Niamh",
	"Emma",
	"Francois"
    };
    int chosen_people[AMOUNT_OF_PEOPLE];
    memset(&chosen_people, -1, AMOUNT_OF_PEOPLE * sizeof(int));

/*    for (int k=0; k < 6; k++) {
	printf("%d\n", chosen_people[k]);
	}*/
    
    for(int k=0; k < 6; k++) {
	printf("%s -> ", people[k]);

	int person_to_buy_for;
	do {
	    person_to_buy_for = rand() % 6;
	} while(person_to_buy_for == k ||
		chosen_people[person_to_buy_for] != -1);
	chosen_people[person_to_buy_for] = person_to_buy_for;

	printf("%s\n", people[person_to_buy_for]);
    }

    return 0;
}

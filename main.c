#include <stdio.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include <stdio.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include "record.h"

#define MAX_RECORDS 1000

// function prototypes
void input_handler(char[], Record[]);
void display_menu();

// main function
int main(){

  int i;

	Record records[MAX_RECORDS];

  for (i=0; i<MAX_RECORDS; i++){

    records[i].id = 0;

  }

  char user_input[64] = ""; 
	while(strcmp(user_input, "99") != 0){
		display_menu();
		printf("\nSelect a menu> ");
		fgets(user_input, 64, stdin);
		user_input[strlen(user_input)-1] = '\0';
		input_handler(user_input, records);
	}

	return 0;
}


// Function: input_handler()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Handles the user input and invokes functions that correspond to the user input
void input_handler(char input[], Record records[]){

	// TODO: Modify this function as you need

	if(!strcmp(input, "1"))
		add_a_record(records);
  else if(!strcmp(input, "2"))
    read_from_record(records);	
	else if(!strcmp(input, "3"))
		print_all_records(records);	
  else if(!strcmp(input, "4"))
    print_a_record(records);	 
  else if(!strcmp(input, "5"))
		print_few_records(records);	  
  else if(!strcmp(input, "6"))
    export_all_records(records);
  else if(!strcmp(input, "7"))
		update_a_record(records);	
  else if(!strcmp(input, "8"))
		delete_a_record(records);	
  else if(!strcmp(input, "9"))
    delete_all_records(records);
	else if(!strcmp(input, "10"))
		defragment(records);
	else if(!strcmp(input, "11"))
		display_stats(records);	
	else if(!strcmp(input, "99"))
		printf("Terminating... bye!\n"); // Quit - no operation (an empty statement with a semi-colon)
	else
		printf("Unknown menu: %s \n\n", input);
}



// Function: display_menu()
// Input: none
// Output: none
// - Leave a brief information about the function
void display_menu(){

	// TODO: Modify this function as you need

	printf("******************************\n");
	printf(" Membership management system \n");
	printf("******************************\n");
	printf(" 1. Add a new member\n");
  printf(" 2. Add new member from file\n");
	printf(" 3. Print all members\n");
  printf(" 4. Print a member\n");
  printf(" 5. Print few members\n");
  printf(" 6. Save members to file\n");
  printf(" 7. Update a member\n");
  printf(" 8. Delete a member\n");
  printf(" 9. Delete all members\n");
	printf(" 10. Optimize (defragment) the records\n");
	printf(" 11. Member statistics\n");
	printf(" 99. Quit\n");
}include "record.h"

#define MAX_RECORDS 1000

// function prototypes
void input_handler(char[], Record[]);
void display_menu();

// main function
int main(){

  int i;

	Record records[MAX_RECORDS];

  for (i=0; i<MAX_RECORDS; i++){

    records[i].id = 0;

  }

  char user_input[64] = ""; 
	while(strcmp(user_input, "99") != 0){
		display_menu();
		printf("\nSelect a menu> ");
		fgets(user_input, 64, stdin);
		user_input[strlen(user_input)-1] = '\0';
		input_handler(user_input, records);
	}

	return 0;
}


// Function: input_handler()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Handles the user input and invokes functions that correspond to the user input
void input_handler(char input[], Record records[]){

	// TODO: Modify this function as you need

	if(!strcmp(input, "1"))
		add_a_record(records);
	else if(!strcmp(input, "2"))
		print_all_records(records);	
  else if(!strcmp(input, "3"))
		update_a_record(records);	
  else if(!strcmp(input, "4"))
		delete_a_record(records);	
	else if(!strcmp(input, "5"))
		defragment(records);
	else if(!strcmp(input, "6"))
		display_stats(records);	
	else if(!strcmp(input, "99"))
		printf("Terminating... bye!\n"); // Quit - no operation (an empty statement with a semi-colon)
	else
		printf("Unknown menu: %s \n\n", input);
}



// Function: display_menu()
// Input: none
// Output: none
// - Leave a brief information about the function
void display_menu(){

	// TODO: Modify this function as you need

	printf("******************************\n");
	printf(" Membership management system \n");
	printf("******************************\n");
	printf(" 1. Add a new member\n");
	printf(" 2. Print all members\n");
  printf(" 3. Update a member\n");
  printf(" 4. Delete a member\n");
	printf(" 5. Optimize (defragment) the records\n");
	printf(" 6. Member statistics\n");
	printf(" 99. Quit\n");
}

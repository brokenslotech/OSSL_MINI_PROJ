#include <stdio.h>
#include <string.h>
#include "base.h"

// Function: print_all_records()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function
void print_all_records(Record records[]){
	// TODO: Modify this function as you need
  int i;
  printf("\n");
  for (i=0; i<1000; i++){
  
    if(records[i].id != 0){
    
      printf("User %d\n",records[i].id);
      printf("-------\n");
      printf("ID: %d\n", records[i].id);
      printf("Name: %s\n", records[i].name);
      printf("Gender: %s\n", records[i].gender);
      printf("DOB: %d-%d-%d\n", records[i].dob.year,records[i].dob.month, records[i].dob.date);
      printf("Position: %s\n", records[i].position);
      printf("Expiration: %d-%d-%d\n", records[i].expire.year,records[i].expire.month, records[i].expire.date);
      printf("\n");

    }
  }

  printf("Displaying All Members\n\n");
}


// Function: add_a_record()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function
void add_a_record(Record records[]){
	// TODO: Modify this function as you need
  int id;
  char check = 'Y';

  while(check == 'Y'){
    printf("\nAdding New User:\n");
    printf("----------------\n");
    printf("Enter ID: ");
    scanf("%d", &id);

    if(!(records[id].id !=0)){
      records[id].id = id;
      getchar();

      printf("Enter Name: ");
      fgets(records[id].name, 50, stdin);
      strtok(records[id].name, "\n");

      printf("Enter Gender(M,F): ");
      scanf("%c", records[id].gender);
    

      printf("Enter DOB(YYYY-MM-DD): "); 
      scanf("%d-%d-%d", &records[id].dob.year,&records[id].dob.month, &records[id].dob.date);
      getchar();

      printf("Enter Position: ");
      fgets(records[id].position, 9, stdin);
      strtok(records[id].position, "\n");

      printf("Enter Expiration Date(YYYY-MM-DD): "); 
      scanf("%d-%d-%d", &records[id].expire.year,&records[id].expire.month, &records[id].expire.date);
    }
    else{
      printf("User with ID Already Exists!\n");
    }
    getchar();
    printf("\nAdd More Users?(Y/N): ");
    scanf("%c",&check);
    getchar();
    printf("\n");

  }
  
}


// TODO: Add more functions to fulfill the requirements

void update_a_record(Record records[]){

  int id;
  char check1 = 'Y', check2 = 'Y';

  while(check1 == 'Y'){
    printf("\nUpdating New User:\n");
    printf("----------------\n");
    printf("Enter ID of User to be Updated: ");
    scanf("%d", &id);
    while(check2 == 'Y'){
      if(records[id].id !=0){
        char field[64] = "";

        printf("\nUpdating User with ID: %d\n",id);
        printf("-------------------------\n");
        printf(" 1. Name\n 2. Gender\n 3. DOB\n 4. Position\n 5. Expiration Date\n");
        printf("\nSpecify Field to Be Updated> ");

        getchar();
        fgets(field, 64, stdin);
        field[strlen(field)-1] = '\0';

        if(!strcmp(field, "1")){
          printf("\nEnter Name: ");
          fgets(records[id].name, 50, stdin);
          strtok(records[id].name, "\n");
        }
        else if(!strcmp(field, "2")){
          printf("\nEnter Gender(M,F): ");
          scanf("%c", records[id].gender);
          getchar();
        }
        else if(!strcmp(field, "3")){
          printf("\nEnter DOB(YYYY-MM-DD): "); 
          scanf("%d-%d-%d", &records[id].dob.year,&records[id].dob.month, &records[id].dob.date);
          getchar();
        }
        else if(!strcmp(field, "4")){
          printf("\nEnter Position: ");
          fgets(records[id].position, 9, stdin);
          strtok(records[id].position, "\n");
        }
        else if(!strcmp(field, "5")){
          printf("\nEnter Expiration Date(YYYY-MM-DD): "); 
          scanf("%d-%d-%d", &records[id].expire.year,&records[id].expire.month, &records[id].expire.date);
        }

      }
      else{
        printf("\nUser with ID Does Not Exist!\n");
        break;
      }
      getchar();
      printf("\nUpdate More Fields?(Y/N): ");
      scanf("%c",&check2);

    }

    getchar();
    printf("\nUpdate More Users?(Y/N): ");
    scanf("%c",&check1);
    getchar();
    printf("\n");

  }

}

void delete_a_record(Record records[]){

    int id;
    char check1 = 'Y';  

    printf("\nUpdating New User:\n");
    printf("----------------\n");
    printf("Enter ID of User to be Deleted: ");
    scanf("%d", &id);
    while(check1 == 'Y'){
      if(records[id].id !=0){
        char field[64] = "";

        printf("-------------------------\n");
        printf("Deleting User...\n");
        printf("Succesfully Deleted!\n");

        records[id].id = 0; 
        strcpy(records[id].name, "");
        strcpy(records[id].gender, "");
        records[id].dob.year = 0;  
        records[id].dob.month = 0;  
        records[id].dob.date = 0;  
        strcpy(records[id].position,"");
        records[id].expire.year = 0;  
        records[id].expire.month = 0;  
        records[id].expire.date = 0;  

      }
      else{
        printf("\nUser with ID Does Not Exist!\n");
        break;
      }

  

    getchar();
    printf("\nDelete More Users?(Y/N): ");
    scanf("%c",&check1);
    getchar();
    printf("\n");

  }



}

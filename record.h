#ifndef _RECORD_H_
#define _RECORD_H_


typedef struct{

  int year; 
  int month;
  int date;

} Date;


// type defition
typedef struct{
	int id;

	// TODO: define your own structure type here
  char name[50];	      // Name of member.
  char gender[1];     	// M,F
  Date dob; 		        // DOB of the member. 
  char position[9];     // artist, producer, engineer, staff. 
  Date expire;		      // Contract expiration date of member. 

} Record;

#endif

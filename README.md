# Record Label Member Mangement System 

The proposed purpose of the program was to create a member management system of a record label. Each member was organized by using a structure with several elements including name, role, contract date, contract expiration date, and so on. The system was designed to keep track of various members housed in a record label and to systematically organize them in a structural system. The program contains various functions which allows the user to add, read, update, and delete single or multiple member data as they wish. 

## Functions

- **Create: Create a new data record from a data file or standard input. 
- **Read: Print a record, multiple records, or all records to standard output. 
- **Update: Update a specific field of a record, multiple, or all records. 
- **Delete: Delete a record, multiple, or all records. 

## Member Parameters 

1. Name
2. Gender
3. DOB
4. Position (Artist, Producer, Engineer, Staff, etc.) 
5. Date of Hire 
6. Contract Expiration Date

## List of Files

1. 3 .h Header Files
- base.h: all functions 
- extras.h: defragment and display stats
- record.h: member structure classification 
2. 3 .c Files 
- main.c: display menu and function calls 
- base.c: function code for CRUD
- extras.c: function code for extra implementation
3. members.txt file
- Text file with example member data. 

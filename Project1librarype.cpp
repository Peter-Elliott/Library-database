#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "iostream.h" //please ignore the error
/*Header file I created*/
#include "Members.h"   //members acounts(enter/view)
#include "Transact.h"  //transacting(borrow/return)
#include "Admin.h"    //administration(newbook/delete book/deletemember)

/*class one: members*/
/* Enter a menbers record
   Read a member record */

/*class two: Books*/
/*Borrow a book
  REturn a book*/

/*class three: Administration*/
/* Enter a book
   Delete a book
   Delete a member*/

int main(void)
{

int iOption = 0; //what the user chooses to do
int iMember = 0; //what member action do the user take
int iAction = 0; // barrow or retun
int iAdmin = 0;  // administration

/*Please note all detail is to be done after programming*/

/*This is the main menu*/
printf("\n\t*************************************************");
printf("\n\t**                                             **");
printf("\n\t**       The North stone Libary database       **");
printf("\n\t**     Please choose one of the following      **");
printf("\n\t**                                             **");
printf("\n\t*************************************************");

printf("\n\t\t1. for member records\n\t\t2. for book transactions");
printf("\n\t\t3. for adminstion uses\n\t\t4. for the system to shutdown:");
cin>>iOption; //due to some probles scanf did not work with an interger
              //the program kept crashing so cin was used as no errors occured

/*please note that this is not fully done when done each iotion will be a class
giving 3 classes to the program*/
if (iOption == 1){
            CMembers libMember;
            system("cls");
            printf("\n\t*************************************************");
            printf("\n\t**                                             **");
            printf("\n\t**       The North stone Libary database       **");
            printf("\n\t**     Please choose one of the following      **");
            printf("\n\t**                                             **");
            printf("\n\t*************************************************");
            printf("\n\t\t1. to enter a new member record\n\t\t2. to view an existing record:");
            cin>>iMember;
            if (iMember == 1){
                              libMember.iRecordEnter();
                              getch();
                              system("cls");
                              /* this causes a loop back to the main menu
                                 were the user can keep using the program
                                 or then choose to shut down the programm*/
                              main();
                              } // end of iMember 1
            if (iMember == 2){
                              libMember.iRecordView();
                              getch();
                              system("cls");
                              main();
                              }// end of iMember 2
            if (iMember >= 3 || iMember == 0){
                              system("cls");
                              
                              printf("\n\t*************************************************");
                              printf("\n\t**                                             **");
                              printf("\n\t**       The North stone Libary database       **");
                              printf("\n\t**       Invaid option please try again        **");
                              printf("\n\t**       Press any button to continue          **");
                              printf("\n\t**                                             **");
                              printf("\n\t*************************************************");
                              getch();
                              system("cls");
                              main();
                              }// end of iMember 3
} //end of iOption 1


if (iOption == 2){
                  CBook libBook;
                  system("cls");
                  printf("\n\t*************************************************");
                  printf("\n\t**                                             **");
                  printf("\n\t**       The North stone Libary database       **");
                  printf("\n\t**     Please choose one of the following      **");
                  printf("\n\t**                                             **");
                  printf("\n\t*************************************************");

                  printf("\n\t\t1. for borrowing a book\n\t\t2. for returning a book:");
                  cin>>iAction;
                  if (iAction == 1){
                                    libBook.iBookBorrow();
                                    getch();
                                    system("cls");
                                    main();
                                    }// end of iAction 1 
                  if (iAction == 2){
                                    libBook.iBookReturn();
                                    getch();
                                    system("cls");
                                    main(); 
                                    }// end of iAction 2                 
                  if (iAction >= 3 || iAction == 0){
                                    system("cls");
                                    printf("\n\t*************************************************");
                                    printf("\n\t**                                             **");
                                    printf("\n\t**       The North stone Libary database       **");
                                    printf("\n\t**       Invaid option please try again        **");
                                    printf("\n\t**       Press any button to continue          **");
                                    printf("\n\t**                                             **");
                                    printf("\n\t*************************************************");
                                    getch();
                                    system("cls");
                                    main();
                                    }// end of iAction 3 
} //end of iOption 2

if (iOption == 3){
                  CAdmin libStaff;
                  system("cls");
                  printf("\n\t*************************************************");
                  printf("\n\t**                                             **");
                  printf("\n\t**       The North stone Libary database       **");
                  printf("\n\t**     Please choose one of the following      **");
                  printf("\n\t**                                             **");
                  printf("\n\t*************************************************");
                  
                  printf("\n\t\t1. for entering new book to system\n\t\t2. for deleteing a book from system");
                  printf("\n\t\t3. for deleteing a member record\n\t\tAnything else to return to main:");
                  cin>>iAdmin;
                  if (iAdmin == 1){
                                   libStaff.iBookEnter();
                                   getch();
                                   system("cls");
                                   main();
                                   }// end of iAdmin 1
                  if (iAdmin == 2){
                                   //how to delete the record
                                   libStaff.iBookDelete();
                                   getch();
                                   system("cls");
                                   main();
                                   }// end of iAdmin 2
                  if (iAdmin == 3){
                                   libStaff.iMemberDelete();
                                   getch();
                                   system("cls");
                                   main();
                                   }// end of iAdmin 3
                  if (iAdmin >= 4 || iAdmin == 0){
                                   system("cls");
                                   printf("\n\t*************************************************");
                                   printf("\n\t**                                             **");
                                   printf("\n\t**       The North stone Libary database       **");
                                   printf("\n\t**       Invaid option please try again        **");
                                   printf("\n\t**       Press any button to continue          **");
                                   printf("\n\t**                                             **");
                                   printf("\n\t*************************************************");
                                   getch();
                                   system("cls");
                                   main();
                                   }// end of iAdmin 4
} //end of iOption 3

if (iOption == 4){
                  system("cls");
                  printf("\n\t*************************************************");
                  printf("\n\t**                                             **");
                  printf("\n\t**       The North stone Libary database       **");
                  printf("\n\t**          system is now shuting down         **");
                  printf("\n\t**                                             **");
                  printf("\n\t*************************************************");
                  getch();
                  exit(0);
                  }// end of iOption 4
      
if (iOption >= 5 || iOption == 0){
                  system("cls");
                 printf("\n\t*************************************************");
                 printf("\n\t**                                             **");
                 printf("\n\t**       The North stone Libary database       **");
                 printf("\n\t**       Invaid option please try again        **");
                 printf("\n\t**       Press any button to continue          **");
                 printf("\n\t**                                             **");
                 printf("\n\t*************************************************");

                 getch();
                 system("cls");
                 main();
                 } // end of iOption 5

//to find any errors with the ioptions
printf("\n\t\tYou should not see this if you do \n\t\tthere is a problem with iOption%i", iOption);
exit(0);
} /* end of main */

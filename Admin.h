
class CAdmin{
             public:
                    CAdmin();
                    ~CAdmin() { }
                    int iBookEnter(void);//enter new book 
                    int iBookDelete(void); //expunge book from the system
                    int iMemberDelete(void); //expunge member from the system
                    /* expunge is to permatly remove a record or file from 
                       a computers system*/
                    
             private:
                     struct Book{
                                  // int iCode; //use to search book what
                                   /* Due to a set of problems with long named variables
                                      each variable is 30 and not 10 as an error kept happening
                                      with a lower value*/
                                   char sTitle[25]; 
                                   char sAuthor[20]; 
                                   char sIsbn[15]; 
                                   char sType[10]; //sci-fi, horror, action and etc...
                                   char sFormat[15]; //paperback, hardback or kindle
                                  } myBook;
                                  };/* end of class CAdmin */


CAdmin::CAdmin()
      {
      //Books
      strcpy(myBook.sTitle, " ");
      strcpy(myBook.sAuthor, " ");
      strcpy(myBook.sIsbn, " ");
      strcpy(myBook.sType, " ");
      strcpy(myBook.sFormat, " ");
      }; /* end of CAdmin::CAdmin */


int CAdmin::iBookEnter(void)
{
FILE *fpbook;

fpbook = fopen("e:\\Books.txt","a");

    system("cls");
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**              Enter a new Book               **");
    printf("\n\t**  Pleas remember to use _ instead of space   **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\t\tPlease enter the Books title: ");
    scanf("%s", myBook.sTitle);

    printf("\n\t\tPlease enter the Author's name: ");
    scanf("%s", myBook.sAuthor);

    printf("\n\t\tPlease enter the Book's type: ");
    scanf("%s", myBook.sType);

    printf("\n\t\tPlease enter the format: ");
    scanf("%s", myBook.sFormat);

    printf("\n\t\tPlease enter the ISBN number: ");
    scanf("%s", myBook.sIsbn);
  
    
    printf("\n\n\t\tAll data has been entered");
    getch();
    
    system("cls");
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**          Enter a new book record            **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\t\tBelow is all of the book details");
    printf("\n\t\tThe book 's Title is %s ", myBook.sTitle);
    printf("\n\t\tIt was written by %s ", myBook.sAuthor);
    printf("\n\t\tIt is a %s ", myBook.sType);
    printf("\n\t\tIts avalible format is %s ", myBook.sFormat);
    printf("\n\t\tISBN code: %s ", myBook.sIsbn);
    
    /*The problem is here*/
    fwrite(&myBook,sizeof(myBook),1,fpbook);
    
    fclose(fpbook);

printf("\n\t\tPress any key to continue...");
return(0);
} /* end of CAdmin::iBookEnter */


//Need to find out how to delete selected information from a file
//as i only found how to delete a file
int CAdmin::iBookDelete(void)
{
int iDel = 0; 

    system("cls");
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**            Delete a Book record             **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
     
    printf("\n\n\t\tDo you wish to delete the book records \n\t\tIf yes enter 1 to delete the file \n\t\tPress anything else to cancel:");
    cin >> iDel;
    
    if (iDel == 1)
        {
        
        system("cls");
        printf("\n\t*************************************************");
        printf("\n\t**                                             **");
        printf("\n\t**       The North stone Libary database       **");
        printf("\n\t**            Delete a Book record             **");
        printf("\n\t**                                             **");
        printf("\n\t*************************************************");
        
        //unable to find cod for deleting sected record or file
        printf("\n\n\t\tThe books file has not been deleted \n\t\tThere is an error in the coding");
        }; // end of iDel 1
          
    if (iDel >= 2 || iDel == 0)
        {
        system("cls");
        printf("\n\t*************************************************");
        printf("\n\t**                                             **");
        printf("\n\t**       The North stone Libary database       **");
        printf("\n\t**            Delete a Book record             **");
        printf("\n\t**                                             **");
        printf("\n\t*************************************************");
    
        puts("\n\n\t\tBooks file was not deleted");
        };// end of iDel 2

printf("\n\t\tPress any key to continue...");
return(0);
} /* end of CAdmin::iBookDelete */

int CAdmin::iMemberDelete(void)
    {
    int iDel = 0; 
    
    system("cls");
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**            Delete a Member record           **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\n\t\tDo you wish to delete the member records \n\t\tIf yes enter 1 \n\t\tPress anything else to cancel:");
    cin >> iDel;
    
    if (iDel == 1)
        {
        
        system("cls");
        printf("\n\t*************************************************");
        printf("\n\t**                                             **");
        printf("\n\t**       The North stone Libary database       **");
        printf("\n\t**            Delete a Member record           **");
        printf("\n\t**                                             **");
        printf("\n\t*************************************************");
        //system("del Books.txt");
        printf("\n\n\t\tThe members file has been deleted \n\tThere is an error in the coding");
        }; // end of iDel 1
          
    if (iDel >= 2 || iDel == 0)
        {
        system("cls");
        printf("\n\t*************************************************");
        printf("\n\t**                                             **");
        printf("\n\t**       The North stone Libary database       **");
        printf("\n\t**            Delete a Member record           **");
        printf("\n\t**                                             **");
        printf("\n\t*************************************************");
    
        puts("\n\n\t\tMembers file was not deleted");
        }; // end of iDel 2

printf("\n\t\tPress any key to continue...");    
return(0);
} /* end of CAdmin::iMemberDelete */

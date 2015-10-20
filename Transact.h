class CBook{
            private:
                    struct Booklist
                                   {
                                   // int iCode; //use to search book what
                                   char sTitle[30]; 
                                   char sAuthor[20]; 
                                   char sIsbn[15]; 
                                   char sType[10]; //sci-fi, horror, action and etc...
                                   char sFormat[15]; //paperback, hardback or kindle
                                   } myBook;
                    
            public:
                   CBook();
                   ~CBook() { }
                   int iBookBorrow(void);
                   int iBookReturn(void);
            }; /* end of class CBook */
            
CBook::CBook()
   {
   strcpy(myBook.sTitle, " ");
   strcpy(myBook.sAuthor, " ");
   strcpy(myBook.sIsbn, " ");
   strcpy(myBook.sType, " ");
   strcpy(myBook.sFormat, " ");
  // myCustomer.iBooks = 0;
  } /* CBook::CBook */
  
int CBook::iBookBorrow(void)
{
FILE *fp;
int iOffset;
int iBookno = 0;
int iRecordno = 0;

fp = fopen("e:\\Books.txt", "r+");

 if ( (fp = fopen("e:\\Books.txt", "r+")) == NULL)
{
 system("cls");
 printf("\n\t*************************************************");
 printf("\n\t**                                             **");
 printf("\n\t**       The North stone Libary database       **");
 printf("\n\t**             Borrowing a Book                **");
 printf("\n\t**                                             **");
 printf("\n\t*************************************************");

 //error: headerfileName which part of class - random binary
 printf("\n\n\t\tError: TBB-10101000");
 printf("\n\t\tCan't open file or file directory");
 printf("\n\t\tPress any key to continue...");
 //the return(0); will return the user to main
 return(0);
 } // end of if ( (fp = fopen("e:\\members.txt", "r")) == NULL)

    system("cls");
    
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**             Borrowing a Book                **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\t\tPlease enter the books number code:");
    cin >> iBookno;
  
    iOffset =  sizeof(myBook) * iBookno;
    
    fseek(fp,iOffset,0); 
    
    fread(&myBook,sizeof(myBook),1,fp);
    
    printf("\n\tBelow is a all the books details");
    printf("\n\t\tThe Book is %s", myBook.sTitle);
    printf("\n\t\tWritten by %s", myBook.sAuthor);
    printf("\n\t\tThis is a %s", myBook.sType);
    printf("\n\t\tThe format %s", myBook.sFormat);
    printf("\n\t\tISBN code %s",myBook.sIsbn ); 

fclose(fp);
    
printf("\n\t\tPress any key to continue...");
return(0);
} /* CBook::iBookBorrow */



int CBook::iBookReturn(void)
{
FILE *fp;
int iOffset;
int iBookno = 0;
int iRecordno = 0;
float fFee = 0.0;
float fDays = 0.0; // float as interger did not work


/* What i want to do is: */
/* 1.enter the books code number the one your returning
   2.charge the member 0.05 for each day
   3.Take one from the users account on the number of books to borrowthe 
   sbook 1 2 or 3 of the one returning to equal = " " */


fp = fopen("e:\\Books.txt", "r+");

 if ( (fp = fopen("e:\\Books.txt", "r+")) == NULL)
{
 system("cls");
 printf("\n\t*************************************************");
 printf("\n\t**                                             **");
 printf("\n\t**       The North stone Libary database       **");
 printf("\n\t**             Returning a Book                **");
 printf("\n\t**                                             **");
 printf("\n\t*************************************************");

 //error: headerfileName which part of class - random binary
 printf("\n\n\t\tError: TBR-11001011");
 printf("\n\t\tCan't open file or file directory");
 printf("\n\t\tPress any key to continue...");
 //the return(0); will return the user to main
 return(0);
 } // end of  if ( (fp = fopen("e:\\Books.txt", "r+")) == NULL)

 
    system("cls");
    
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**             Returning a Book                **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");

    printf("\n\t\tPlease enter the books order numer:");
    cin >> iBookno;
 
    iOffset =  sizeof(myBook) * iBookno;
    
    fseek(fp,iOffset,0); 
    
    fread(&myBook,sizeof(myBook),1,fp);
    
    printf("\n\t\tBelow are the details of the returning book");
    printf("\n\t\tThe Book is %s", myBook.sTitle);
    printf("\n\t\tWritten by %s", myBook.sAuthor);
    printf("\n\t\tThis is a %s", myBook.sType);
    printf("\n\t\tThe format %s", myBook.sFormat);
    printf("\n\t\tISBN code %s",myBook.sIsbn);         
    
    getch();

fclose(fp);

    system("cls");
    
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**             Returning a Book                **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");

printf("\n\t\tPlease enter the number of days that \n\t\t%s was borrowed: ", myBook.sTitle);
cin>>fDays;

fFee = fDays * 0.05;

// %5.2f means 00000.00 price
printf("\n\t\tYour return fee is %5.2f", fFee); 

printf("\n\t\tPress any key to continue...");
return(0);          
} /* end of CBook::iBookReturn */

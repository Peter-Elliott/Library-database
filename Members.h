class CMembers{
               private:
                    struct Customer{
                                    char sName[20]; //the persons name
                                    char sSurname[20]; //the persons last name
                                    char sAddress[20]; //were they live
                                    //therse are lower as these are simple information
                                    char sAge[10]; //the persons age
                                    char sPhone[10]; // there contact information
                                    //int iRecnum; // this the rembers code number 
                                    
                                    //need to ask about
                                    
                                    } myCustomer;
              
             public:
                    CMembers();
                    ~CMembers() { }
                    int iRecordEnter(void);
                    int iRecordView(void);
              }; /* end of class CMembers */

CMembers::CMembers()
    {
    //member details
    strcpy(myCustomer.sName, " ");
    strcpy(myCustomer.sSurname, " ");
    strcpy(myCustomer.sAddress, " ");
    strcpy(myCustomer.sAge, " ");  
    strcpy(myCustomer.sPhone, " ");
    }; /* end of CMembers::CMembers */


int CMembers::iRecordEnter(void)
{
FILE *fpMember;

fpMember = fopen("e:\\members.txt","a");

    system("cls");
    
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**          Enter a new member record          **");
    printf("\n\t**  Pleas remember to use _ instead of space   **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\t\tPlease enter your name:");
    scanf("%s", myCustomer.sName);

    printf("\n\t\tPlease enter your Surname:");
    scanf("%s", myCustomer.sSurname);

    printf("\n\t\tPlease enter your Age:");
    cin>>myCustomer.sAge;

    printf("\n\t\tPlease enter your Address:");
    scanf("%s", myCustomer.sAddress);
    
    printf("\n\t\tPlease enter your phone number:");
    cin>> myCustomer.sPhone;    
    
    printf("\n\n\t\tAll data has been entered");
    getch();
    
    system("cls");
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**  Below is a copy of all the members details **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    printf("\n\t\tYour name is %s", myCustomer.sName);
    printf("\n\t\tYour last name is %s", myCustomer.sSurname);
    printf("\n\t\tYou  are %s years old", myCustomer.sAge);
    printf("\n\t\tYour Address is %s", myCustomer.sAddress);
    printf("\n\t\tYour phone number is %s", myCustomer.sPhone); 
        
    fwrite(&myCustomer,sizeof(myCustomer),1,fpMember);
    
    fclose(fpMember);
    
printf("\n\t\tPress any key to continue...");

return(0);
} /* end of CMembers::iRecordEnter */

int CMembers::iRecordView(void)
{
FILE *fpMember;
int iOffset;
int iRecordno = 0;

fpMember = fopen("e:\\members.txt", "r+");

 if ( (fpMember = fopen("e:\\members.txt", "r+")) == NULL)
{
 system("cls");
 printf("\n\t*************************************************");
 printf("\n\t**                                             **");
 printf("\n\t**       The North stone Libary database       **");
 printf("\n\t**          Viewing a menber record            **");
 printf("\n\t**                                             **");
 printf("\n\t*************************************************");

 //error: headerfileName which part of class - random binary
 printf("\n\n\t\tError: MRV-01011001");
 printf("\n\t\tCan't open file or file directory");
 printf("\n\t\tPress any key to continue...");
 //the return(0); will return the user to main
 return(0);
 } // end of if ( (fp = fopen("e:\\members.txt", "r")) == NULL)

 
    system("cls");
    
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**          Viewing a menber record            **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
        
    printf("\n\n\tEnter the Record number:");
    cin >> iRecordno;
 
    iOffset =  sizeof(myCustomer) * iRecordno;
    
    fseek(fpMember,iOffset,0); 
    
    fread(&myCustomer,sizeof(myCustomer),1,fpMember);
    
    system("cls");
        
    printf("\n\t*************************************************");
    printf("\n\t**                                             **");
    printf("\n\t**       The North stone Libary database       **");
    printf("\n\t**          Viewing a menber record            **");
    printf("\n\t**                                             **");
    printf("\n\t*************************************************");
    
    printf("\n\t\tBelow is all the members details");
    printf("\n\t\tYour member code is %i", iRecordno);
    printf("\n\t\tYour name is %s", myCustomer.sName);
    printf("\n\t\tYour last name is %s", myCustomer.sSurname);
    printf("\n\t\tYou  are %s years old", myCustomer.sAge);
    printf("\n\t\tYour Address is %s", myCustomer.sAddress);
    printf("\n\t\tYour phone number is %s", myCustomer.sPhone); 
 
    fclose(fpMember);

printf("\n\t\tPress any key to continue...");
return(0);
} /* end of CMembers::iRecordEnter */

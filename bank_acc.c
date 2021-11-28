
 #include<stdio.h>
struct bank_info
{
    int bank_bal, pin, namt;
    char acc_no[50], name[30];
};
struct bank_info accepting_details()
{
    struct bank_info temp;
    printf("\nEnter the account holder's name :\n");
    fflush(stdin);
    gets(temp.name);
    printf("Enter the account number :\n");
    fflush(stdin);
    gets(temp.acc_no);
    printf("Enter the bank balance :\n");
    scanf("%d", &temp.bank_bal);
    printf("Enrter pin number :\n");
    scanf("%d", &temp.pin);
    return temp;
}

void print_detais(struct bank_info ob)
{
    printf("\nAccount holder's name is %s\n", ob.name);
    printf("\nAccount number is : %s\n", ob.acc_no);
    printf("\nPin is : %d\n", ob.pin);
    printf("\nAccount balance is : %d\n", ob.bank_bal);
}
int main()
{
    int choice, ppin, pbal, i, flag, flag1, temp_amt, temp_pin;
    char acn[50];
    struct bank_info p1, p2, p3, p4;
    printf("\nAccepting bank details of person 1 :");
    p1= accepting_details();
    printf("\nAccepting bank details of person 2 :");
    p2=accepting_details();
    printf("\nAccepting details of person 3 :");
    p3=accepting_details();
    printf("\nAccepting details of person 4 :\n");
    p4=accepting_details();
   do
   {
     printf("\n\n<---------Menu bar--------->\n");
    printf("Press 1 for : Deposit\n");
    printf("Press 2 for : Withdrawal\n");
    printf("Press 3 for : Pin change\n");
    printf("Press 4 for : Check balance\n");
    printf("Press 5 for : Show details\n");
    printf("Press 6 for : Exit\n\n");
    printf("Enter your choice :");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 : printf("\nEnter your account number :");
        check_acn :
        fflush(stdin);
        gets(acn);

        i=0;
        while(acn[i]!='\0')
        {
            if(acn[i]==p1.acc_no[i]||acn[i]==p2.acc_no[i]||acn[i]==p3.acc_no[i]||p4.acc_no[i])
           
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            
             printf("\nEnter your pin :");
             check_pin :
             scanf("%d", &ppin);
            if(ppin==p1.pin)
           {
              printf("\nEnter the amount to deposit : ");
              scanf("%d", &temp_amt);
              p1.namt = p1.bank_bal + temp_amt;
              printf("\nYour new balance is %d ", p1.namt);
              p1.bank_bal=p1.namt;

           }
           else if(ppin==p2.pin)
           {
              printf("\nEnter the amount to deposit : ");
              scanf("%d", &temp_amt);
              p2.namt = p2.bank_bal + temp_amt;
              printf("\nYour new balance is %d ", p2.namt);
              p2.bank_bal=p2.namt;


           }
           else if(ppin==p3.pin)
           {
              printf("\nEnter the amount to deposit : ");
              scanf("%d", &temp_amt);
              p3.namt = p3.bank_bal + temp_amt;
              printf("Your new balance is %d ", p3.namt);
              p3.bank_bal=p3.namt;


           }
           else if(ppin==p4.pin)
           {
              printf("Enter the amount to deposit : ");
              scanf("%d", &temp_amt);
              p4.namt = p4.bank_bal + temp_amt;
              printf("Your new balance is %d ", p4.namt);
              p4.bank_bal=p4.namt;


           }
           else
           {
               printf("you entered the wrong pin\n");
               printf("Please re-enter the pin : ");
               goto check_pin;
           }

        }
        else
        {
            printf("You entered the wrong account number !\n");
            printf("Please re-Enter the account number\n");
            goto check_acn;
        }
        break;
        case 2: printf("Enter your account number :");
        check_ac5 :
        fflush(stdin);
        gets(acn);

        i=0;
        while(acn[i]!='\0')
        {
            if(acn[i]==p1.acc_no[i]||acn[i]==p2.acc_no[i]||acn[i]==p3.acc_no[i]||p4.acc_no[i])
           
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            
             printf("Enter your pin :");
             check_pin1 :
             scanf("%d", &ppin);
            if(ppin==p1.pin)
           {
              printf("Enter the amount to withdraw : ");
              scanf("%d", &temp_amt);
              if(temp_amt > p1.bank_bal)
              {
                  printf("You don't have sufficient balance\n");
                   break;
              }
              else
              { 
              p1.namt = p1.bank_bal - temp_amt;
              printf("Your new balance is %d ", p1.namt);
              p1.bank_bal=p1.namt;
              }

           }
           else if(ppin==p2.pin)
           {
              printf("Enter the amount to withdraw : ");
              scanf("%d", &temp_amt);
             if(temp_amt > p2.bank_bal)
              {
                  printf("You don't have sufficient balance\n");
                   break;
              }
              else
              { 
              p2.namt = p2.bank_bal - temp_amt;
              printf("Your new balance is %d ", p2.namt);
              p2.bank_bal=p2.namt;
              }

           }
           else if(ppin==p3.pin)
           {
              printf("Enter the amount to withdraw : ");
              scanf("%d", &temp_amt);
              if(temp_amt > p3.bank_bal)
              {
                  printf("You don't have sufficient balance\n");
                   break;
              }
              else
              { 
              p3.namt = p3.bank_bal - temp_amt;
              printf("Your new balance is %d ", p3.namt);
              p3.bank_bal=p3.namt;
              }


           }
           else if(ppin==p4.pin)
           {
              printf("Enter the amount to withdraw : ");
              scanf("%d", &temp_amt);
              if(temp_amt > p4.bank_bal)
              {
                  printf("You don't have sufficient balance\n");
                  break;
              }
              else
              { 
              p4.namt = p4.bank_bal - temp_amt;
              printf("Your new balance is %d ", p4.namt);
              p4.bank_bal=p4.namt;
              }


           }
           else
           {
               printf("You entered the wrong pin number \n");
               printf("Please re-enter the pin : ");
               goto check_pin1;
           }

        }
        else
        {
            printf("You entered the wrong account number\n");
            printf("Please re-Enter the account number");
            goto check_ac5;
        }
        break;
        case 3 :printf("Enter your account number :");
        check_ac1 :
        fflush(stdin);
        gets(acn);

        i=0;
        while(acn[i]!='\0')
        {
            if(acn[i]==p1.acc_no[i]||acn[i]==p2.acc_no[i]||acn[i]==p3.acc_no[i]||p4.acc_no[i])
           
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            
             printf("Enter your old pin :");
             check_pin2 :
             scanf("%d", &ppin);
            if(ppin==p1.pin)
           {
              printf("Enter a new pin : ");
              scanf("%d", &temp_pin);
              printf("Your new pin is %d ", temp_pin);
              p1.pin=temp_pin;

           }
           else if(ppin==p2.pin)
           {
              printf("Enter a new pin : ");
              scanf("%d", &temp_pin);
              printf("Your new pin is %d ", temp_pin);
              p2.pin=temp_pin;



           }
           else if(ppin==p3.pin)
           {
              printf("Enter a new pin : ");
              scanf("%d", &temp_pin);
              printf("Your new pin is %d ", temp_pin);
              p3.pin=temp_pin;


           }
           else if(ppin==p4.pin)
           {
              printf("Enter a new pin : ");
              scanf("%d", &temp_pin);
              printf("Your new pin is %d ", temp_pin);
              p3.pin=temp_pin;

           }
           else
           {
               printf("You have entered wrong pin number \n");
               printf("please re-enter the pin : ");
               goto check_pin2;
           }

        }
        else
        {
             printf("You have entered wrong account number \n");
            printf("Re-Enter the account number");
            goto check_ac1;
        }
        break;
        case 4 : printf("Enter your account number :");
        check_ac2 :
        fflush(stdin);
        gets(acn);

        i=0;
        while(acn[i]!='\0')
        {
            if(acn[i]==p1.acc_no[i]||acn[i]==p2.acc_no[i]||acn[i]==p3.acc_no[i]||p4.acc_no[i])
           
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            printf("Enter your pin :");
             check_pin3 :
             scanf("%d", &ppin);

            if(ppin==p1.pin)
           {
              printf("Your account balance is %d", p1.bank_bal);
           }
           else if(ppin==p2.pin)
           {
              printf("Your account balance is %d", p2.bank_bal);


           }
           else if(ppin==p3.pin)
           {
              printf("Your account balance is %d", p3.bank_bal);


           }
           else if(ppin==p4.pin)
           {
              printf("Your account balance is %d", p4.bank_bal);
           }
           else
           {
               printf("Re-enter the pin : ");
               goto check_pin3;
           }

        }
        else
        {
            printf("Re-Enter the account number");
            goto check_ac2;
        }
        break;
        case 5 : printf("Enter your account number :");
        check_ac3 :
        fflush(stdin);
        gets(acn);

        i=0;
        while(acn[i]!='\0')
        {
            if(acn[i]==p1.acc_no[i]||acn[i]==p2.acc_no[i]||acn[i]==p3.acc_no[i]||p4.acc_no[i])
           
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            printf("Enter your pin :");
             check_pin4 :
             scanf("%d", &ppin);

            if(ppin==p1.pin)
           {
              printf("Your account details is\n");
              print_detais(p1);
           }
           else if(ppin==p2.pin)
           {
              printf("Your account details is\n");
              print_detais(p2);


           }
           else if(ppin==p3.pin)
           {
              printf("Your account details is\n");
              print_detais(p3);


           }
           else if(ppin==p4.pin)
           {
              printf("Your account details is\n");
              print_detais(p4);
           }
           else
           {
               printf("Re-enter the pin : ");
               goto check_pin4;
           }

        }
        else
        {
            printf("Re-Enter the account number");
            goto check_ac3;
        }
        break;
        case 6 : break;
        
        
    }

   } while(choice !=6);
   return 0;
   



}
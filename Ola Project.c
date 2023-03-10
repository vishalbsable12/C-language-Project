#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct profile
{
    char name [100];
    char mail[100];
    char gender[100];
    long long mobile;
    int passcode;
    int Avail;
    int perkm;
    int km;
    int pay;
    int time1;
    int choice;
    int amount;
    int rem;
    int update;


};
void message()
{
    printf("\t\t\t\t\t\tDOSTANA Cab Booking Service.....\n\n");

}
struct profile createaccount (struct profile user)
{
    time_t t;
    time(&t);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\t\t\t\t\t\t  >>>>>>[ SIGN - UP ]<<<<<<\n");
    printf("\n");
    printf("Please Create Your Account ..\n\n");
    printf("Enter Your Name : ");
    gets(user.name);
    printf("Enter Your E-Mail Id : ");
    gets(user.mail);
    printf("Enter Gender : ");
    gets(user.gender);
    printf("Enter You Mobile Number : ");
    scanf("%lli",&user.mobile);
    printf("Set Your Pin : ");
    scanf("%d",&user.passcode);
    return user;

};
void details(struct profile U)
{
    int n;

    system("cls");
    message();
    //printf("Name : %s\n",U.name);
    puts(U.name);
    printf("E-Mail ID : %s\n",U.mail);
    printf("Gender : %s\n",U.gender);
    printf("Mobile Number : %lli\n",U.mobile);
    printf("Your Pin is : %d\n",U.passcode);
    printf("\n 1. To Main Menu \t\t \n 2. Log-Out \n\t\t");
    scanf("%d",&n);
    if(n==1)
    {
        Menu(U);
    }
    if(n==2)
    {
        Logout(U);
    }
}
void edit(struct profile U)
{
    int r;
    int n=1;

    do
    {
        if(n==1)
        {
            system("cls");
            message();
            printf("What You Want to edit in your profile...\n");
            printf("\n \t 1. Name \t\n\t 2. E-mail \n\t 3. Mobile Number \n\t 4. Change Your Passcode \n\t 5. Change Gender \n\t 6. To Main Menu \n " );
            scanf("%d",&r);

            if(r==1)
            {
                printf("\n Your  Name : %s\n",U.name);
                printf("Enter New name : ");
                //scanf("%s",&U.name);
                scanf(" ");
                gets(U.name);
                printf("New Name Add On Your Profile : %s\n",U.name);
                printf("\nTo Press 1 to Any other update & To Press 2 To Main Menu.. : \n");
                scanf("%d",&n);
            }

            if(r==2)
            {
                printf("\n Your  E-Mail Id : %s\n",U.mail);
                printf("Enter New E-Mail Id : ");
                scanf("%s",&U.mail);
                printf("New E-Mail Add On Your Profile : %s\n",U.mail);
                printf("\nTo Press 1 to Any other update & To Press 2 To Main Menu.. : \n");
                scanf("%d",&n);
            }

            if(r==3)
            {
                printf("\n Your  Mobile is  : %lli\n",U.mobile);
                printf("Enter New Mobile Number  : ");
                scanf("%lli",&U.mobile);
                printf("Mobile is Updated : %lli\n",U.mobile);
                printf("\nTo Press 1 to Any other update & To Press 2 To Main Menu.. : \n");
                scanf("%d",&n);
            }

            if(r==4)
            {
                printf("\n Your  Passcode is  : %d\n",U.passcode);
                printf("New Passcode Enter  : ");
                scanf("%d",&U.passcode);
                printf("Your Passcode Updated  : %d\n",U.passcode);
                printf("\nTo Press 1 to Any other update & To Press 2 To Main Menu.. : \n");
                scanf("%d",&n);
            }
            if(r==5)
            {
                printf("\nGender is  : %s\n",U.gender);
                printf("Gender Enter  : ");
                scanf("%s",&U.gender);
                printf("Gender Is Updated  : %s\n",U.gender);
                printf("\nTo Press 1 to Any other update & To Press 2 To Main Menu.. : \n");
                scanf("%d",&n);
            }
            if(r==6)
            {
                Menu(U);
            }

        }

    }
    while(n==1);
    Menu(U);
}
void about(struct profile U)
{

    int a;
    system("cls");
    printf("ABOUT US\n");
    printf("DOSTANA CAB SERVICE.\n");
    printf("Ride Sharing Company Headquatered In Pune. Founder VISHAL SABLE ");
    printf("\nTotal Employee working in Dostana Cab service is 5.\n");
    printf("\nContact Us \n");
    printf("DOSTANA CAB SERVICE.\n\n");
    printf("\nhttp://www.dostanacabservice.com");
    printf("\nCar Rental / Car Hire");
    printf("\nPhone Number : 020-123456789");
    printf("\nFax Number : 020-123456780");
    printf("\ndostanacabservice@gmail.com");
    printf("\n");
    printf("\n 1. To Main Menu \t \n 2. To Log_Out \n");
    scanf("%d",&a);
    if(a==1)
    {
        Menu(U);
    }
    if(a==2)
    {
        lgm(U);
    }
}
void Account(struct profile U)
{
    int n;

    printf("\n \t 1. Profile Details \n" );
    printf("\n \t 2. Edit Profile Details \n");
    printf("\n \t 3. About\n ");
    printf("\n \t 4. Main Menu\n ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        system("cls");
        details(U);
    }
    if(n==2)
    {
        system("cls");
        edit(U);
    }
    if(n==3)
    {
        system("cls");
        about(U);
    }
    if(n==4)
    {
        Menu(U);
    }

}

//Auto Function...

void swargate(U)
{

    float perkm=8;
    int km=4;
    float t;
    float d;
    int pay,n;
    system("cls");
    message();
    printf("\nYou Choose Auto For Ride...\n");
    printf("\nSwargate To Deccan\n");
    printf("\nVia Tilak Road \n");
    pay=km*perkm;
    t=km*3;
    printf("\nTicket Price Is : %d Rs\n",pay);
    printf("\nTotal Km Is : %d\n",km);
    //d=t/60;
    printf("\nEstimated Time : %.2f hr/m\n \n Per Km Rate Is :%.2f Rs. ",t,perkm);
    printf("\n\nPay Money For Your Ride Booking \n");
    printf("\n 1. Wallet \n\n 2. Net Banking [Only HDFC Bank ] \n\n 3. Cash \n\n 4. To Previous Menu \n\n 5. Main Menu \n\n ");
    scanf("%d",&n);


    if(n==1)
    {
        mainwallet(U);
    }
    if(n==2)
    {
        hdfc(U);

    }
    if(n==3)
    {
        printf("\nPay money in cash after ride complete\n");
    }
    if(n==4)
    {
        Cab(U);
    }
    if(n==5)
    {
        Menu(U);
    }

}


//Bike function...

void bswargate(U)
{
    float perkm=5;
    int km=4;
    int pay;
    float t;
    float d;
    system("cls");
    message();
    printf("\nYou Choose Bike For Ride...\n");
    printf("\nSwargate To Deccan\n");
    printf("\nVia Tilak Road \n");
    pay=km*perkm;
    t=km*3;
    printf("\nTicket Price Is : %d Rs\n",pay);
    printf("\nTotal Km Is : %d\n",km);
    printf("\nEstimated Time : %.2f hr/m\n \n Per Km Rate Is :%.2f Rs. ",t,perkm);
    printf("\n\nPay Money For Your Ride Booking \n");
    printf("\n 1. Wallet \n\n 2. Net Banking [Only HDFC Bank ] \n\n 3. Cash \n\n 4. To Previous Menu \n\n 5. Main Menu \n\n ");
    int n;
    scanf("%d",&n);

    if(n==1)
    {
        mainwallet(U);
    }
    if(n==2)
    {
        hdfc(U);

    }
    if(n==3)
    {
        printf("\nPay money in cash after ride complete\n");
    }
    if(n==4)
    {
        Cab(U);
    }
    if(n==5)
    {
        Menu(U);
    }

}


//Mini Car Function...

void mswargate(U)
{
    float t;
    int km=15,perkm=6,pay;
    system("cls");
    message();
    printf("\nYou Choose Mini Car For Ride...\n");
    printf("\nSwargate To Deccan\n");
    printf("\nVia Tilak Road \n");
    pay=km*perkm;
    t=km/50;
    printf("\nTicket Price Is : %d Rs\n",pay);
    printf("\nTotal Km Is : %d\n",km);
    printf("\nEstimated Time : %.2f hr/m\n \n Per Km Rate Is :%.2f Rs. ",t,perkm);
    printf("\n\nPay Money For Your Ride Booking \n");
    printf("\n 1. Wallet \n\n 2. Net Banking [Only HDFC Bank ] \n\n 3. Cash \n\n 4. To Previous Menu \n\n 5. Main Menu \n\n ");
    int n;
    scanf("%d",&n);


    if(n==1)
    {
        mainwallet(U);
    }
    if(n==2)
    {
        hdfc(U);

    }
    if(n==3)
    {
        printf("\nPay money in cash after ride complete\n");
    }
    if(n==4)
    {
        Cab(U);
    }
    if(n==5)
    {
        Menu(U);
    }

}

//Prime Car Function....

void pswargate(struct profile U)
{
    int perkm=15;
    int km =260 ;
    int pay;
    int time1;
    int n;
    //int wallet;
    system("cls");
    message();
    printf("\nYou Choose Prime Car For Ride...\n");
    printf("\nPune To Aurangabad  \n");
    printf("\nVia Ahmednagar \n");
    pay=km*perkm;
    time1=km/60;
    printf("\nTicket Price Is : %d Rs\n",pay);
    printf("\nTotal Km Is : %d\n",km);
    printf("\nEstimated Time : %d hr/m\n \nPer Km Rate Is :%d Rs. ",time1,perkm);
    printf("\n\nPay Money For Your Ride Booking \n");
    printf("\n 1. Wallet \n\n 2. Net Banking [Only HDFC Bank ] \n\n 3. Cash \n\n 4. To Previous Menu \n\n 5. Main Menu \n\n ");
    scanf("%d",&n);


    if(n==1)
    {
        mainwallet(U);
    }
    if(n==2)
    {
        hdfc(U);

    }
    if(n==3)
    {
        printf("\nPay money in cash after ride complete\n");
    }
    if(n==4)
    {
        Cab(U);
    }
    if(n==5)
    {
        Menu(U);
    }

}

//NET BANKING FUNCTION

void hdfc(struct profile U)
{
    system("cls");
    long long username;
    int password;
    printf("\nWelcome To HDFC Bank");
    time_t t;
    time(&t);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  **USER**\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t[ %s ]\n",U.name);
    printf("\n\t\t\t\t\t\t>>>>>>>>[ SIGN - IN ]<<<<<<<<\n");
    printf("\nUsername Is Your Mobile Number And Password Is Your Passcode");
    printf("\nEnter Username : ");
    scanf("%lli",&username);
    printf("\nEnter Password : ");
    scanf("%d",&password);
    if( username == U.mobile)
    {
        if(password==U.passcode)
        {
            int Avail=15000;
            int choice;
            int amount;
            int rem;
            int update;
            int n;
            int pay;
            int km,time1,perkm;
            system("cls");
            time_t t;
            time(&t);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%s",ctime(&t));
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  **USER**");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t[ %s ]\n",U.name);
            printf("\n\t\t\tYou Have Log - In Successfully\n");
            printf("\nAccount Holder Name : %s\n",U.name);
            printf("\nAccount Number : %lli\n",U.mobile);
            printf("Available Balance : %d",Avail);

            printf("\n\nPay Money For Your Ride Booking \n");
            printf("\n\t\t\t\tPay Dostana Cab For Your Ride Booking\n");
            printf("\nPayble Amount : %d Rs\n",U.pay);
            printf("\nEnter Payble Amount : ");
            scanf("%d",&U.amount);
            if(U.pay<=U.Avail)
            {
                if(pay==amount)
                {
                    system("cls");
                    printf("\n Payment is Confirm \n");
                    printf("\nYour Are Ride Is Booking\n");
                    srand(time(0));
                    printf("\nOrder Number : %d", rand());
                    //printf("\nName : \n",U.name);
                    //printf("\nMobile Number : \n",U.mobile);
                    //printf("\nEmail Id : \n",U.mail);*/
                    gets(U.name);
                    gets(U.mobile);
                    gets(U.mail);
                    printf("\n");
                    printf("\nPune To Aurangabad  \n");
                    printf("\nVia Ahmednagar \n");
                    printf("\nTicket Price Is : %d Rs\n",U.pay);
                    printf("\nTotal Km Is : %d\n",km);
                    printf("\nEstimated Time : %d hr/m\nPer Km Rate Is :%d Rs. \n",time1,U.perkm);
                    U.rem = U.Avail-U.pay;
                    printf("\nRemaining Wallet Balance Is : %d\n",U.rem);
                    printf("\n 1. To Book Another Ride \t\n 2. Exit \n\n");
                    scanf("%d",&choice);
                    if(choice==1)
                    {
                        Cab(U);
                    }
                    if(choice==2)
                    {
                        system("cls");
                        lgm(U);
                    }
                }

            }

            else
            {
                printf("\nInsufficient Balance Please Add Money into Wallet : \n");
                printf("\nYour Wallet Is : %d\n",U.Avail);
                printf("1. Add Money To Your Account : ");
                scanf("%d",&U.Avail);
                hdfc(U);
            }

        }
        else
        {
            printf("Invalid Password");
            printf("Invalid Password");
            printf("\nIncorrect Username....\n");
            printf("\nPlease Retry Username Press 1 : ");
            printf("\nForgot Usernamme Press 3 : \n");
            system("cls");
            int n;
            scanf("%d",&n);
            if(n==3)
            {
                printf("\n\nYour Username is : %lli\n",U.mobile);
                printf("\nPlease Retry Username Press 1 : \n");
                scanf("%d",&n);
                system("cls");
            }
        }

    }
    else
    {
        printf("Invalid Username");
        printf("Invalid Password");
        printf("\nIncorrect Username....\n");
        printf("\nPlease Retry Username Press 1 : ");
        printf("\nForgot Usernamme Press 3 : \n");
        system("cls");
        int n;
        scanf("%d",&n);

        if(n==3)
        {
            printf("\n\nYour Username is : %lli\n",U.mobile);
            printf("\nPlease Retry Username Press 1 : \n");
            scanf("%d",&n);
            system("cls");
        }
    }


}

//WALLET FUNCTION

void mainwallet(struct profile U)
{
    system("cls");
    int password;
    int choice;
    int n;
    printf("\nWelcome Dostana Wallet");
    time_t t;
    time(&t);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t %s",ctime(&t));
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  **USER**\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t[ %s ]\n",U.name);
    printf("\n\t\t\t\t\t\t>[ WALLET ]<\n");
    printf("\nPassword Is Your Passcode");
    printf("\nEnter Password : ");
    scanf("%d",&password);
    if(password==U.passcode)
    {
        //int U.Avail = 15000;
        system("cls");
        /*time_t t;
        time(&t);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  **USER**");
*/
         printf("\n\t\t\t\t\t\t\t\t\t\t\t\t[ %s ]\n",U.name);
        printf("\n\t\t\tYou Have Log - In Successfully\n");
        printf("Available Wallet Balance : %d",U.Avail);

        printf("\n\nPay Money For Your Ride Booking \n");
        printf("\n\t\t\t\tPay Dostana Cab For Your Ride Booking\n");
        printf("\nPayble Amount : %d Rs\n",U.pay);
        printf("\nEnter Payble Amount : ");
        scanf("%d",&U.amount);

        if(U.pay<=U.Avail)
        {
            if(U.pay==U.amount)
            {
                system("cls");
                printf("\n Payment is Confirm \n");
                printf("\nYour Are Ride Is Booking\n");
                srand(time(0));
                printf("\nOrder Number : %d\n", rand());
                //printf("\nName : \n",U.name);
                gets(U.name);
                gets(U.mobile);
                gets(U.mail);
                printf("\n");
                printf("\nPune To Aurangabad  \n");
                printf("\nVia Ahmednagar \n");
                printf("\nTicket Price Is : %d Rs\n",U.pay);
                printf("\nTotal Km Is : %d\n",U.km);

                printf("\nEstimated Time : %d hr/m\nPer Km Rate Is :%d Rs. \n",U.time1,U.perkm);
                U.Avail=U.Avail-U.pay;
                printf("\nRemaining Wallet Balance Is : %d\n",U.Avail);
                printf("\n 1. To Book Another Ride \t\n 2. Exit \n\n");
                scanf("%d",&choice);
                if(choice==1)
                {
                    Cab(U);
                }
                if(choice==2)
                {
                    system("cls");
                    lgm(U);
                }
            }
            else
            {
                printf("\nInsufficient Balance Please Add Money into Wallet : \n");
                printf("\nYour Wallet Is : %d\n",U.Avail);
                printf("1. Add Money To Your Account : ");
                scanf("%d",&U.Avail);
                mainwallet(U);
            }

        }

        else
        {
            printf("\nInsufficient Balance Please Add Money into Wallet : \n");
            printf("\nYour Wallet Is : %d\n",U.Avail);
            printf("1. Add Money To Your Account : ");
            scanf("%d",&U.Avail);
            mainwallet(U);
        }

    }
    else
    {
        printf("Invalid Password");
        printf("\nIncorrect Username....\n");
        printf("\nPlease Retry Username Press 1 : ");
        printf("\nForgot Usernamme Press 3 : \n");
        system("cls");
        scanf("%d",&n);
        if(n==3)
        {
            printf("\n\nYour Username is : %lli\n",U.mobile);
            printf("\nPlease Retry Username Press 1 : \n");
            scanf("%d",&n);
            system("cls");
        }
    }
}

void Auto(struct profile U)
{

    int nchoice;
    printf("AUTO Vehicle Service Only For In The Pune And Below Route: \n");
    printf("\n  1.  Swargate To Deccan : \n");
    printf("\n  2.  Press To Previous Menu : \n");
    printf("\n  3.  Press To Main Menu : \n");
    printf("\nEnter Choice : ");
    scanf("%d",&nchoice);

    if(nchoice==1)
    {
        system("cls");
        swargate();
    }
    if(nchoice==2)
    {
        system("cls");
        Cab(U);
    }
    if(nchoice==3)
    {
        system("cls");
        Menu(U);
    }

}
void bike(struct profile U)
{
    int nchoice;
    printf("BIKE Service Only For In The Pune And Below Route: \n");
    printf("\n  1.  Swargate To Deccan : \n");
    printf("\n  2.  Press To Previous Menu : \n");
    printf("\n  3.  Press To Main Menu : \n");
    printf("\nEnter Choice : ");
    scanf("%d",&nchoice);
    if(nchoice==1)
    {
        system("cls");
        bswargate();
    }
    if(nchoice==2)
    {
        system("cls");
        Cab(U);
    }
    if(nchoice==3)
    {
        system("cls");
        Menu(U);
    }


}
void mini(struct profile U)
{
    int nchoice;
    printf("MINI Car Service Only For In The Pune And Below Route: \n");
    printf("\n  1.  Swargate To Deccan : \n");
    printf("\n  2.  Press To Previous Menu : \n");
    printf("\n  3.  Press To Main Menu : \n");
    printf("\nEnter Choice : ");
    scanf("%d",&nchoice);
    if(nchoice==1)
    {
        system("cls");
        mswargate();
    }
    if(nchoice==2)
    {
        system("cls");
        Cab(U);
    }
    if(nchoice==3)
    {
        system("cls");
        Menu(U);
    }

}
void prime(struct profile U)
{

    int nchoice;
    printf("\nPrime Car Service Only For In The Pune And Below Route: \n");
    printf("\n  1.  Pune To Aurangabad : \n");
    printf("\n  2.  Press To Previous Menu : \n");
    printf("\n  3.  Main Menu : \n");
    printf("\nEnter Choice : ");
    scanf("%d",&nchoice);
    if(nchoice==1)
    {
        system("cls");
        pswargate(U);
    }
    if(nchoice==2)
    {
        system("cls");
        Cab(U);
    }
    if(nchoice==3)
    {
        system("cls");
        Menu(U);
    }

}
void lgm(struct profile U)
{
    printf("\t\t\t\t\n\n THANK YOU & VISIT AGAIN\n\n\n");

}
void Logout(struct profile U)
{
    int log;
    printf("Press 1 to Confirm Log-Out & Press 2 To Main Menu : ");
    scanf("%d",&log);
    if(log==1)
    {
        lgm(U);
    }
    else
    {
        system("cls");
        Menu(U);
    }

}
void Cab (struct profile U)
{
    int c=0;
    if(c==0)
    {

        system("cls");
        message();
        printf("Every Vehicle Is Selected Route . Please Press Vehicle Number To Check Route\n");
        printf("\n \t 1. Bike  [Rate 5 per km ] \n" );
        printf("\n \t 2. Auto  [Rate 8 per km ]\n");
        printf("\n \t 3. Mini  [Rate 12 per km ]\n ");
        printf("\n \t 4. Prime [Rate 15 per km ]\n");
        printf("\n \t 5. To Main Menu\n");
        scanf("%d",&c);

        if(c==1)
        {
            system("cls");
            bike(U);
        }

        else if(c==2)
        {
            system("cls");
            Auto(U);
        }

        else if(c==3)
        {
            system("cls");
            mini(U);
        }

        else if(c==4)
        {
            system("cls");
            prime(U);
        }
        else if(c==5)
        {
            system("cls");
            Menu(U);
        }

    }

}
void Menu (struct profile U)
{

    int c;
    int isreap=1;

    system("cls");
    message();
    time_t t;
    time(&t);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t  **USER**");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t[%s]",U.name);
    printf("\n\t>>>>>[ MAIN MENU ]<<<<<");
    printf("\n\n \t 1. Profile \n\n \t 2. Cab Booking \n\n \t 3. Logout \n\n\t");
    scanf("\t\t%d",&c);
    printf("\n");
    system("cls");


    if(c == 1)
    {
        system("cls");
        Account(U);
    }

    if(c == 2)
    {
        system("cls");
        Cab(U);
    }
    if(c==3)
    {
        system("cls");
        Logout(U);
    }
}

int main()
{

    struct profile user;
    struct profile U;
    long long login;
    int pass;
    int n=1;
    message();
    U=createaccount(user);
    system("cls");
    printf("\n\n You Have Successfully Created Account ...\n\n");

    do
    {
        if(n==1)
        {
            message();
            printf("\t\t\t\t\t\t>>>>>>>>[ SIGN - IN ]<<<<<<<<");
            printf("\n");
            printf("\n\t*Your Username is Your Mentioned Mobile Number* \n\n");
            printf("\n\t\t Enter Username : ");
            scanf("%lli",&login);
            printf("\t\t Enter Passcode : ");
            scanf("%d",&pass);

            if(login == U.mobile)
            {
                if(pass == U.passcode)
                {
                    system("cls");
                    printf("\n\tYou Have Successful Log In ....\n\n");
                    n++;
                }

                else
                {
                    printf("\nIncorrect Passcode...\n");
                    printf("\nPlease Retry Pin Press 1 : \n");
                    printf("\nForgot Passcode Press 2 : \n");
                    scanf("%d",&n);
                    system("cls");
                    if(n==2)
                    {
                        printf(" Your Passcode is : %d",U.passcode);
                        printf("\nPlease Retry Pin Press 1 : ");
                        scanf("%d",&n);
                        system("cls");
                    }
                }
            }

            else
            {
                printf("\nIncorrect Username....\n");
                printf("\nPlease Retry Username Press 1 : ");
                printf("\nForgot Usernamme Press 3 : \n");
                system("cls");
                scanf("%d",&n);
                if(n==3)
                {
                    printf("\n\nYour Username is : %lli\n",U.mobile);
                    printf("\nPlease Retry Username Press 1 : \n");
                    scanf("%d",&n);
                    system("cls");
                }
            }
        }
    }
    while(n==1);
    Menu(U);
}


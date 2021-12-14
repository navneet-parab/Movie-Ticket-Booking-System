//
//  main.c
//  Movie Ticket Booking
//

#include<stdio.h>
#include<string.h>
struct MovieTicketMetadata{
    char title[25];
    char date[20];
    char timing[10];
    int numb;
    char type[15];
    int amount;
}t[50];

//Function for Main Menu
int menu(int n1)
{
    printf("\n\nMAIN MENU *APP NAME*");
    printf("\n1. Book Tickets");
    printf("\n2. View Booked Tickets");
    printf("\n\nEnter Choice (Option No.)\t");
    scanf("%d",&n1);
    return n1;
}

//Function for Movie Title
int title(int i1)
{
    printf("\n\nMovie Options:");
    printf("\n1. Batman");
    printf("\n2. Spider-Man");
    printf("\n3. Ant-Man");
    printf("\n4. Iron-Man");
    printf("\n\nEnter Movie Choice (Option No.)\t");
    scanf("%d",&i1);
    return i1;
}

//Function for Date of Movie
int date(int i1)
{
    printf("\n\nDate:");
    printf("\n1. 20th November 2018");
    printf("\n2. 21st November 2018");
    printf("\n3. 22nd November 2018");
    printf("\n4. 23rd November 2018");
    printf("\n5. 24th November 2018");
    printf("\n6. 25th November 2018");
    printf("\n7. 26th November 2018");
    printf("\n\nEnter Date (Option No.)\t");
    scanf("%d",&i1);
    return i1;
}

//Function for Time of Movie
int timing(int i1)
{
    printf("\n\nTime:");
    printf("\n1. 10:30 AM");
    printf("\n2. 12:30 PM");
    printf("\n3. 2:30 PM");
    printf("\n4. 4:30 PM");
    printf("\n5. 6:30 PM");
    printf("\n6. 8:30 PM");
    printf("\n7. 10:30 PM");
    printf("\n\nEnter Time (Option No.)\t");
    scanf("%d",&i1);
    return i1;
}

//Function for Number of Tickets
int numb(int i1)
{
    printf("\n\nNumber of Tickets:");
    scanf("%d",&i1);
    return i1;
}

//Function for Type of Tickets
int type(int i1)
{
    printf("\n\nType of Ticket:");
    printf("\n1. M-Ticket");
    printf("\n2. Ticket Pick-up");
    printf("\n\nEnter Ticket Choice (Option No.)\t");
    scanf("%d",&i1);
    return i1;
}

//Function for Sub-Menu
int sub(int b)
{
    printf("\n1. Go Back to Main Menu");
    printf("\n2. Exit");
    printf("\nEnter Choice (Option No.)\t");
    scanf("%d",&b);
    return b;
}

int main()
{
    //Array for Movie Title Database
    char title1[4][25]={
        "Batman",
        "Spider-Man",
        "Ant-Man",
        "Iron-Man"
    };
    
    //Array for Movie Date Database
    char date1[7][20]={
        "21st November 2018",
        "22nd November 2018",
        "23rd November 2018",
        "24th November 2018",
        "25th November 2018",
        "26th November 2018"
    };
    
    //Array for Movie Timings Database
    char timing1[10][10]={
        "10:30 AM",
        "12:30 PM",
        "2:30 PM",
        "4:30 PM",
        "6:30 PM",
        "8:30 PM",
        "10:30 PM"
    };
    
    //Array for Ticket Types Database
    char type1[2][15]={
        "M-Ticket",
        "Ticket Pick-up"
    };
    
    
    int i,n,m,b;
    int amount,cost=200;
    int s=0,a=0,x=0,j=0;
    
    printf("\n\nWELCOME");
    
    for(s=0;s==0;)
    {
        n=menu(n);
        
        //Switch Statement for Main Menu
        switch(n)
        {
            case 1:{
                //Loop for Movie Title Selection (Repeating Choice Menu incase of Incorrect Input)
                for(a=0;a==0;)
                {
                    i=title(i);
                    
                    if((i<5)&&(i>0))
                    {
                        a=1;
                        strcpy(t[x].title,title1[i-1]);
                    }
                    
                    else
                    {
                        printf("\nWRONG CHOICE! TRY AGAIN!");
                        a=0;
                    }
                }
                
                //Loop for Movie Dates Selection (Repeating Choice Menu incase of Incorrect Input)
                for(a=0;a==0;)
                {
                    i=date(i);
                    
                    if((i<8)&&(i>0))
                    {
                        a=1;
                        strcpy(t[x].date,date1[i-1]);
                    }
                    
                    else
                    {
                        printf("\nWRONG CHOICE! TRY AGAIN!");
                        a=0;
                    }
                }
                
                //Loop for Movie Timings Selection (Repeating Choice Menu incase of Incorrect Input)
                for(a=0;a==0;)
                {
                    i=timing(i);
                    
                    if((i<8)&&(i>0))
                    {
                        a=1;
                        strcpy(t[x].timing,timing1[i-1]);
                    }
                    
                    else
                    {
                        printf("\nWRONG CHOICE! TRY AGAIN!");
                        a=0;
                    }
                }
                
                //Loop for Number of Tickets Selection (Repeating Choice Menu incase of Input Outside Predefined Set)
                for(a=0;a==0;)
                {
                    i=numb(i);
                    
                    if((i<11)&&(i>0))
                    {
                        a=1;
                        t[x].numb=i;
                        m=cost*i;
                        t[x].amount=m;
                    }
                    
                    else
                    {
                        printf("\nNumber of Tickets should be less than 11 and atleast 1");
                        a=0;
                    }
                }
                
                //Loop for Ticket Type Selection (Repeating Choice Menu incase of Incorrect Input)
                for(a=0;a==0;)
                {
                    i=type(i);
                    
                    if((i==1)||(i==2))
                    {
                        a=1;
                        strcpy(t[x].type,type1[i-1]);
                    }
                    
                    else
                    {
                        printf("\nWRONG CHOICE! TRY AGAIN!");
                        a=0;
                    }
                }
                
                
                //Booked Ticket Information
                printf("\nBOOKED TICKET INFORMATION:");
                printf("\n\t%s\n\t%s\n\t%s\n\t%d Tickets\n\t%s\n\tAmount: Rs.%d\n\n",t[x].title,t[x].date,t[x].timing,t[x].numb,t[x].type,t[x].amount);
                
                //Sub-Menu
                for(a=0;a==0;)
                {
                    b=sub(b);
                    //Switch Statement for Sub-Menu
                    switch(b){
                        case 1:{
                            s=0;
                            a=1;
                            break;
                        }
                            
                        case 2:{
                            s=1;
                            a=1;
                            break;
                        }
                            
                        default:{
                            printf("\nWRONG CHOICE! TRY AGAIN!");
                            a=0;
                            break;
                        }
                    }
                }
                
                
                x++;//x Increment To Store Data in next Array of Structure MovieTicketMetadata
                j=x;
                break;
            }
                
            case 2:{
                //Conditional Statements when View Booked Tickets Option is Selected
                if(n==2)
                {
                    if(j==0)
                    {
                        printf("\nYou haven't Booked any Tickets yet");
                    }
                    
                    else
                    {
                        //Loop for Displaying All of Booked Tickets
                        printf("\nBOOKED TICKETS:");
                        
                        for(i=0;i<j;i++)
                        {
                            printf("\n\t%s\n\t%s\n\t%s\n\t%d Tickets\n\t%s\n\tAmount: Rs.%d\n\n",t[i].title,t[i].date,t[i].timing,t[i].numb,t[i].type,t[i].amount);
                        }
                        //Sub-Menu
                        for(a=0;a==0;)
                        {
                            b=sub(b);
                            //Switch Statement for Sub-Menu
                            switch(b){
                                case 1:{
                                    s=0;
                                    a=1;
                                    break;
                                }
                                    
                                case 2:{
                                    s=1;
                                    a=1;
                                    break;
                                }
                                    
                                default:{
                                    printf("\nWRONG CHOICE! TRY AGAIN!");
                                    a=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                break;
            }
                
            default:{
                printf("\nWRONG CHOICE! TRY AGAIN!");
            }
        }
        }
    
    printf("\n\nTHANK YOU\n");
    
    return 0;
}


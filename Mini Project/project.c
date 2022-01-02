#include "Fun.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
time_t rawtime;
struct tm * timeinfo;

int mk=0; 
int cH;
char name[40]={0};
long long int number=0;

struct user
{
	char Name[20];
	char Email[20];
	char Address[20];
	char Password[10];
	int Age;
	int Number;
}*pUser;

struct D
{
	int item_id;
    char item_name[20];
	float buy_price; 
};
struct Dis
{
  int item_id;
  char item_name[20];
  int price;
  int discount;
  int gst;
  float buy_price; 
};

struct NonDis
{
  int item_id;
  char item_name[20];
  int gst;
  float buy_price; 
};

void Project()
	{
    printf("\n\n\t\t\t/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\");
    printf("\n\t\t\t************                                                   ***********");
    printf("\n\t\t\t************               MINI Project in C                   ***********");
    printf("\n\t\t\t************                                                   ***********");
    printf("\n\t\t\t/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\");
    printf("\n\n\n\t\t\t\t\t Enter any key to continue.....");
    getch();
    return;
	}
    
void Welcome()
    {
    	int choice;
    do
    {
    system("clear");
    printf( "\t\t\t\t\t%s", asctime (timeinfo) );
    printf("\n\t\t\t  ********************************************************\n");
    printf("\t\t\t\t\t      www.Myntra.com");
     printf("\n\t\t\t  ********************************************************\n");
    printf("\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 Myntra                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     
    	printf("\n\t\t\t  --------------------------------------------------------\n");
    	printf("\t\t\t\t\t\t   MENU");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tMen");
        printf("\n\t\t\t\t\t\t2.\tWomen");
        printf("\n\t\t\t\t\t\t3.\tSignIn");
        printf("\n\t\t\t\t\t\t4.\tSignUp");
        printf("\n\t\t\t\t\t\t5.\tContact Us");
        printf("\n\t\t\t\t\t\t6.\tExit");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Men();
            break;
        case 2:
            Women();
            break;
        case 3:
            SignIn();
            break;
        case 4:
            SignUp();
            break;
        case 5:
            ContactUs();
            break;
        case 6:
        	system("clear");
        	printf( "\n\t\t\t\t\t    %s", asctime (timeinfo) );
        	printf("\n\n\n\n\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	    	printf("\n\t\t\t        =                                           =");
    		printf("\n\t\t\t        =   Thank you For Shopping From Myntra!     =");
    		printf("\n\t\t\t        =                                           =");
    		printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\n\n\n\t\t\t\t\t\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
        }
		                    
    }
    
    while(choice!=0);
    return;
    }
    
void ContactUs()
    {
		system("clear");
        printf( "\t\t\t\t\t\t%s", asctime (timeinfo) );
        printf("\n\t\t\t      --------------------------------------------------------");
    	printf("\n\t\t\t\t\t\tHELP CENTER ");
    	printf("\n\t\t\t\t\t\tWe are here to help you ");
        printf("\n\t\t\t      --------------------------------------------------------");
        printf("\n\n\t\t\t\t\t\tCustomer care:1800988290");
        printf("\n\n\t\t\t\t\t\tMail Id: myntra@gmail.com");
        printf("\n\n\n\n\t\t\t\t\t\tPress Enter To Go Back!");
		getch();
		return;
    }
//(Signup)---------------------------------------------------------------------------------------------------------------------------------------------------   
void SignIn()
    {
    	
    	system("clear");
    	printf( "\t\t\t\t\t%s", asctime (timeinfo) );
    	printf("\n\t\t\t  --------------------------------------------------------\n");
    	printf("\t\t\t\t\t\t   SignIn");
        printf("\n\t\t\t  --------------------------------------------------------");
    	FILE *fp;
    	char Email[20], pwd[10];
		pUser=(struct user *)malloc(sizeof(struct user));
            if(((fp=fopen("user.txt", "r")) == NULL))
			 {
                    printf ("Could not open file\n");
                    exit(1);
             }
            printf("\n\t\t\t\t\tEmail=> ");
            scanf("%s",Email);
            printf("\n\t\t\t\t\tEnter Password=> ");
            scanf("%s",pwd);
            while (fread(pUser,sizeof(struct user),1,fp)>0)
			{
                if( (strcmp ( pUser->Email, Email) == 0) && (strcmp ( pUser->Password, pwd) == 0) )
				{
    				system("clear");
    		  		strcpy(name,pUser->Name);
    		   	    number=pUser->Number;
    		   		mk=1;
					Inside();
					break;  
                    
                }
                else
                {
                	
                 	printf("\n\t\t\t\t\t Access Not Allowed\n");
                 	break;
                }
				
            }
            	getch();
        		free(pUser);
    			fclose(fp);
    			return;
     }
    
void Inside()
{
	    
		int cH; 
        do
		{
		system("clear");
        printf("\n\t\t\t\t\t  %s", asctime (timeinfo) );
        printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t\tOption | Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
		printf("\n\t\t\t\t\t\t1.\tMen");
        printf("\n\t\t\t\t\t\t2.\tWomen");
        printf("\n\t\t\t\t\t\t3.\tCart");
        printf("\n\t\t\t\t\t\t4.\tSignOut");
        printf("\n\t\t\t\t\t\t5.\tExit");
        printf("\n\t\t\t  --------------------------------------------------------\n");
        printf("\n\t\t\t\t\tWelcome:\t%s",pUser->Name);
        printf("\n\t\t\t\t\tUser:   \t%s",pUser->Email);
        printf("\n\t\t\t\t\tNumber: \t%d",pUser->Number);
		printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&cH);
        switch(cH)
        {
        case 1:
            Men();
            break;
        case 2:
            Women();
            break;
        case 3:
            Cart();
            break;
        case 4:
            Signout();
            break;
        case 5:
            printf("\n\n\n\t\t\t\t\tThank you For Shopping From Myntra!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
        }
        }while(cH!=0);
        return;
		      
}
void Signout()
    {
	mk=0;
	Welcome();
	return;
    }
void Cart()
    {
    	//extern char name[40];
        char Cartname=*name;
    	float total=0;
    	struct  D d;
    	system("clear");
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		int choice;
		printf("\n\t\t\t  ----------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Shopping Cart ");
        printf("\n\t\t\t  ----------------------------------------------------------\n");
 		FILE *fp1;
 		fp1 = fopen(name, "r");
 		printf("\n\t\t\t\tItem Id\t\tItem Name\tPrice");
 		while (fread(&d, sizeof(d), 1, fp1)>0)
 		{
		printf("\n\t\t\t\t%d\t\t%s\t%.2f",d.item_id,d.item_name,d.buy_price);
		total=total+d.buy_price;
 		}
 		printf("\n\n\t\t\t\t\t\t\t\tTotal Bill=>%.2f",total);
		fclose(fp1);
        printf("\n\t\t\t  ----------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option   | Function ");
        printf("\n\t\t\t  ----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tPlaceOrder");
        printf("\n\t\t\t\t\t\t2.\tDelete Item");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Placeorder();
            break;
        case 2:
            DeleteItem();
            break;
        case 3:
            Inside();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
        }
        getch();
        return;
}
void Placeorder()
{
	    char order[]="placed_order_";
	    strcat(order,name);
	    struct D d;
		FILE *fp1;
 		FILE *fp2;
  		fp1 = fopen(name, "r");
  		fp2 = fopen(order, "w");
  		while (fread(&d, sizeof(d), 1, fp1)>0)
  		{
    	fwrite(&d, sizeof(d), 1, fp2);
  		}
  		fclose(fp1);
  		fclose(fp2);
  		
}
void DeleteItem()
{
		int X=0;
		struct D d;
		FILE *fpo;
 		FILE *fpt;
 		int i, s;
 		printf("Enter Item Id :");
 		scanf("%d", &i);
  		fpo = fopen(name, "r");
  		fpt = fopen("TempFile.txt", "w");
  		while (fread(&d, sizeof(d), 1, fpo)>0)
  		{
   		s = d.item_id;
   		if (s != i)
    	fwrite(&d, sizeof(d), 1, fpt);
  		}
  		fclose(fpo);
  		fclose(fpt);
  		fpo = fopen(name, "w");
  		fpt = fopen("TempFile.txt", "r");
  		while (fread(&d, sizeof(d), 1, fpt))
   		fwrite(&d, sizeof(d), 1, fpo);
  		printf("\nRECORD DELETED\n");
  		fclose(fpo);
  		fclose(fpt);
}

//(Signup)----------------------------------------------------------------------------------------------------------------------------------------------------------------------------    
void SignUp()
    {
     	FILE *fp;
	    pUser=(struct user *)malloc(sizeof(struct user));
    	system("clear");
    	printf( "\t\t\t\t\t%s",asctime(timeinfo));
    	printf("\n\t\t\t  --------------------------------------------------------\n");
    	printf("\t\t\t\t\t\t   SignUp");
        printf("\n\t\t\t  --------------------------------------------------------");

        if ( ( fp=fopen("user.txt", "a")) == NULL)
		{
		
                printf ("Could not open file\n");
                exit (1);
		}
                printf("\n\t\t\t\t\tEnter Name=>");
                scanf("%s",pUser->Name);
                printf("\t\t\t\t\tEnter Email=>");
                scanf("%s",pUser->Email);
                printf("\t\t\t\t\tEnter Password=>");
                scanf("%s",pUser->Password);
                printf("\t\t\t\t\tEnter Age=>");
                scanf("%d",&pUser->Age);
                printf("\t\t\t\t\tEnter Number=>");
                scanf("%d",&pUser->Number);
                printf("\t\t\t\t\tEnter Address=>");
                scanf("%s",pUser->Address);
   				fwrite (pUser, sizeof(struct user), 1, fp);
    			free(pUser);
    			fclose(fp);
				printf("\n\n\n\t\t\t\t\t Enter any key to continue.....");
    			getch();
    			return;
    }
//(Men)----------------------------------------------------------------------------------------------------------------------------------    
void Men()
    {   	
	    system("clear");
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		int choice;
  		printf("\n\t\t\t  --------------------------------------------------------\n");
    	printf("\t\t\t\t\t\t    MEN");
    	printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option   | Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tCloths");
        printf("\n\t\t\t\t\t\t2.\tFootwear");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            MCloths();
            break;
        case 2:
            MFootwear();
            break;
        case 3:
        	if(mk==0)
            Welcome();
            else
            Inside();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
    }
void MCloths()
{
		system("clear");
		int choice;
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option  |  Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tDiscounted");
        printf("\n\t\t\t\t\t\t2.\tNon Discounted");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            MCDiscount();
            break;
        case 2:
            MCNonDiscount();
            break;
        case 3:
            Men();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
	
}
void MFootwear()
{
		system("clear");
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		int choice;
		printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option  |  Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tDiscounted");
        printf("\n\t\t\t\t\t\t2.\tNon Discounted");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            MSDiscount();
            break;
        case 2:
            MSNonDiscount();
            break;
        case 3:
            Men();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
	
}
void MCDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t\t%s", asctime (timeinfo) );
	struct Dis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MCDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t------------------------------------------------------------------------------------------\n");
    printf("\t\tItem Id.|      Item Name           |     Price   |   Discount(%%)  |  GST(%%)  |  Buy Price\n");
    printf("\t\t------------------------------------------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t%d\t\t%-15s\t\tRs.%-4d\t\t%-3d\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.price,d1.discount,d1.gst,d1.buy_price);
	printf("\t\t------------------------------------------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MCDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
    }
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
	return;
   }


void MCNonDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t%s", asctime (timeinfo) );
	struct NonDis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MCNonDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t\t-----------------------------------------------------------\n");
    printf("\t\t\tItem Id.|      Item Name           |  GST(%%)  |  Buy Price\n");
    printf("\t\t\t-----------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t\t%d\t\t%-15s\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.gst,d1.buy_price);
	printf("\t\t\t-----------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MCNonDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
	return;
}

void MSDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t\t%s", asctime (timeinfo) );
	struct Dis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MSDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t------------------------------------------------------------------------------------------\n");
    printf("\t\tItem Id.|      Item Name           |     Price   |   Discount(%%)  |  GST(%%)  |  Buy Price\n");
    printf("\t\t------------------------------------------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t%d\t\t%-15s\t\tRs.%-4d\t\t%-3d\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.price,d1.discount,d1.gst,d1.buy_price);
	printf("\t\t------------------------------------------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MSDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}	
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
 	return;   
}

void MSNonDiscount()
{
    system("clear");
	printf( "\t\t\t\t\t%s", asctime (timeinfo) );
	struct NonDis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MSNonDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t\t-----------------------------------------------------------\n");
    printf("\t\t\tItem Id.|      Item Name           |  GST(%%)  |  Buy Price\n");
    printf("\t\t\t-----------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t\t%d\t\t%-15s\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.gst,d1.buy_price);
	printf("\t\t\t-----------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/MSNonDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
   	return;
}
//(Women)--------------------------------------------------------------------------------------------------------------------------------------------------------
void Women()
{   	system("clear");
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		int choice;
  		printf("\n\t\t\t  --------------------------------------------------------\n");
    	printf("\t\t\t\t\t\t    WOMEN");
    	printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option   | Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tCloths");
        printf("\n\t\t\t\t\t\t2.\tFootwear");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            WCloths();
            break;
        case 2:
            WFootwear();
            break;
        case 3:
        	if(mk==0)
            Welcome();
            else
            Inside();
            Welcome();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
}
void WCloths()
{
		system("clear");
		int choice;
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option  |  Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tDiscounted");
        printf("\n\t\t\t\t\t\t2.\tNon Discounted");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            WCDiscount();
            break;
        case 2:
            WCNonDiscount();
            break;
        case 3:
            Women();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
	
}
void WFootwear()
{
		system("clear");
		printf( "\t\t\t\t\t%s", asctime (timeinfo) );
		int choice;
		printf("\n\t\t\t  --------------------------------------------------------");
    	printf("\n\t\t\t\t\t    Option  |  Function ");
        printf("\n\t\t\t  --------------------------------------------------------");
        printf("\n\t\t\t\t\t\t1.\tDiscounted");
        printf("\n\t\t\t\t\t\t2.\tNon Discounted");
        printf("\n\t\t\t\t\t\t3.\tBack");
        printf("\n\n\n\t\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            WSDiscount();
            break;
        case 2:
            WSNonDiscount();
            break;
        case 3:
            Women();
            break;
        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT!!! Try again...");
    
    
        return;
        }
	
}
void WCDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t\t%s", asctime (timeinfo) );
	struct Dis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WCDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t------------------------------------------------------------------------------------------\n");
    printf("\t\tItem Id.|      Item Name           |     Price   |   Discount(%%)  |  GST(%%)  |  Buy Price\n");
    printf("\t\t------------------------------------------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t%d\t\t%-15s\t\tRs.%-4d\t\t%-3d\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.price,d1.discount,d1.gst,d1.buy_price);
	printf("\t\t------------------------------------------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WCDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
                    getch();
	}
	return;
}

void WCNonDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t%s", asctime (timeinfo) );
	struct NonDis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WCNonDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t\t-----------------------------------------------------------\n");
    printf("\t\t\tItem Id.|      Item Name           |  GST(%%)  |  Buy Price\n");
    printf("\t\t\t-----------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t\t%d\t\t%-15s\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.gst,d1.buy_price);
	printf("\t\t\t-----------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WCNonDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
	return;
}

void WSDiscount()
{
	system("clear");
	printf( "\t\t\t\t\t\t%s", asctime (timeinfo) );
	struct Dis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WSDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t------------------------------------------------------------------------------------------\n");
    printf("\t\tItem Id.|      Item Name           |     Price   |   Discount(%%)  |  GST(%%)  |  Buy Price\n");
    printf("\t\t------------------------------------------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t%d\t\t%-15s\t\tRs.%-4d\t\t%-3d\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.price,d1.discount,d1.gst,d1.buy_price);
	printf("\t\t------------------------------------------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WSDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}	
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
	return;
}

void WSNonDiscount()
{
    system("clear");
	printf( "\t\t\t\t\t%s", asctime (timeinfo) );
	struct NonDis d1;
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WSNonDis.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);
	}
	 printf("\n\t\t\t-----------------------------------------------------------\n");
    printf("\t\t\tItem Id.|      Item Name           |  GST(%%)  |  Buy Price\n");
    printf("\t\t\t-----------------------------------------------------------\n");
	while(fread(&d1,sizeof(d1),1,fp)>0)
		printf("\t\t\t%d\t\t%-15s\t\t%-5d\tRs.%.2f \n",d1.item_id,d1.item_name,d1.gst,d1.buy_price);
	printf("\t\t\t-----------------------------------------------------------\n");
	fclose(fp);
	if(mk>0)
	{
	FILE *fp;
	fp=fopen("/Users/hp/Desktop/Mini Project/Backend/WSNonDis.txt","r");
	FILE *fp1;	
	struct D d;
	fp1 = fopen(name, "a");
	int num,c;
	printf("Enter Item Id=>");
	scanf("%d",&num);
	printf("Chosen Id %d",num);
	while(fread(&d1,sizeof(d1),1,fp)>0)
  {
    c=d1.item_id;
   if (c == num)
   {
    d.item_id=d1.item_id;
 	strcpy(d.item_name,d1.item_name);
 	d.buy_price=d1.buy_price;
 	fwrite(&d, sizeof(d), 1, fp1);
 	fclose(fp);
 	fclose(fp1);
	}
	}
	}
	else
	{
	
	printf("\n\nPlease Login To Add Item in Cart!!");
	printf("\nEnter any key to continue.....");
    getch();
	
	}
	return;
}
int main()
{
time ( &rawtime );
timeinfo = localtime ( &rawtime );
 printf( "\t\t\t\t\t\t %s", asctime (timeinfo) );
 Project();
 Welcome();
 return 0;
}

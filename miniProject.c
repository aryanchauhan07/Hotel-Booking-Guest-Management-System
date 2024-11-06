#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

void hotel_grande();
void hotel_sapphire();
void hotel_haven();
void hotel_heights();
void hotel_mirage();


// hotel 1  info
void hotel_grande(){
    int n;
    // Welcome message
     printf("Welcome to the Grand Horizon Hotel!\n");

    // Visual separator for style
    printf("-------------------------------\n");

    // Additional information about the hotel
    printf("Discover a haven of luxury and timeless elegance since [year].\n");
    printf("Our commitment to excellence has made us a symbol of prestige in [City].\n");

    // Visual separator for style
    printf("-------------------------------\n");

    // Highlighting world-class facilities
    printf("Indulge in our world-class facilities:\n");
    printf("- Luxurious accommodations\n");
    printf("- Exquisite dining curated by renowned chefs\n");
    printf("- Versatile event spaces for every occasion\n");
    printf("- Cutting-edge technology for a modern experience\n");

    // Visual separator for style
    printf("-------------------------------\n");

    // Invitation and conclusion
    printf("Experience the art of refined living at Grand Horizon Hotel, where every detail reflects sophistication.\n");
    printf("Create unforgettable memories in the heart of [City].\n");
    printf("--------------------------------------------------- --\n");
}

// hotel 2 info
void hotel_sapphire(){
    
    // Welcome message
    printf("Welcome to Sapphire Sands Resort!\n");

    // Visual separator for style
    printf("*****************************************\n");

    // Resort description
    printf("Discover a paradise of serenity and luxury at Sapphire Sands Resort.\n");
    printf("Immerse yourself in the tranquil beauty of our pristine surroundings.\n");

    // Visual separator for style
    printf("*****************************************\n");

    // Highlighting resort features
    printf("Indulge in our world-class features:\n");
    printf("- Luxurious accommodations with breathtaking views\n");
    printf("- Culinary delights at our gourmet restaurants\n");
    printf("- Relaxation and rejuvenation at our spa and wellness center\n");
    printf("- Exciting recreational activities for all ages\n");

    // Visual separator for style
    printf("*****************************************\n");

    // Invitation and conclusion
    printf("Experience the epitome of luxury at Sapphire Sands Resort, where every moment is a cherished memory.\n");
    printf("Escape to a world of elegance and unparalleled hospitality.\n");

	printf("------------------------------------------------------------\n");
   
}
 

 // hotel 3 info 
 void hotel_haven(){
    
    // Welcome message
    printf("Welcome to Tranquil Haven Inn!\n");

    // Visual separator for style
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // Inn description
    printf("Embark on a journey of serenity and comfort at Tranquil Haven Inn.\n");
    printf("Nestled in a haven of tranquility, our inn promises a peaceful escape.\n");

    // Visual separator for style
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // Highlighting inn features
    printf("Discover our intimate features:\n");
    printf("- Cozy and comfortable rooms for a restful stay\n");
    printf("- Delightful culinary experiences at our charming dining areas\n");
    printf("- Idyllic garden spaces for relaxation and contemplation\n");
    printf("- Thoughtfully crafted services for a personalized stay\n");

    // Visual separator for style
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // Invitation and conclusion
    printf("Experience the essence of tranquility at Tranquil Haven Inn, where every detail\n");
    printf("reflects our commitment to providing a haven of peace and relaxation.\n");
    printf("------------------------------------------------------------\n");
    
	
}

// hotel 4 info 
void hotel_heights(){
   
    // Welcome message
    printf("Welcome to Majestic Heights Lodge!\n");

    // Visual separator for style
    printf("*********************************\n");

    // Lodge description
    printf("Escape to the pinnacle of luxury and breathtaking views at Majestic Heights Lodge.\n");
    printf("Perched on the heights, our lodge offers a majestic retreat in the lap of nature.\n");

    // Visual separator for style
    printf("*********************************\n");

    // Highlighting lodge features
    printf("Indulge in our extraordinary features:\n");
    printf("- Elegant and spacious suites with panoramic vistas\n");
    printf("- Gourmet dining experiences at our elevated restaurants\n");
    printf("- Serene outdoor spaces for relaxation and reflection\n");
    printf("- Personalized services that elevate your stay to new heights\n");

    // Visual separator for style
    printf("*********************************\n");

    // Invitation and conclusion
    printf("Experience the summit of opulence at Majestic Heights Lodge, where every moment\n");
    printf("is an ascent to unparalleled luxury and tranquility.\n");
    printf("------------------------------------------------------------\n");
   
}

// hotel 5 info 
void hotel_mirage(){
   
    // Welcome message
    printf("Welcome to Royal Mirage Plaza!\n");

    // Visual separator for style
    printf("***********************************\n");

    // Plaza description
    printf("Step into the regal world of luxury and grandeur at Royal Mirage Plaza.\n");
    printf("Our plaza is a timeless masterpiece, blending opulence with sophistication.\n");

    // Visual separator for style
    printf("***********************************\n");

    // Highlighting plaza features
    printf("Indulge in our majestic features:\n");
    printf("- Palatial suites adorned with exquisite decor\n");
    printf("- Culinary excellence at our distinguished dining establishments\n");
    printf("- Grand ballrooms and event spaces for royal celebrations\n");
    printf("- Impeccable service tailored to meet the highest standards\n");

    // Visual separator for style
    printf("***********************************\n");

    // Invitation and conclusion
    printf("Experience the pinnacle of grandeur at Royal Mirage Plaza, where every detail\n");
    printf("reflects our commitment to providing a royal retreat and an unrivaled experience.\n");
   
printf("------------------------------------------------------------\n");
}
// New function for hotel selection
void hotels(int x) {
int n;


    int hotelChoice;
    system("cls");
 system("cls");
    
    
         printf("\n                         :::::::::::::::::::::::::::::::::::::");
         printf("\n                       ::                                 ::");
         printf("\n                     ::                                 ::");
         printf("\n                   ::     $$$$$$$$$$$$$$$$$$$$$$$     ::");
         printf("\n                 ::     $                     $     ::");
         printf("\n               ::     $     WELCOME TO      $     ::");
         printf("\n             ::     $                     $     ::");
         printf("\n               ::     $    BUTI BOOKINGS    $     ::");
         printf("\n                 ::     $                     $     ::");
         printf("\n                   ::     $$$$$$$$$$$$$$$$$$$$$$$     ::");
         printf("\n                     ::                                 ::");
         printf("\n                       ::                                 ::");
         printf("\n                         :::::::::::::::::::::::::::::::::::::");
        printf("\n\n\n\n");


    printf("Enter the hotel number (1-5): ");
    printf("\t\t Please enter your hotel:");
    printf("\n\n");
    printf(" \n Enter 1 -> Grand Horizon Hotel");
    printf("\n------------------------");
    printf(" \n Enter 2 -> Sapphire Sands Resort");
    printf("\n----------------------------------");
    printf(" \n Enter 3 -> Tranquil Haven Inn");
    printf("\n-----------------------------------");
    printf(" \n Enter 4 -> Majestic Heights Lodge");
    printf("\n-----------------------------------");
    printf(" \n Enter 5 -> Royal Mirage Plaza");
    printf("\n-----------------------");
    printf("\n-----------------");
    printf("\n");

    scanf("%d", &hotelChoice);


    switch (hotelChoice) {
        case 1:
         hotel_grande();
	    printf("press the key 1 to proceed on main menu \n");
	      scanf("%d",&n);
         if (n==1)
            break;
        case 2:
    hotel_sapphire();
    printf("press the key 2 to proceed on main menu \n");
	  scanf("%d",&n);
      if (n==2)
            break;
        case 3:  
		 hotel_haven();
     printf("press the key 3 to proceed on main menu \n");
	  scanf("%d",&n);
      if (n==3)
	 
            break;
        case 4:
		hotel_heights();
		
    printf("press the key 4 to proceed on main menu \n");
	  scanf("%d",&n);
      if (n==4)
            break;
        case 5: 
		hotel_mirage();
    printf("press the key 5 to proceed on main menu \n");
	  scanf("%d",&n);
      if (n==5)
            break;
            
        default:
            printf("\nInvalid hotel choice. Exiting hotel selection.\n");
    }
}
struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
    char nationality[15];
    char email[20];
    char period[10];
    char arrivaldate[10];
    int reviews;        // New field for reviews
    int availability;   // New field for availability
    float total_amount; // New field for total amount
}s;

void login()
{

	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");

    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}


int main(){     // MAIN FUNCTION
	int i=0;
    int x;
	time_t t;
	time(&t);
	char customername;
	char choice;
    login();  // login in the system
    hotels(x);


    
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		//setcolor(10);
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		//setcolor(10);
		printf("\t\t Please enter your choice for menu:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice); // convert lowercase alphabet to uppercase.
		switch(choice)           // SWITCH STATEMENT
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				system("cls");
				printf("\n\n\t **THANK YOU**");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}



  void add()
{
	FILE *f;
    char test;
    f = fopen("add.txt", "a+");
    if (f == 0)
    {
        f = fopen("add.txt", "w+");
        system("cls");
        printf("Please hold on while we set our database in your computer!!");
        printf("\n Process completed press any key to continue!! ");
        getch();
    }

    while (1)
    {
        system("cls");
        printf("\n Enter Customer Details:");
        printf("\n**************************");

        // Display available rooms with preloaded reviews
        printf("\nAvailable Rooms with Preloaded Reviews:\n");
        printf("1. Standard Room - 3.5 stars\n");
        printf("2. Deluxe Room - 4.0 stars\n");
        printf("3. Suite - 4.5 stars\n");
        printf("4. Family Room - 3.8 stars\n");
        printf("5. Executive Suite - 4.2 stars\n");

        printf("\n Enter Room number (1-5):\n");
        scanf("%s", s.roomnumber);

        // Check room availability
        if (s.availability >= 5)
        {
            printf("\nSorry, the room is not available.");
            printf("\nPress esc key to exit, any other key to add another customer detail:");
            test = getche();
            if (test == 27)
                break;
            else
                continue;
        }

        // Get customer reviews
        printf("\nEnter Your Review (1 to 5):\n");
        scanf("%d", &s.reviews);
        if (s.reviews < 1 || s.reviews > 5)
        {
            printf("Invalid review rating. Please enter a rating between 1 and 5.\n");
            printf("Press esc key to exit, any other key to add another customer detail:");
            test = getche();
            if (test == 27)
                break;
            else
                continue;
        }

        // Allocate room based on reviews
        if (s.reviews >= 3)
        {
            printf("Congratulations! Room allocated based on your good reviews.\n");
        }
        else
        {
            printf("Room allocated based on availability.\n");
        }

        // Increment availability
        s.availability++;


		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");

        // Calculate total amount
        s.total_amount = s.reviews >= 4 ? 500 * atoi(s.period) : 550 * atoi(s.period);

        // Print bill
        printf("\n\n===== Bill =====");
        printf("\nRoom Number: %s", s.roomnumber);
        printf("\nName: %s", s.name);
        printf("\nTotal Amount: %.2f", s.total_amount);

		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getche();
		if(test==27)
			break;

	}
	fclose(f);
}  

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");

	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			printf("\nEnter Period :");
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}

}
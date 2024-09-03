#include <stdio.h>

int main ()
{
	printf("--------------Main Menu-----------\n\n");
	
	printf("1. Add Books\n");
	printf("2. Display Book Information\n");
	printf("3. Search Books(Book Status)");
	printf("4. Exit\n\n");
	
	int a1;
	printf("Eneter : ");
	scanf("%d", &a1);
	printf("\n\n");
	
	if(a1==1)
	{
		printf("You can add book information\n\n");
		
		printf("Choose the category : \n\n");
		printf("1. Computer\n");
		printf("2. Electronics\n");
		printf("3. Mechanical\n\n");
		
		int a2;
		printf("Choose a category : ");
		scanf("%d", &a2);
		
		if(a2==1)
		{
			printf("You have choosed Computer category\n\n");
			
			printf("1. Introduction to C\n");
			printf("2. Introduction to Python\n");
			printf("3. Introduction to R Programing\n\n");
			
			int a3;
			printf("Choose a book : ");
			scanf("%d",&a3);
			
			printf("\n\n");
			
			if(a3==1)
			{
				printf("You have choosed Introduction to C book\n\n");
				
				char book_namea[50];
				char author_namea[50];
				int pagea;
				int pricea;
				
				printf("Book Name : ");
				scanf("%s", &book_namea);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_namea);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pagea );
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pricea);
				printf("\n\n");
			}
			else if(a3==2)
			{
				printf("You ave to choose Introduction to Python Programing Book \n\n");
				
				char book_nameb[50];
				char author_nameb[50];
				int pageb;
				int priceb;
				
				printf("Book Name : ");
				scanf("%s", &book_nameb);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_nameb);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pageb);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", priceb);
				printf("\n\n");
			}
			else if(a3==3)
			{
				
				printf("You have to choose Introduction to R Programming\n\n");
				
				char book_namec[50];
				char author_namec[50];
				int pagec;
				int pricec;
				
				printf("Book Name : ");
				scanf("%s", &book_namec);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_namec);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pagec);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pricec);
				printf("\n\n");
			}
		}
		else if(a1==2)
		{
			printf("You have schoosed Electronic catogury \n\n");
			
			printf("1. Practical Electroni for Inventory\n");
			printf("2. The art of Electronic\n");
			printf("3. Fundermental of digital circuts\n\n");
			
			int a4;
			printf("Choose a book : ");
			scanf("%d", &a4);
			
			printf("\n\n");
			
			if(a4==1)
			{
				printf("You have choosed Practical Electronic For Inventory \n\n");
				
				char book_named[50];
				char author_named[50];
				int paged;
				int priced;
				
				printf("Book Name : ");
				scanf("%s", &book_named);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_named);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", paged);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", priced);
				printf("\n\n");
			}
			else if(a4==2)
			{
				printf("You have choosed the art of Electroni Book\n\n");
				
				char book_namee[50];
				char author_namee[50];
				int pagee;
				int pricee;
				
				printf("Book Name : ");
				scanf("%s", &book_namee);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_namee);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pagee);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pricee);
				printf("\n\n");
			}
			else if(a4==3)
			{
				printf("You have choosed Fundermental of digital circute\n\n");
				
				char book_namef[50];
				char author_namef[50];
				int pagef;
				int pricef;
				
				printf("Book Name : ");
				scanf("%s", &book_namef);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_namef);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pagef);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pricef);
				printf("\n\n");
			}
		}
		else if(a2==3)
		{
			printf("You have t choosed Machanical Catagory\n\n");
			
			printf("1. Introduction to Autocad\n");
			printf("2. Fundermental of Therodynamic\n");
			printf("3. Machanical Engineering : Conventional and Object Type\n\n");
			
			int a5;
			printf("Choose a Book :");
			scanf("%d",a5);
			
			printf("\n\n");
			
			if(a5==1)
			{
				printf("You have to choosed Introduction to Autocad book\n\n ");
				
				char book_nameg[50];
				char author_nameg[50];
				int pageg;
				int priceg;
				
				printf("Book Name : ");
				scanf("%s", &book_nameg);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_nameg);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pageg);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", priceg);
				printf("\n\n");
			}
			else if(a5==2)
			{
				printf("You have to choosed Fundermental of Thermodynemic books\n\n");
				
				
				char book_nameh[50];
				char author_nameh[50];
				int pageh;
				int priceh;
				
				printf("Book Name : ");
				scanf("%s", &book_nameh);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_nameh);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pageh);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", priceh);
				printf("\n\n");
			}
			else if(a5==3)
			{
				printf("You have to choosed Mechenical Engineering : Conventional Objective Type Book\n\n");
				
				char book_namei[50];
				char author_namei[50];
				int pagei;
				int pricei;
				
				printf("Book Name : ");
				scanf("%s", &book_namei);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%s", &author_namei);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pagei);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d", pricei);
				printf("\n\n");		
				}	
		}
		else if(a1==3)
		{
			printf("You can search the book(book Status)\n\n");
			
			printf("Press the code:123 for Introduction to C ");
			printf("Press the code:456 for Introduction to Python ");
			printf("Press the code:789 for Introduction to R Programing ");
			printf("Press the code:987 for Practical Electroni for Inventory ");
			printf("Press the code:654 for The art of Electronic ");
			printf("Press the code:321 for Fundermental of digital circuts");
			printf("Press the code:159 for Introduction to Autocad ");
			printf("Press the code:753 for Fundermental of Therodynamic ");
			printf("Press the code:486 for Machanical Engineering : Conventional and Object Type");
		    
		    int a6;
		    printf("Eneter the book to search (USE THE CODE) : ");
		    scanf("%d",&a6);
		    
		    printf("\n\n");
		    
		    switch(a6)
		    {
		    	case123:
		    		printf("Book Name : Introduction to C\n\n");
		    		printf("Book Status : 10 Copies left");
		    		break;
		    		
				case456:
		    		printf("Book Name : Introduction to Python\n\n");
		    		printf("Book Status : 5 Copies left");
		    		break;
		    		
				case789:
		    		printf("Book Name : Introduction to R Programming\n\n");
		    		printf("Book Status : 6 Copies left");
		    		break;
		    		
				case987:
		    		printf("Book Name : The art of Electronic\n\n");
		    		printf("Book Status : 7 Copies left");
		    		break;
		    		
				case654:
		    		printf("Book Name : Fundermental of Digital Circute\n\n");
		    		printf("Book Status : 8 Copies left");
		    		break;
		    		
		    	case321:
		    		printf("Book Name : Introduction to Autocad\n\n");
		    		printf("Book Status : 2 Copies left");
		    		break;
		    	case159:
		    		printf("Book Name : Fundermental of Thermodinamic\n\n");
		    		printf("Book Status : 9 Copies left");
		    		break;
		    	case753:
		    		printf("Book Name : Machanical Engineering\n\n");
		    		printf("Book Status : 4 Copies left");
		    		break;
			}
		}
		else if(a1==4)
		{
			printf("Library is Close\n\n");
			printf("have a nice day");
			
		}
	}
	return 0;	
}

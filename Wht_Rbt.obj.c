#include <stdio.h>
#include <string.h>


//Just works on Micro$oft Windows...


int main()
{
	
	system ("color 9f");
	
	system ("title Central Park Control Console");
	printf ("Jurassic Park, System Security Interface\nVersion 4.0.5, Alpha E\nReady...");
	
	//This is the password
	char *pass1 = "access main please";
	
	char resp[20];
	
	int i;
	i = 0;
	
	do{	
		fflush(stdin);
		
		printf ("\n>");
		
		gets(resp);
		
		if (strcmp(pass1, resp) == 0){
		printf ("ACCESS GRANTED\n");
		system ("pause");
		goto dere;
		}
		else{
		printf ("access: ACCESS DENIED.");
		}
		i++;
	}while (i < 3);
	
	Sleep(150);
	printf ("...and....\n");
	Sleep(1000);
	do{
		printf ("YOU DIDN'T SAY THE MAGIC WORD!\n");
		Sleep(50);
		i++;
	}while (i < 30);
	
	int a;
	a = 0;
	
	system("start Ah.mp4");
	
	system("pause >nul");
	
	dere:
	
	return 0;
}


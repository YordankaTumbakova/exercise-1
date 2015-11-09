//1.Izbirane na fail s vyvejdane na poredniq mu nomer ot daden spisyk
//2. Broi {}
//3. Broi cifri v komentari
//4. Da se opredeli nai-dylgiq komentaren tekst ( v broi simvoli i nomer na nachalen red)
#include<stdio.h>
#include<stdlib.h>

void chosenFile(int* chooseFile);
void countBrackets(*fp);
void countNumbersInCommnents(*fp);
void longestTextComment(*fp);


int main()
{
	FILE *fp=NULL;
	int chooseFile=0;
	int chooseFunction=0;
	do
	{
	   	printf("Choose function from 1 to 4(4 is Exit):");	
		scanf(" %d", &chooseFunction); 
	}
		while(chooseFunction<1 || chooseFunction>4);
 
 	switch(chooseFunction)
	{
	    case 1:
	    	printf("Finding the number of all {}\n"); 
	        chosenFile(chooseFile);
	        countBrackets(fp);
	    break;
	    
	    case 2:
	        printf("Counting the numbers in the comments\n");
	        chosenFile(chooseFile);
	        countNumbersInCommnents(fp);
	    break;
	    
	    case 3:
	        printf("The longest comment row (number of symbols and the number of the first row\n");
	        chosenFile(chooseFile);
	        longestTextComment(fp);
	    break;
	    
	    case 4:
	        printf("Exit!\n");
	        exit(0);
	    break;
	}
	   
	
	
    return 0;
}
    void chosenFile(int* chooseFile, *fp)
    {
      do
    	{
    		printf("Choose file from 1 to 4:");	
    		scanf(" %d", &chooseFile);
	    }
    	while(chooseFile<1 || chooseFile>4);
    	
      switch(chooseFile)
    	{
    		case 1: 
    			printf("You've chosen File 1");  
    	    		*fp = fopen("/file1.c", "r");
    		break;
		
	    	case 2: 
	    		printf("You've chosen File 2");   
	    		*fp = fopen("/file2.c", "r");
	    	break;
		
	    	case 3: 
			printf("You've chosen File 3");  
			*fp = fopen("/file3.c", "r");
		break;
		
		case 4: 
			printf("You've chosen File 4");   
			*fp = fopen("/file4.c", "r");
		break;
	
	    }
    }

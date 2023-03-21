#include <stdio.h>

/*
* functions .
*/
int numberOfPositions(void);

/*
 * main - is the entry point .
 * Return 0 code is good .
 */

int main(int argc, char **argv)

{
  printf("%s",argv[0]);
  /*
    GET THE NUMBER OF ADDRESSES TO CHECK !
   */
  unsigned int n = numberOfPositions() ;
  /*
   * VARIBLES 
   * data var is the name of executed file and it is helper for looping :)
   */
  char* data =argv[0];
  unsigned int j = 0;
  unsigned int i = 0;
  unsigned int counter = 0 ;


  printf("\n");
  printf("*************** CHECK START ****************");
  printf("\n");

  
  for(i ; i < n ; i++)
    {
       
      for(j;j<=counter;j++)
	{
	  if(data[j] != 0)
	    {
	      printf("\n");
	      printf("Position [%i] | ",i);
	      printf("Data stored \"%s\" | ",&data[j]);
	      printf("Address [%p] | ",&data[j]);
	      printf("Data ASCII #");
	      
	      while(data[j] != 0)
		{
		  
		  /**
		   * Data sorted char by char 
		   *
		   */
		  
		  printf("%i",data[j]);
		  j++;
		  counter++;
		}
	      printf("#\n");

	    }
	  else
	    {
	      
	      printf("\n");	      
	      printf("Position [%i] | is Empty | ",i);
	      printf("Address [%p] | ",&data[j]);
	      printf("Data ASCII #%i#",data[j]);
	      printf("\n");
	      while(data[j] == 0)
		{
		  j++;
		  counter++;
		}
	      }
	}
      j--;
    }
  printf("\n");
  printf("*************** END OF CHECK ****************");
  printf("\n");
  printf("YOU HAVE CHECKED : %d Bytes of RAM",j/8);
  printf("\n");
  printf("*********************************************");
  printf("\n");
  return (0) ;
}

/*
 * ASK USER NUMBER OF ADDRESS TO CHECK ! 
 * retutn int > 0
 */
int numberOfPositions(void)
{
  int n;
  printf("\n");
  do
    {
      //int m ;
      printf("HOW MANY ADDRESS YOU WANT TO SEE ITS DATA ? ");
      printf("\n");
      scanf("%i",&n);
      
      /*I TRYED TO EVATE NONE INT INPUT BUG CUSED BY DATA TYPE*/
      /**
       *
      if(m / 1 != m || m < 0)
	{
	  printf("%ls is not a number \n",&m);
	  printf("PLEASE ENTER A VALID NUMBER");
	  m = 0 ;
	  
	}
      else
	{
	  n = m;
	  
	}
      */
    }while(n <= 0);
}

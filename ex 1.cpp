#include<stdio.h>
int main()
{
int a,b,choise,res;
printf("====OPERATOR AND EXPRESSION====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n----MEENU----\n");
printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Multiplication\n");
printf("4.Devision\n");
printf("5.Modulus\n");
printf("\nEnter your choise:");
scanf("%d",&choise);
switch(choise)
{
	case 1:
		res=a+b;
	    printf("Result=%d",res);
		break;
	case 2:
	    res=a-b;
	    printf("Result=%d",res);
		break;	
	case 3:
		res=a*b;
	    printf("Result=%d",res);
		break;
	case 4:
		if(b !=0)
		{
		res=a/b;
	    printf("Result=%d",res);
	    }
	    else
	    {
	    	printf("Devision by zero is not possible.");
		}
		break;
 case 5:
	 if(b!=0)
	 {
	 	res=a%b;
	 	printf("Result=%d",res);
     }
	 else
	 {
	    	printf("Modulus by zero is not possible.");
	 }
		 break;
		default:
			printf("invalid choise");
 }
		 return 0;
	}
	
	

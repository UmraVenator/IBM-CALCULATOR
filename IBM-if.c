#include <stdio.h>
int main ()
{
	float W, H, b;
	
	printf("Welcome,this programm will calculate your IBM.Please follow the instrunctions. \nPlease enter your weight in Killogramms :) ") ;
	scanf("%f", &W);
	
	printf("Now please enter your height in Meters :) ");
	scanf("%f", &H);
	
	b = W / (H * H);
	
	printf("Your IBM is %f . And that means...\n",b);
	if (b<18)
	{
		printf("\aYou are skinny");
	}
else if((b>18)&&(b<25))
{
	printf("\aYou are normal");
}
else if((b>25)&&(b<30))
	{
		printf("\aYou are fat");
	}
else if (b>30)
	{
		printf("\aYou are obese");
	}
	
	printf(" \nThe values are: \n >18 ==> Skinny \n 18,5-24,9 ==> Normal \n 25-29,9 ==> Fat \n 30< ==> Obese");
	return 0;
	
}

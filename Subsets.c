#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dec_to_bin(int x);

int main()

{
	
	int x,i;

    printf("Enter the amount of your characters:\n");
    scanf("%d",&x);
    x++;//when you enter the amount of your characters and you press enter the 'Enter' goes as a character to the first element of your array
    char test[x];

    printf("Enter your characters as a string:\n");

    //test[0] == 'enter'

    for(i=0; i<x; i++)
    {
        scanf("%c",&test[i]);
    }

    int amount = pow(2,x-1);
    int a[amount];
    
    for(i=0;i<amount;i++){
    	a[i] = i;
	}
	
	for(i=0;i<amount;i++){
    	a[i] = dec_to_bin(i);
	}
	
	for(i=0;i<amount;i++){
		int j = 1;
		printf("%d) ",i+1);
		for(;a[i] != 0;a[i] /= 10){
			if (a[i]%10 == 1){
				printf("%c",test[j]);	
			}
			j++;
			
		}
		puts("");
	}

    return 0;
}


//dec to bin function

int dec_to_bin(int x){

    int b = 0 , z = 1 , r = 0;

		while (x != 0)
		{
			b = x % 2;
			x /=  2;
			r = b * z + r;
			z *= 10;
		}

    return r;
}




















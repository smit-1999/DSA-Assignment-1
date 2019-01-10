#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	int number=400000,i,j;
    //printf("Enter the number\n");
    //scanf("%d",&number);

    int primes[number+1];

    //populating array with naturals numbers
    for(i = 2; i<=number; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }
	int finprimes[100000];
	int z=0;
   for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0){
        	finprimes[z]=primes[i];
        	z+=1;
		}
            //printf("%d\n",primes[i]);
            
    }
	//printf("%d",z);
	int q;
	for(q=0;q<z;q++){
		if(finprimes[q]>=a){
			int r;
			for(r=q;r<z;r++) {
				if(finprimes[r]<=b){printf("%d ",finprimes[r]);}
				else{
					printf("End");
					exit(0);
				}
			}
		}
	}
	
	
}
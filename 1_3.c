#include <stdio.h>

int main()
{
    int number=100000,i,j;
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
	int finprimes[number+1];
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
    
    
    int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int p=0;p<n;p++){
		for(int q=0;q<n;q++){
			arr[p][q]=0;
		}
	}
	
	int temp=n*n;char flag;int b=n-1,ub=0,c=0,rc=n-1;
	if(temp%2==0) flag='r'; else flag='l';
	int q=(n*n)-1;
	while(temp>0){
		//printf("%d %c",temp,flag);
			if(flag=='l'){
			//b=n-1;
			for(int p=n-1;p>=0;p--){
			//	printf("%d ",temp);
				if(arr[b][p]==0){
												
				arr[b][p]=finprimes[q];
				
				q-=1;temp-=1;
				}
			}
			flag='u';
			b-=1;
			
		}
		if(flag=='u'){
			//c=0;
			for(int p=n-1;p>=0;p--){
				if(arr[p][c]==0){
				
				arr[p][c]=finprimes[q];
				q-=1;temp-=1;
			}
			}
			flag='r';
			c+=1;
		}
		if(flag=='r'){
			//ub=0;
			
			for(int p=0;p<n;p++){
				if(arr[ub][p]==0){
					arr[ub][p]=finprimes[q];
					q-=1;temp-=1;
				}
				
			}	
			flag='d';
			ub+=1;				
		}
		if(flag=='d'){			
			for(int p=0;p<n;p++){
				if(arr[p][rc]==0){
					arr[p][rc]=finprimes[q];
					q-=1;temp-=1;
				}
			}
			flag='l';
			rc-=1;
		}
		
	}
	for(int p=0;p<n;p++){
		for(int q=0;q<n;q++){
			printf("%d  ",arr[p][q]);
		}
		printf("\n");
	}

    return 0;
}
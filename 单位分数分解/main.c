
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	long long int k;
	
	
    while(printf("ÊäÈë·ÖÄ¸:\n"),~scanf("%lld",&k))
	{
		system("cls");
        for(long long int y = k + 1 ; y <= 2 * k ; y++)
		{
            if(k * y % (y - k) == 0)
			{
                long long int x = k * y / (y - k);
                printf("1/%lld = 1/%lld + 1/%lld\n" , k , x , y);
            }
        }
    }
    
}

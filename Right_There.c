#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    scanf("%d%d", &n, &x);
	    if(x-n>=0)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}


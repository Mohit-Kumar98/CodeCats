#include <stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20]; 
	int m=0,n=0,x[20]={0},y[20]={0}; 
    int  i,j,i1,j1,i2,j2,k,count1=0,count2=0,n1,n2,total,T=0,f1=0;
    printf("Enter  the string1 : ");
    gets(s1);
	printf("Enter  the string2 : ");
    gets(s2);
    n1=strlen(s1);
	n2=strlen(s2);
    for(i1=0;i1<n1;i1++)  
    {
		if(s1[i1])
		{ count1=1;
 		  for(j1=i1+1;j1<n1;j1++)  
	      {   
	    	
	        if(s1[i1]==s1[j1])
    	    {
                 count1++;
                 s1[j1]='\0';
	     	}
	      }
	      x[m]=s1[i1];
	      x[m+1]=count1;
	      m+=2;
	    }
    }
	
    for(i2=0;i2<n2;i2++)  
    {   
		if(s2[i2])
        {
			 count2=1;
	
 		for(j2=i2+1;j2<n2;j2++)  
	    {   
	    	if(s2[i2]==s2[j2])
    	    {
                 count2++;
                 s2[j2]='\0';
	     	}
	      }
	      y[n]=s2[i2];
	      y[n+1]=count2;
	      n+=2;
	    }
	}
	for(i=0;i<20;i+=2)
	{
		for(j=0;j<20;j+=2)
		{
			if(x[i]==y[j] && x[i] && y[j])
			{
			    int q,w,total;
			    char c1,c2;
				c1=x[i+1];
				c2=y[j+1];
			    q=(int)(c1);
			    w=(int)(c2);
			    total=q-w;
			    if(total>3)
			    f1++;
		        else
		        {
			    	x[i+1]=(char)(total);
			  	    y[j+1]=(char)(total);
			    }
			}
		}
	}

	for(i=1;i<20;i+=2)

	{
				int q,w,total;
			    char c1,c2;
				c1=x[i];
				c2=y[i];
			 	q=(int)(c1);
			    w=(int)(c2);
			 	if(q>3 || w>3)
				{
					f1++;
				}
	}

	if(f1>0)
     printf("False");
    else
     printf("True");
	 
	return 0;
}
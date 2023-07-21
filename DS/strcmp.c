#include <stdio.h>
#include <string.h>

int main(void) {
	int t; scanf("%d",&t);
	while(t!=0)
	{
	    char arr[10]; char cmp[10];
	    scanf("%[^\n]%*c",arr);
	    scanf("%s",cmp);
	    for(int i=0;i<strlen(arr);i++)
	    {
	        if(arr[i]!=' ')
	        {
	        for(int j=0;j<strlen(cmp);j++)
	        {
	            if(arr[i]==cmp[j])
	            {
	                printf("%c\n",arr[i]);
	                j=strlen(cmp);
	                i=strlen(arr);
	            }
	        }
	        }
	    }
	    t--;
	}
	return 0;
}

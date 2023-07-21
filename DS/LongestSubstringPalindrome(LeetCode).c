#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *s="abaabc";
    char newArray[strlen(s)*2+1];
   int j=0;
   for(int i=0;i<strlen(s);i++){
      newArray[j++]='#';
      newArray[j]=s[i];
      j++;
      if(i==strlen(s)-1){
        newArray[j]='#';
      }
   }
   int intArray[j+1];
   for(int i=0;i<j+1;i++){
    intArray[i]=0;
   }
   for(int i=1;i<j;i++){
    int front=i-1;
    int last=i+1;
    int count=0;
    while(front>=0 && last<=j)
    {
        if(newArray[front]==newArray[last]){
            front--;
            last++;
            count++;
        }
        else
        {
            front=-1;
            last=j+1;
        }
    }
    intArray[i]=count;
   }
   int maxElement=0;
   int maxIndex;
   for(int i=0;i<j+1;i++)
   {
       if(intArray[i]>maxElement)
       {
           maxElement=intArray[i];
           maxIndex=i;
       }
   }
   char *ans=(char*)malloc(maxElement*sizeof(char)+1);
   int index=0;
   for(int i=maxIndex-maxElement;i<maxIndex+maxElement;i++)
   {
       if(newArray[i]!='#')
       {
           ans[index++]=newArray[i];
       }
   }
   ans[index]='\0';
   printf("%s",ans);
}

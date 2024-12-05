//6
#include<stdio.h>
int main(){
int num[]={10,2,15,20,35,46,85};
int value=20,pos=-1,i;
for(i=0;i<7;i++)
{
    if(value==num[i])
    {
        pos=i+1;
        break;
    }
}
if(pos==-1)
    {
        printf("item is not found");
    }
    else
    {
        printf("the value is found at position %d",pos);

    }
    return 0;
    }

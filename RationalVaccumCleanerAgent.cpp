#include<stdio.h>

int v_cleaner(int location,int status);
int main()
{
    int location,status,action;
    printf("Please enter location");
    scanf("%d",&location);
    printf("Please Enter Status");
    scanf("%d",&status);

    action=v_cleaner(location,status);

    if(action==4)
        printf("Suck");
    else if(action==5)
        printf("Left");
    else if(action==6)
        printf("Right");
    else
        printf("Invalid");
    return 0;
}
int v_cleaner(int location,int status){
if(location==0 && status ==2)
    return 4;//suck
else if(location==0 && status==3)
    return 5;//left
else if(location==1 && status==2)
    return 4;
else if(location==1 && status==3)
    return 6;//right
else
    printf("Invalid");
}

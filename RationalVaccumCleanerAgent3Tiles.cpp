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

    if(action==5)
        printf("Suck");
    else if(action==6)
        printf("Left");
    else if(action==7)
        printf("Right");
    else
        printf("Invalid");
    return 0;
}
//3-dirty  4-clean  5-suck  6-left  7-right
int v_cleaner(int location,int status){
if(location==0 && status ==3)
    return 5;//suck
else if(location==0 && status==4)
    return 6;//left
else if(location==1 && status==3)
    return 5;
else if(location==1 && status==4)
    return 7;//right
else if(location==2 && status==3)
        return 5;
else if(location==2 && status==4)
    return 7;

else
    printf("Invalid");
}


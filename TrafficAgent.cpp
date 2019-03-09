#include<stdio.h>

char TrafficAgent(char roadStatus);

int main()
{

    char roadStatus1,roadStatus3,roadStatus5,roadStatus7;
    char action[10];
    //get the road status from user
    printf("Enter The Traffic Status Of Road Number=1 ... \n");
    scanf("%c",&roadStatus1);
    //get the road status from user
    printf("Enter The Traffic Status Of Road Number=3 ... \n");
    scanf("%c",&roadStatus3);
    //get the road status from user
    printf("Enter The Traffic Status Of Road Number=5 ... \n");
    scanf("%c",&roadStatus5);
    //get the road status from user
    printf("Enter The Traffic Status Of Road Number=7 ... \n");
    scanf("%c",&roadStatus7);

    action[10]= char TrafficAgent(roadStatus1,roadStatus3,roadStatus5,roadStatus7);

    if(action=="G1")
    {
        printf("Turn ON GREEN on Road Number 1.\n");
    }
    else if(action=="G3")
    {
        printf("Turn ON GREEN on Road Number 3.\n");
    }
    else if(action=="G5")
    {
        printf("Turn ON GREEN on Road Number 5.\n");
    }
    else if(action=="G7")
    {
        printf("Turn ON GREEN on Road Number 7.\n");
    }
    else if(action=="G3/G1")
    {
        printf("Turn ON GREEN on Road Number 3 or 1.\n");
    }
    else if(action=="G5/G7")
    {
        printf("Turn ON GREEN on Road Number 5 or 7.\n");
    }
    else if(action=="G3/G5/G7")
    {
        printf("Turn ON GREEN on Road Number 3 or 5 or 7.\n");
    }
    else if(action=="G3/G5")
    {
        printf("Turn ON GREEN on Road Number 3 or 5.\n");
    }
    else if(action=="G1/G7")
    {
        printf("Turn ON GREEN on Road Number 1 or 7.\n");
    }
    else{
        printf("Turn ON Red or Wrong Input");
    }
    return 0;


}

char TrafficAgent(char roadStatus1,char roadStatus3,char roadStatus5,char roadStatus7)
    {
        if (roadStatus1==h && roadStatus3== l && roadStatus5== l && roadStatus7== l)
        {
            return "G1";
        }
        else if (roadStatus1 == l && roadStatus3 == h && roadStatus5 == l && roadStatus7 == l)
        {
            return "G3";
        }
        else if (roadStatus1 == l && roadStatus3 == l && roadStatus5 == h && roadStatus7 == l)
        {
            return "G5";
        }
        else if (roadStatus1 == l && roadStatus3 == h && roadStatus5 == l && roadStatus7 == h)
        {
            return "G7";
        }
        else if (roadStatus1 == h && roadStatus3 == h && roadStatus5 == l && roadStatus7 == l)
        {
            return "G3/G1";
        }
        else if (roadStatus1 == l && roadStatus3 == l && roadStatus5 == h && roadStatus7 == h)
        {
            return "G5/G7";
        }
        else if (roadStatus1 == l && roadStatus3 == h && roadStatus5 == h && roadStatus7 == h)
        {
            return "G3/G5/G7";
        }
        else if (roadStatus1 == l && roadStatus3 == h && roadStatus5 == h && roadStatus7 == l)
        {
            return "G3/G5";
        }
        else if (roadStatus1 == h && roadStatus3 == l && roadStatus5 == l && roadStatus7 == h)
        {
            return "G1/G7";
        }
        else{
            return "R";
        }
    }

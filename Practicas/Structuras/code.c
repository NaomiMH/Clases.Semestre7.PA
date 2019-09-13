#include <stdio.h>

struct info 
{ 
   char name[20];
   char lname[20];
   int age;
   int gender;
   char mission[12];
};

int main ()
{
    struct info agent;
    printf("Name\n");
    scanf("%s",&agent.name);
    printf("Last name\n");
    scanf("%s",&agent.lname);
    printf("Age\n");
    scanf("%d",&agent.age);
    printf("Gender 0=Mujer 1=Hombre\n");
    scanf("%d",&agent.gender);
    printf("Mission\n");
    scanf("%s",&agent.mission);
    
    printf("Agente %s %s, de %d años, ",agent.name,agent.lname,agent.age);
    if(agent.gender)
        printf("hombre");
    else
        printf("mujer");
    printf(". Actualmente en la mission %s.",agent.mission);
    return 0;
}

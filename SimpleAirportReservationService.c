#include <stdio.h>
void linkfloat();
void display(int);
void checks();
void perm();
struct Plane
{
    char start[4];
    char dest[4];
    int stime;
    int atime;
    int seats;
};
struct Plane pl[20];

int main()
{
    int n,i;
    printf("Enter the number of planes to be entered in the registry:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Info regarding plane %d\n",(i+1));
        printf("Enter Starting Point: ");
        scanf("%s",pl[i].start);
        printf("\nEnter Destination: ");
        scanf("%s",pl[i].dest);
        printf("\nEnter departure time (in hours): ");
        scanf("%d",&pl[i].stime);
        printf("\nEnter arrival time (in hours): ");
        scanf("%d",&pl[i].atime);
        printf("\nEnter number of remaining seats: ");
        scanf("%d",&pl[i].seats);
        printf("==================================================\n");
    }
    display(n);
    perm();
}

void display(int x)
{
    int k;
    printf("There are %d planes today\n",x);
    for(k=0;k<x;k++)
    {
        printf("Starting Point: ");
        printf("%s",pl[k].start);
        printf("\nDestination: ");
        printf("%s",pl[k].dest);
        printf("\nDeparture time: ");
        printf("%d",pl[k].stime);
        printf("\nArrival time: ");
        printf("%d\n",pl[k].atime);
        printf("----------------------------------------------------\n");
    }
}

 void perm()
    {   int j;
        while(1)
        {
            printf("Do you wish to proceed(1 for Yes||for No press any number): ");
            scanf("%d",&j);
            if(j==1)

                checks();

        else
            return;
        }
    }
 void checks()
 {
    int s;
    printf("Select a flight by number: ");
    scanf("%d",&s);
    if(pl[s-1].seats != 0)
    {
        pl[s-1].seats--;
        printf("Thank you for selecting flight %d Happy Journey!\n",s);
        return;
    }
    else if(pl[s-1].seats==0)
        printf("Sorry no seats available on this Flight\n");
 }

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int t[100][100];
 int i,j,nl,nc,n,test,f;
 do
 {
     printf("donnez nb de ligne");
     scanf("%i",&nl);} while ((n>100 ) && (n<3));
      do
 {
     printf("donnez nb de colonne");
     scanf("%i",&nc);} while (n>100 && n<3);



 for (i=0;i<nl;i++)
 {
    for (j=0;j<nc;j++)

     {
         printf("remplir tab");
         scanf ("%i",&t[i][j]);
     }
 }
 f=0;
 for (i=0;i<nl;i++)
 {
if (t[i][i]==1)
{

    f++;
}
 }
if (f==n)
{
    test=1;
    i=0;
}
    while ((test==1)&&(i<n))
    {

        i++;
    j=0;}
    while((j<n)&&(test==1))
    {
        if(t[i][j]!=t[j][i])
    {
        test=0;
        j++;

    }
}
if (test==1)
{
printf("parfaite");

}
    else
    {
printf("non parfaite ");}



    return 0;
}

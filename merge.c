#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,temp;
    int a[1000],b[1000],c[20000];
    printf("Enter the size of first array");
    scanf("%d",&n1);
    printf("enter the array elements");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
        printf("enter the size of second array");
    scanf("%d",&n2);
    printf("enter the array elements");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    n3=n1+n2;
    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(i=0;i<n2;i++)
        c[i+n1]=b[i];
    printf("the merged array");
    for (i=0;i<n3;i++)
    printf("%d",c[i]);
    printf("\nFinal array after sorting");
    for(i=0;i<n3;i++)
    {
      for(j=i+1;j<n3;j++)
      {
          if(c[i]>c[j]);
          {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
          }
      }
    }

    for(i=0;i<n3;i++)
        printf("%d",c[i]);
        return 0;
}

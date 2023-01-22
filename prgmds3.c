#include<stdio.h>
#include<stdlib.h>
void bitwiseOR();
void bitwiseAND();
void bitwiseDifference();
void bitwiseEquality();
int s[10],s1[10],s2[10],l1,l2,i,j,s3[10];
void main()
{
    int choice=0;
    while(choice!= 5)
    {
        printf("\n\nSelect your choice\n");
        printf("\n1.Union\n2.Intersection\n3.Difference\n4.Equality\n5.Exit");
        printf("\n\nEnter your choice:-");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
                bitwiseOR();
                break;
            case 2:
                bitwiseAND();
                break;
            case 3:
                bitwiseDifference();
                break;
            case 4:
                bitwiseEquality();
                break;
            case 5:
                exit(0);
        }
    }
}
void bitwiseOR()
{
    printf("Enter the size of first set:");
    scanf("%d",&l1);
    printf("Enter the size of second set:");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal\n");
        return 0;
    }
    printf("Enter the elements in the first set:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("Enter the elements in the second set:");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);

    }
    printf("\nUnion is\n");
    for(i=0;i<l1;i++)
    {
        s[i]=s1[i] || s2[i];
        printf("%d",s[i]);
    }
}
void bitwiseAND()
{
    printf("Enter the size of first set:");
    scanf("%d",&l1);
    printf("Enter the size of second set:");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal\n");
        exit(0);
    }
    printf("Enter the elements in the first set:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("Enter the elements in the second set:");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);

    }
    printf("\nIntersection is\n");
    for(i=0;i<l1;i++)
    {
        s[i]=s1[i] && s2[i];
        printf("%d",s[i]);
    }
}
void bitwiseDifference()
{
    printf("Enter the size of first set:");
    scanf("%d",&l1);
    printf("Enter the size of second set:");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal\n");
        return 0;
    }
    printf("Enter the elements in the first set:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("Enter the elements in the second set:");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);

    }
    printf("\nThe Difference\n");
    for(i=0;i<l1;i++)
    {
        s3[i]=!s2[i];
    }
    for(j=0;j<l2;j++)
    {
        s[j]=s1[j] && s3[j];
        printf("%d",s[j]);
    }
}
void bitwiseEquality()
{
    printf("Enter the size of first set:");
    scanf("%d",&l1);
    printf("Enter the size of second set:");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal\n");
        return 0;
    }
    printf("Enter the elements in the first set:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("Enter the elements in the second set:");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);

    }
    printf("Equality\n");
    for(i=0;i<l1;i++)
    {
        if(s1[i]!=s2[i])
        {
            printf("The sets are not equal");
            return 0;
        }
    }
    printf("The sets are equal");
    return 0;
}




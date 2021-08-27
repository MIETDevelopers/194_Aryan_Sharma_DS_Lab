#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Shop
{
     int batch_no,batch_cost,batch_accno;
     char batch_name[20],batch_pub[20],batch_author[20];
}z[10];
int main()
{
     int n,i,ch;
     char Akrotname[20],Shop_name[20];
     printf("/*How Many Records of Shops You Want to Add*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("..................................................................\n");
     for(i=0;i<n;i++)
     {
          printf("\tEnter Details of Walnuts Shops-%d",i+1);
          printf("\n................................................\n");
          printf("Shop Number      : ");
          scanf("%d",&z[i].batch_no);
          printf("Walnuts Name(Desi--videsi)        : ");
          scanf("%s",z[i].batch_name);
          printf("Shop Name     : ");
          scanf("%s",z[i].batch_author);
          printf("\nQuality Number : ");
          scanf("%s",z[i].batch_pub);
          printf("\nCost:  ");
          scanf("%d",&z[i].batch_cost);
          printf("item No. : ");
          scanf("%d",&z[i].batch_accno);
          printf(".................................................\n");
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("\n............................................\n");
          printf("\n1.Name of Specific Shop");
          printf("\n2.Name of Specific Quality");
          printf("\n3.All Walnuts Costing Rs. 1000 & Above");
          printf("\n4.All Shops Details");
          printf("\n5.Exit");
          printf("\n..............................................\n");
          printf("\nEnter Your Choice : ");
          scanf("%d",&ch);
          printf("\n");
          switch(ch)
          {
               case 1:
                    printf("Enter Shop Name : ");
                    scanf("%s",Akrotname);
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(z[i].batch_author,Akrotname)==0)
                         printf("\nShop Number      : %d\nWalnuts Name(Desi--videsi)        : %s\nItem Number : %d\n",z[i].batch_no,z[i].batch_name,z[i].batch_accno);
                    }
                    break;
               case 2:
                    printf("Enter Walnuts Name(Desi--videsi) : ");
                    scanf("%s",Shop_name);
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(z[i].batch_pub,Shop_name)==0)
                              printf("\nShop Number      : %d\nWalnuts Name(Desi--videsi)        : %s\nItem Number : %d\n\n",z[i].batch_no,z[i].batch_name,z[i].batch_accno);
                    }
                    break;
               case 3:
                    for(i=0;i<n;i++)
                    {
                         if(z[i].batch_cost>=500)
                         {
                              printf("Shop Number : %d\n",z[i].batch_no);
                              printf("Shop Name : %s \n",z[i].batch_name);
                              printf("Cost : %d\n",z[i].batch_cost);
                              printf("Item Number : %d\n",z[i].batch_accno);
                              printf("\n...............................................\n");
                         }
                    }
                    break;
               case 4:
                    for(i=0;i<n;i++)
                    {
                         printf("Shop Number   : %d\n",z[i].batch_no);
                         printf("Walnuts  Name(Desi--videsi) : %s \n",z[i].batch_name);
                         printf("Shop Name : %s\n",z[i].batch_author);
                         printf("Quality Number : %s\n",z[i].batch_pub);
                         printf("Cost : %d\n",z[i].batch_cost);
                         printf("Item Number : %d\n",z[i].batch_accno);
                         printf("\n....................................................\n");
                    }
                    break;
               case 5:
                    exit(0);
          }
     }
     return 0;
}

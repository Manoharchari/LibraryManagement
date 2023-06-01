
#include <stdio.h>
#include<string.h>
struct book{
    int bno,flag;
    char bname[20],aname[20];
}s[100];
int n,i;
void addbook(){
    
    printf("How many Books you want to add:");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
    printf("Enter  Book %d Number:",i);
    scanf("%d",&s[i].bno);
    printf("Enter Book Name:");
    scanf("%s",s[i].bname);
    printf("Enter Author Name:");
    scanf("%s",s[i].aname);
    printf("%d Book(s) Added successfully\n",i);
    }
   
}

int h;
void display(){
    int n1,c1=0;
    printf("Books in library :");
    for(int i=1;i<=n;i++){
        printf("\nBook%d.%d %s",i,s[i].bno,s[i].bname);
    }
    printf("\nEnter the book number you want:");
    scanf("%d",&n1);
    for(int i=1;i<=n;i++){
        if(s[i].bno==n1){
            c1=1;
            h=i;
            break;
        }
        else{
            c1=0;
        }
    }
  if ( s[h].flag==1){
       printf("Book is issued\n");
   }
   else{
    if(c1==1){
    printf("Book number is:%d\n",s[h].bno);
    printf("Book Name is:%s\n",s[h].bname);
    printf("Book Author Name is:%s",s[h].aname);
    }
    else{
       printf("Invalid");
   
}
       
   }
}
void displayall(){
    printf("\n********Book Details Are:******\n");
      printf("\n");
    for(int i=1;i<=n;i++){
    printf("Book %d details are:\n",i);
    printf("Book number is:%d\n",s[i].bno);
    printf("Book Name is:%s\n",s[i].bname);
    printf("Book Author Name is:%s\n",s[i].aname);
    printf("---------------------------------\n");
    }
  
}
void issue1(){
    
    char s1[50];
    int iss,av=0;
    printf("Enter Book Name:");
    scanf("%s",s1);
    for(int i=1;i<=n;i++){
        if(strcmp(s1,s[i].bname)==0){
            av=1;
            break;
        }
        else{
            av=0;
            
        }
    }
   
    if(av==1){
            printf("Yes Book is Available\n");
            printf("Do You Want The Book?(Enter '1' for yes and '0' for No)");
            scanf("%d",&iss);
            for(int i=0;i<n;i++){
            if(iss==1){
                printf("Book is issued.Thank you.\n");
               s[i].flag=1;
               break;
            }
            else{
                printf(" Book is  Available");
                s[i].flag=0;
            }
           
        }
        
    }
        else{
            printf("Book is not available\n");
        }
} 
void rece(){
    int r1;
    printf("Enter The Book Number:");
    scanf("%d",&r1);
}

void issue(){
    int o1;
    printf("\n1.Issue\n2.Receive\n");
    printf("Enter1:");
    scanf("%d",&o1);
    switch(o1){
        case 1:issue1();break;
        case 2:rece();break;
    }
}


void  main() {
    int o;
 do
 {
     printf("\n");
     printf("*****************************************************\n");
 printf("*******our LIBRARY MENU********");
 printf("\n1:Add  New Books\n2:Display Book Information\n3:Display All The Books\n4:Go to Book issue/Receive\n5:View Issued Books\n5:Display total number of books in the library\n6:Exit\n");
 printf("Enter your Choice:");
 scanf("%d",&o);
 switch(o){
     case 1:addbook();break;
     case 2:display();break;
     case 3:displayall();break;
     case 4:issue();break;
         
         
 }
}while(o<=6);
     
 
 
    return 0;

}

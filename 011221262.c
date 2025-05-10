#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[50];
    char position[50];
    int salary;
};



int main(){

    int data=0;
    int id, i, num, n=0;
    
    struct Employee employee[10]={0};

    
    printf("1. Add new employees\n");
    printf("2. Update employee information\n");
    printf("3. Delete employees\n");
    printf("4. View employee details\n");
    printf("5.Exits\n");

    

    while(data!=5){

         scanf("%d", &data);
         getchar();  
    
   

    

    switch (data) {
    case 0:
         printf("1. Add new employees\n");
         printf("2. Update employee information\n");
         printf("3. Delete employees\n");
         printf("4. View employee details\n");
         printf("5.Exits\n");
         break;




    case 1:
        printf("How many employees data?\n");
        scanf("%d", &n);
        getchar();  
        for(i = 0; i < n; i++){
            printf("Enter the ID\n");
            scanf("%d", &employee[i].id);
            getchar();  
            printf("Enter the name\n");
            gets(employee[i].name);  
            printf("Enter the position\n");
            gets(employee[i].position);  
            printf("Enter the salary\n");
            scanf("%d", &employee[i].salary);
            getchar();  
        }
       printf("\n0.back to home\n");
        break;

    case 2:
        printf("Enter the ID\n");
        scanf("%d", &id);
        getchar();  
        for(i = 0; i < 10; i++){  
            if(employee[i].id == id){
                printf("Enter the updated name\n");
                gets(employee[i].name);  
                printf("Enter the updated position\n");
                gets(employee[i].position); 
                printf("Enter the updated salary\n");
                scanf("%d", &employee[i].salary);
                getchar();  
            }
        }
         printf("\n0.back to home\n");;
        break;

    case 3:
        printf("Enter the ID\n");
        scanf("%d", &id);
        getchar();  
        for(i = 0; i < 10; i++){
            if(employee[i].id != id){
                printf("id doest not Exits");
                 printf("\n0.Back to home\n");
                break;
              
                 }else{
                      printf("ARE you sure to delete this information?\n");
                      printf("1. Yes\n");
                      printf("2. No\n");
                      scanf("%d", &num);
                       getchar(); 


                    if(num==1){
                     employee[i].id=0;
                     strcpy(employee[i].name, "NULL");
                     strcpy(employee[i].position, "NULL");
                     employee[i].salary = 0;
                     printf("Delete succesfully");
                      printf("\n0.Back to home\n");

                     break;
                       }
                       else{
                         printf("\n0.Back to home\n");
                         break;
                       }
                       
                  
                 }
             
                }
                break;
            
         
        

    case 4:
        printf("Enter the ID\n");
        scanf("%d", &id);
        getchar(); 
        int found=0; 
        for(i = 0; i < 10; i++){
            if(employee[i].id == id){ 
                 printf("Name = %s\n", employee[i].name);
                 printf("Position = %s\n", employee[i].position);
                 printf("Salary = %d\n", employee[i].salary);
                 found=1;
                 break;
                
               
            }
            if(!found){
                printf("Data does not exits");
                

            }
        }
        
        printf("\n0.back to home\n");
        break;
    }

  
    


    }
}

    


 




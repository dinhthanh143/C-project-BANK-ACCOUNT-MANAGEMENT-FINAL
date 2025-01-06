#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct User {
	char id[10];
	char name[10];
	char phone[10];
	char email[10];
	char status[10];
	
};
struct User user[100];
void sortUserByName(struct User user[], int n){
        int i, j, a, b, key; 
        printf("a. Sort User a->z \nb. Sort User z->a\n");
        printf("Enter choice: ");
        scanf("%d", &key);
        getchar();
        
        if(key=='a'){
                for(i=0;i<n-1;i++){
                        for(j=i+1;j<n;j++){
                                if(strcmp(user[i].name,user[j].name)>0){
                                        User temp = user[i];
                                        user[i] =user[j];
                                        user[j]=temp;
                                }
                        }
                        getchar(); 
                }
                printf("\n|============|=====================================|================================|===============|========|\n");
            printf("| %-10s | %-35s | %-30s | %-13s | %-6s |\n", "ID", "Name", "Email", "Phone", "Status");
            printf("|============|=====================================|================================|===============|========|\n");
            for (i=0;i<n; i++){
                printf("| %-10s | %-35s | %-30s | %-13s | %-6s |\n",
               user[i].id,
               user[i].name,
               user[i].email,
               user[i].phone,
                user[i].status);  
        printf("|------------|-------------------------------------|--------------------------------|---------------|--------|\n");
    }
    printf("Go Back (any key) or Exit (0) "); 
        }else if(key=='b'){
                for(i=0;i<n-1;i++){
                        for(j=i+1;j<n;j++){
                                if(strcmp(user[i].name,user[j].name)<0){
                                        User temp = user[i];
                                        user[i] =user[j];
                                        user[j]=temp;
                                }
                        }
                        getchar();
                }

                printf("\n|============|=====================================|================================|===============|========|\n");
            printf("| %-10s | %-35s | %-30s | %-13s | %-6s |\n", "ID", "Name", "Email", "Phone", "Status");
            printf("|============|=====================================|================================|===============|========|\n");
            for (i=0;i<n; i++){
                printf("| %-10s | %-35s | %-30s | %-13s | %-6s |\n",
               user[i].id,
               user[i].name,
               user[i].email,
               user[i].phone,
                           user[i].status);
        printf("|------------|-------------------------------------|--------------------------------|---------------|--------|\n");
    }
    printf("Go Back (any key) or Exit (0) "); 
        }else{        

        }
}


int main(){
	int n=0;
	struct User user={
	{1,Bach,1,1,1};
	{2,Anh,1,1,1};
		}	
	
	
sortUserByName(user,  n);


   return 0;
}


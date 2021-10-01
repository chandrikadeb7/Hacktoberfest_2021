#include <stdio.h>
#include <string.h>

struct phonebook {
    char first_name[20];
    char last_name[20];
    int landline;
    int mobile;
};

int main(){

    struct phonebook exist;
    strcpy(exist.first_name,"Arpit");
    strcpy(exist.last_name,"Jha");
    exist.landline = 014123456;
    exist.mobile = 1234567890;

    struct phonebook entry_1;
    strcpy(entry_1.first_name,"No Entry");
    strcpy(entry_1.last_name,"No Entry");
    entry_1.landline = 0;
    entry_1.mobile = 0;

    struct phonebook entry_2;
    strcpy(entry_2.first_name,"No Entry");
    strcpy(entry_2.last_name,"No Entry");
    entry_2.landline = 0;
    entry_2.mobile = 0;
   
    int choice,entry,data,list;
    printf("Welcome to Phonebook Application.\nSelect an Option:");
    while(choice != 4){
    printf("\n1) Store Data.\n2) Edit Data\n3) List Data\n4) Exit\n" );
    scanf("%d",&choice);
        if(choice == 1){
            while(entry){
            printf("Select Entry: ");
            scanf("%d",&entry);
            if(entry==2){
            printf("Enter First Name: ");
            scanf("%s",&entry_1.first_name);
            printf("Enter Last Name: ");
            scanf("%s",&entry_1.last_name);
            printf("Enter Landline No: ");
            scanf("%d",&entry_1.landline);
            printf("Enter Mobile No: ");
            scanf("%d",&entry_1.mobile);
            }
            else if(entry==3){
            printf("Enter First Name: ");
            scanf("%s",&entry_2.first_name);
            printf("Enter Last Name: ");
            scanf("%s",&entry_2.last_name);
            printf("Enter Landline No: ");
            scanf("%d",&entry_2.landline);
            printf("Enter Mobile No: ");
            scanf("%d",&entry_2.mobile);
            }
            }
        }
        else if(choice==2){
            printf("\nSelect Entry: ");
            scanf("%d",&entry);
            if(entry == 1){
                while(data){
                printf("Please select data to be edited:\n1)First name\n2)Last name\n3)Landline No\n4)Mobile No\n5)None\n");
                scanf("%d",&data);
                    if(data == 1){
                        scanf("%s",&exist.first_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 2){
                        scanf("%s",&exist.last_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 3){
                        scanf("%d",&exist.landline);
                        printf("Data has been modified.\n");
                    }
                    else if(data==4){
                        scanf("%d",&exist.mobile);
                        printf("Data has been modified.\n");
                    }
                }        
            }
            else if(entry==2){
                while(data){
                printf("Please select data to be edited:\n1)First name\n2)Last name\n3)Landline No\n4)Mobile No\n5)None\n");
                scanf("%d",&data);
                    if(data == 1){
                        scanf("%s",&entry_1.first_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 2){
                        scanf("%s",&entry_1.last_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 3){
                        scanf("%d",&entry_1.landline);
                        printf("Data has been modified.\n");
                    }
                    else if(data==4){
                        scanf("%d",&entry_1.mobile);
                        printf("Data has been modified.\n");
                    }
                }
            }
            else if(entry== 3){
                while(data){
                printf("Please select data to be edited:\n1)First name\n2)Last name\n3)Landline No\n4)Mobile No\n5)None\n");
                scanf("%d",&data);
                    if(data == 1){
                        scanf("%s",&entry_2.first_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 2){
                        scanf("%s",&entry_2.last_name);
                        printf("Data has been modified.\n");
                    }
                    else if(data == 3){
                        scanf("%d",&entry_2.landline);
                        printf("Data has been modified.\n");
                    }
                    else if(data==4){
                        scanf("%d",&entry_2.mobile);
                        printf("Data has been modified.\n");
                    }
                }
            }
        }
        else if(choice==3){
            while(list){
            printf("Enter the entry to be listed:");
            scanf("%d",&list);
            
            if(list == 1){
                printf("First Name: %s\n",exist.first_name);
                printf("Last Name: %s\n",exist.last_name);
                printf("Landline No: %d\n",exist.landline);
                printf("Mobile No: %d\n",exist.mobile);
            }
            else if(list==2){
                printf("First Name: %s\n",entry_1.first_name);
                printf("Last Name: %s\n",entry_1.last_name);
                printf("Landline No: %d\n",entry_1.landline);
                printf("Mobile No: %d\n",entry_1.mobile);
            }
            else if(list==3){
                printf("First Name: %s\n",entry_2.first_name);
                printf("Last Name: %s\n",entry_2.last_name);
                printf("Landline No: %d\n",entry_2.landline);
                printf("Mobile No: %d\n",entry_2.mobile);
            }
            }
        }
    }
}

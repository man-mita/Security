#include<stdio.h>
#include<string.h>
//it is a process in which some company add some code in user id 
// to make it safe from hacker
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
}
void salting(char password[]){
    char salt[]="123";
    char newpassword[200];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts (newpassword);
}
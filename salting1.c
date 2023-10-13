#include<stdio.h>
#include<string.h>
// it is a example of salting 
void string(char password[]);
int main(){
    char password[30]="mahi";
    string(password);
}
void string(char password[]){
    char salt[]="123";
    strcat(salt,password);
    printf("%s",salt);
}
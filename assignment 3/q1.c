/*
    Name: harsh deo aditya
    Scholar Id: 2012019
    Assignment-1,q1
    CS - 201, Data Structures
    National Institute of Technology, Silchar
*/



#include "stdlib.h"
#include "stdio.h"

int mod_exponentiation(int a, int b, int c);
int hash_string(char *str);

int main(){

    char str[] = "CSE Rocks";
//    gets(str);

    printf("%d\n", hash_string(str));

    return 0;
}

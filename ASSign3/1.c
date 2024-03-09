#include <stdio.h>
unsigned int Str_Lenght(char*str){
int L;
for ( L=0;str[L]!='\0';L++){
}
return L;
}
int main()
{
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
  //  str[strcspn(str, "\n")] = '\0';
    // Remove the newline character from the end of the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    printf("The length of the string '%s' is %d.\n", str,Str_Lenght(str));
    return 0;
}

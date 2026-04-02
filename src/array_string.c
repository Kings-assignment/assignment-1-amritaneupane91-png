#include <stdio.h>
#include <string.h>

int main() {
//int abc[5];

//int length= sizeof(abc)/sizeof(abc[0]);

//printf("Enter value for array:");
//for(int i=0; i<length; i++){
    //scanf("%d", &abc[i]);
//}

//printf("\nElements of array are:\n");
//for(int i=0; i<length; i++){
    //printf("%d\n", abc[i]);
//}


//char name[]= "amrita";
//printf("%s\n", name);
    //return 0;
//}

//char name[]= "amrita";
//int length= sizeof(name)/sizeof(name[0]);

//for(int i=0; i<length; i++){
  //printf("%c", name[i]);
//}
//printf("\n");

char name[20];
int length= sizeof(name)/sizeof(name[0]);
printf("Enter the name:");
// scanf("%s", name);
fgets(name, 20, stdin);

int size_of_string = strlen(name);

printf("%s\n", name);
printf("Size of name is %d\n", size_of_string);

return 0;
}

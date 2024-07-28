#include<stdio.h>

int main()
{
    FILE* f;
    f = fopen("numbers.dat","w");
    if(f == NULL){
        printf("HAIYAHH..FAILURE..!!\n");
        return 0;
    }
    
    printf("Starting...");
    for(int i=1; i<2048 ;i++){
        fprintf(f,"%d\n",i);
    }
    printf("...Done\n");
    fclose(f);
    return 0;
}

/*
commands for running file:
1) gcc numbers.c -o <object_name>
    {-o <object_name>} optional
    
2) ./<object_name>
    if no object.. -> ./a.out
*/

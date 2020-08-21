// Ritu vatsa(code with harry C course )
// If i want to print the patterns  like
// * ! *
// ! * !
// * ! *
// Thn how it will be done.
#include <stdio.h>
int main()
{
    for(int i=1 ; i<=3 ; i++){
        if(i%2 == 1){
            printf("* ! *\n");
        }
        else
        {
             printf("! * !\n");
        }
        
    }
    return 0;
}
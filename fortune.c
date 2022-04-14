#include<stdio.h>
#include<stdlib.h>
int main(void){
    char string[5][10]={"GREAT","COOl !","BEAUTIFUL","FABALOUS","OUT OF THE BOX"};
    int index,i;
    for(i=0;i<5;i++){
            index=rand()%5;
        printf("%s\t%d\n",string+index,index);
    }
}

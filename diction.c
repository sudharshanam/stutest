#include<stdio.h>
#include <string.h>
int main(){
    int i,j;
    char s[10][50],t[50];
    printf("Enter 10 words:\n");
    for(i=0;i<10;++i)
        gets(s[i]);
    for(i=0;i<9;++i)
       for(j=i+1;j<10 ;++j){
          if(strcmp(str[i],str[j])>0)
          {
            strcpy(t,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],t);
          }
    }
    printf("In dictionary order: \n");
    for(i=0;i<10;++i){
       puts(s[i]);
    }
return 0;
getch();
}

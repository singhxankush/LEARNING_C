# include <stdio.h>
int main(){
    char text[200];
    printf("Hi, There please enter the paragarph\n.");
    gets(text);
    int words=1;
    int characters=0;
    int lines =0;
    int i =0;
    while (text[i]!='\0'){
        if (text[i]==','||text[i]==' '){
            words+=1;
        }
        if (text[i]=='?'||text[i]=='.'){
            lines+=1;
        }
        characters+=1;
        i++;
    

    }
    printf("The total charaters are :%d\nThe total words are :%d\nThe total lines are%d",characters,words,lines);




    
    

}
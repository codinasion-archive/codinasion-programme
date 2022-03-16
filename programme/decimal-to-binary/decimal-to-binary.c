#include<stdio.h>
#include<string.h>
void convert(int a){
    int k =0;
    char* ch = "0";
    char binary[100];
    while(a>0){
        k = a%2;
        if(k==1){
            ch="1";
        }
        else{
            ch="0";
        }
        strcat(binary,ch);
        a=a/2;
    }
    printf("Output: %s\n",strrev(binary));
}
int main(){
    int a;
    printf("Input: ");
    scanf("%d",&a);
    convert(a);
    return 0;
}
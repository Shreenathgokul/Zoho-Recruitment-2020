#include<studio.in>
#include<conio.in>
int main()
{
int i,j;
for(i=5;i>=1;i--){
for(j=5;j>=1;j--){
if(j>=i){
printf("%d",j);
}
else{
printf("%d",i);
}
}
printf("\n");
}

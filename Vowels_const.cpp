#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="How mang words ";
    int vowels=0;
    int consonant =0;
    int space =0;
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]='A'||str[i]='E'||str[i]='I'||str[i]='O'||str[i]='U'||
    str[i]='a'||str[i]='e'||str[i]='i'||str[i]='o'||str[i]='u')
    vowels++;
else if(str[i]==' ')
    space++;
else 
     consonant++;
}
cout<<"Vowels "<<vowels<<endl;
cout<<"consonant "<<consonant<<endl;
cout<<"Words "<<space+1<<endl;
return 0;
}
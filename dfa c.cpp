#include<stdio.h>
#include<string.h>
#define MAX 20
int main()
{
int t[4][2]={{1,3},{1,2},{1,2},{3,3}};
int fs=2,i;
int ps=0;
int ns=0;
int invalid=0;
char s[MAX];
printf("Enter a string:");
scanf("%s",&s);
int l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='a')
ns=t[ps][0];
else if(s[i]=='b')
ns=t[ps][1];
else
invalid=l;
ps=ns;
}
if(invalid==l)
{
printf("Invalid input");
}
else if(ps==fs)
printf("Accept\n");
else
printf("Don't Accept\n");
}


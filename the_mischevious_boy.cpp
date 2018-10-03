#include <bits/stdc++.h>
using namespace std;
int main() 
{
     int i=0,len,j=0,k=0,n;
     string str;
     char s[1001],temp;
     cin.getline(s,sizeof(s));
     cin>>n;
     len=strlen(s);
      while(i!=len+1)
      {
       	if(s[i]==' ') n--;
        if(n-1==0 )
        {
            j=i+1;
         while(s[j]!=' ' && s[j]!='\0')
         {
             j++;
         }
         if(i==0)
         	k=i;
         else k=i+1;
         while(k<j)
         {
            temp=s[j-1];
            s[j-1]=s[k];
            s[k]=temp;
            k++;
            j--;
         }
         break;
        }
        i++;
      }
     cout<<s<<endl;
    return 0;
}

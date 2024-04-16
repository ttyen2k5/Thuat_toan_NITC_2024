#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string v="", v1="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z') //chuyen chu hoa ve chu thuong
        {
            v+=s[i]+32;
        }
        else if(s[i]=='?') continue; //bo qua ?
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
        {
            v+=s[i];             //them vao xau ms chu thuong va so
        }
        else if(s[i]==',')
        {
            v+=", ";             //phay cach
        }
        else v+=" ";             //ktu khac in cach
    }
    bool tmp1=0, tmp2=0;
    for(int i=0; i<v.length(); i++)
    {
        if(v[i]!=' ' && v[i]!=',')
        {
            v1+=v[i];
            tmp1=0;
            tmp2=0;
        }
        else if(v[i]==' ')
        {
            if(tmp1==0) 
            {
                v1+=v[i];
                tmp1=1;
            }
            else continue;
        }
        else
        {
            if(tmp1==1) 
            {
                v1.pop_back();
                tmp1=0;
            }
            if(tmp2==1) 
            {
                v1.pop_back();
            }
            v1+=v[i];
            tmp2=1;
        }
    }
    if(tmp1==1) v1.pop_back();
    if(tmp2==1) v1.pop_back();
    v1[0]-=32;
    v1+="?";
    cout << v1;
}

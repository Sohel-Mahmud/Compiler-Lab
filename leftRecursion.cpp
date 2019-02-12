#include <bits/stdc++.h>
using namespace std;

int nxtToken = 0;
string str;

void match()
{
    nxtToken+=1;
}
void F()
{
    if(str[nxtToken]=='i')
    {
        match();
    }
    else if(str[nxtToken]=='n')
    {
        match();
    }
    else
    {
        cout<<"Error"<<endl;
        exit(1);
    }

}
void T()
{
    F();
    while(1){
        if(str[nxtToken]=='*')
        {
            match();
            F();
        }
        else if(str[nxtToken]=='/')
        {
            match();
            F();
        }
        else
        {
            return;
        }
    }
}
void E()
{
    T();
    while(1){
        if(str[nxtToken]=='+')
        {
            match();
            T();
        }
        else if(str[nxtToken]=='-')
        {
            match();
            T();
        }
        else
        {
            return;
        }
    }
}
int main()
{
    cin>>str;
    nxtToken = 0;
    int siz = str.length();
    E();

    if(nxtToken==siz)
    {
        cout<<"Accepted"<<endl;
    }
    else
    {
        cout<<"error"<<endl;
    }
    return 0;
}

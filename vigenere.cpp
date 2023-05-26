#include<bits/stdc++.h>
using namespace std;

string generatekey(string str,string key)
{
    int x=str.size();
    for(int i=0;;i++)
    {
        if(x==i)
            i=0;
        if( key.size() ==str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}
string cipher_text(string str,string key)
{
    string cipher;
    for(int i=0;i<str.size();i++)
    {
        char x=(str[i]+key[i])%26;
        x+='A';
        cipher.push_back(x);
    }
    return cipher;
}
string origional_text(string str,string key)
{
    string origional;
    for(int i=0;i<str.size();i++)
    {
        char x=(str[i]-key[i]+26)%26;
        x+='A';
        origional.push_back(x);
    }
    return origional;
}
int main()
{
    string key,str,cipher;
    cout<<"enter plaintext";
    cin>>str;
    cout<<"enter key";
    cin>>key;
    key=generatekey(str,key);
    cipher=cipher_text(str,key);
    cout<<"encrypted"<<cipher<<endl;
    cout<<"decrypted"<<origional_text(cipher,key)<<endl;

}
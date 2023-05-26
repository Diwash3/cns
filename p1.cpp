#include<iostream>
using namespace std;

string encrypt(string text,int key)
{
    string result="";
    for(int i=0;i<text.length();i++)
    {
        if(isupper(text[i]))
            result+=char(int(text[i]+key-65)%26+65);
        else
            result+=char(int(text[i]+key-97)%26+97);
    }
return result;
}
string decrypt(string text,int key)
{
    string result="";
    for(int i=0;i<text.length();i++)
    {
        if(isupper(text[i]))
            result+=char(int(text[i]-key-65)%26+65);
        else
            result+=char(int(text[i]-key-97)%26+97);
    }
return result;
}
int main(){
    string text;
    int key;
    cout<<"enter the text ";
    cin>>text;
    cout<<"enter the key value: ";
    cin>>key;
    string result=encrypt(text,key);
    cout<<"\nthe encrypted text is "<<result;
    cout<<"\n the decrypted text is "<<decrypt(result,key);
    return 0;
}

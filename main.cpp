#include <iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;




/*
从s中找出第一个T的所在下标
*/
int getindex(string s,string t){
    int i=0,j=0;
    while(i< s.size() && j< t.size()){
        if(s[i] == t[j]){
            i++;
            j++;
        }else{
            i=i-j+1;
            j=0;
        }
    }
    if(j>t.size()){
        return 0;
    }
    else{
        return i-t.size();
    }
}

//整数转换为字符串
void switch_itoa(int number,char str[],int n){
    char temp[200];
    int i=0;
    while(number){
        temp[i]=number%n+'0';//数字转换为asc码
        //cout<<temp[i]<<endl;
        i++;
        number=number/n;
    }
    //temp[i+1];
    i--;
    //cout<<temp<<" "<<i<<endl;
    for(int j=0;j<=i;j++){
        str[j]= temp[i-j];
    }
//cout<<str<<endl;
}


int main()
{
    cout << "Hello world char test !" << endl;


    string s1="abcdefgiiifg";
    string s2 = "fg";
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    int a=getindex(s1,s2);
    cout<<"index= "<<a<<endl;

    int number=1234578917;
    char str[20];
    switch_itoa(number,str,10);
    //itoa(number,str,10);
    cout<<str<<endl;


    return 0;
}

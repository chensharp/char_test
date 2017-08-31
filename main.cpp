#include <iostream>
#include<string>
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
    if(j>=t.size()){
        return 0;
    }
    else{
        return i-t.size();
    }
}



int main()
{
    cout << "Hello world char test !" << endl;

    string s1="abcdefgiiifg";
    string s2 = "fg";
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    int a=getindex(s1,s2);
    cout<<"index= "<<a<<endl;



    return 0;
}

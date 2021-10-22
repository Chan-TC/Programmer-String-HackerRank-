/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string original="programmer";
    string keywords= original;
    string input="xproxgrammerrxxproxgrammerx";
    
    int front_counter=0, back_counter=0;//24
    
    int front_temp=0,back_temp=0;
    
    for(int i=0;i<keywords.length();i++){
        for(int j=front_counter;j<input.length();j++){
            if(front_counter==original.length()){
                front_temp=j;
                break;
            }
            if(keywords[i]==input[j]){
                keywords.erase(keywords.begin()+i);
                front_counter++;
                cout<<keywords<<endl;
            }
            
        }
        
        if(keywords==""){
                break;
        }
    }
    keywords=original;
    reverse(keywords.begin(),keywords.end());
    reverse(input.begin(),input.end());
     
    
    for(int i=0;i<keywords.length();i++){
        for(int j=back_counter;j<input.length();j++){
            if(back_counter==original.length()){
                back_temp=j;
                break;
            }
            if(keywords[i]==input[j]){
                keywords.erase(keywords.begin()+i);
                back_counter++;
                cout<<keywords<<endl;
            }
            
        }
        
        if(keywords==""){
                break;
        }
    }
    
   
    int x=input.length()-back_temp;
    cout<<front_temp<<" "<<x<<endl;
    cout<<x-front_temp<<endl;
    
    

    return 0;
}
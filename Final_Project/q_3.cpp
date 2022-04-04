//Mansi Patil
/*You have a binary string with length N. You are allowed to do swap() operations of two elements only if the index parity of both elements is the same. This means that: you can swap() an element at index 2, with any element at index4, 6, 8 etc. (even parity), similarly the element at index 3 can be swapped with the element at index1, 5,7,9 etc.*/
#include <iostream>
#include <string>
using namespace std;
int ans;
void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
}
void cmp(string in){
    string temp;
    int len=in.length();
    for(int i=0;i<len;i++){
        //make substring of 2 char
        temp = in.substr(i,2);
        //check for 01
        if(temp=="01"){
            ans++;
        }
    }
}
int main(){
    string input;
    int count = 0;
    cout<<"Enter a string: ";
    cin >> input;
    cmp(input);
    
    // check if substring is available in substring or not
    count+=ans;
    cout <<input << " occurenece of 01: " << ans << endl;
    
    ans=0;
    for(int i=0;i<input.length()-2;i++){
        for(int j=i+2;j<input.length();j+=2){
            string temp = input;
            swap(temp[i],temp[j]);
            if(temp!=input){
                cmp(temp);
                cout<<temp << " ---> 01: "<<ans<<endl;
                count += ans;
                ans = 0;        
            }
        }
    }
    cout << "Total occurence of 01: " << count << endl;
    return 0;
}
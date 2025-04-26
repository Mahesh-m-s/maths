#include <bits/stdc++.h>
using namespace std;
int digit(int n){
    int cout = 0;
    // int cout = (int)log10(n) +1;
    while (n>0)
    {
        int last = n%10;
        n =n/10;
        last *=10;
        cout++;
    }
    return cout;
}

int reversed(int n){
    int rev =0;
    while (n>0)
    {
        int last = n%10;
        n = n/10;
        rev = rev*10 +last;
    }
    return rev;
}

int palindrome(int n){
        int rev =0;
        int original =n;
        while (n>0)
        {
            int last = n%10;
            n = n/10;
            rev = rev*10 +last;
        }
        if (rev==original) cout<<"true";
        else cout<<"false";
    }

int amstrong(int n){
    int sum =0;
    int original =n;
    while (n>0)
    {
        int last = n%10;
        sum = sum+(last*last*last);
        n = n/10;
    }
    if (sum==original) cout<<"true";
    else cout<<"false";
}

int divisor(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int gcd(int n1,int n2){
    int comdiv=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            comdiv=i;
        }
    }
    return comdiv;
}

int euclidegcd(int n1,int n2){
    // formula is gcd(a,b)= gcd(a-b,b)
    while(n1>0 &&n2>0){
        if (n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1==0) return n2;
    else return n1;
}


int main(){
    // int n =13;
    // cout<<"the number count "<<digit(445);
    // cout<<"the reversed of "<<n<<" is "<<reversed(n);
    // palindrome(n);
    // amstrong(n);
    // divisor(n);
    // if (prime(n)){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
    // return 0;
    // cout<<gcd(20,4);
    cout<<euclidegcd(18,6);
}
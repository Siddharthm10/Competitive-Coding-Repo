#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int harmed=0;
    int unharmed=0;
    int harm[4] = {k,l,m,n};
    sort(harm,harm+4);

    // calculating max of the four k l m n 
    // max = (k>l)?((k>m)?((k>n)?k:n):((m>n)?m:n)):((l>m)?((l>n)?l:n):((m>n)?m:n));
    for(int i=1; i<d+1; i++){
        (i%harm[0]==0)?(harmed++):((i%harm[1]==0)?harmed++:((i%harm[2]==0)?harmed++:((i%harm[3]==0)?harmed++:unharmed++)));
    }

    cout<<harmed;
    return 0;
}
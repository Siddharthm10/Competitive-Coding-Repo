#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;


int main(){
    ////////////////////////////////////////////////////
    int n;
    cin>>n;
    int p;
    cin>>p;
    int p_levels[p+1];
    for(int i=0; i<p; i++){
        cin>>p_levels[i];
    }


    int q;
    cin>>q;
    int q_levels[q+1];
    for(int i=0; i<q; i++){
        cin>>q_levels[i];
    }

    ////////////////////////////////////////////////////
    if(p>0||q>0){
        int conc[p+q];
        int flag = true;
        // merging the arrays
        // cin>>n;

        merge(p_levels,p_levels+p,q_levels,q_levels+q,conc);
        // sorting the array
        sort(conc,conc+p+q);
        
        // // checking the array
        // for(int i=0; i<p+q; i++)
        //     cout<<conc[i];

        // getting rid of repeated enteries
        for(int i=1,j=1;i<n,j<n; i++){
            if(conc[i]!=conc[i-1]){
                conc[j] = conc[i];
                j++;
            }
        }

        // output
        for(int i=0;i<n;i++){
            if(conc[i]!=i+1)
                flag = false;
        }
        
        if(flag)
            cout<<"I become the guy.";
        else
            cout<<"Oh, my keyboard!";}
    else
        cout<<"Oh, my keyboard!";
        


    return 0;
}
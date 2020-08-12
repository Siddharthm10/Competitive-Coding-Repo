#include <bits/stdc++.h>
#include<sstream>
// #include <boost/algorithm> 
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    stringstream ss(s);
    char ch;
    int hour,min,sec;
    string result;
    string part;
    part=s.substr(8,9);
    ss>>hour>>ch>>min>>ch>>sec;
    if(part == "PM"){
        if(hour==12){hour=12;}
        else{hour+=12;}
        }
    if(part=="AM"){
        if(hour==12){hour=0;}
        else{hour=hour;}
    }


    //This is final string Output
    if(hour/10==0){result="0"+to_string(hour);}
    else{result=to_string(hour);}
    if(min/10==0){result+=":0"+to_string(min);}
    else{result+=":"+to_string(min);}
    if(sec/10==0){result+=":0"+to_string(sec);}
    else{result+=":"+to_string(sec);}


    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

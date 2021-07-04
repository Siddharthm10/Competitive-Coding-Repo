
int getValue(char a){
    if(a=='I') return 1;
    if(a=='V') return 5;
    if(a=='X') return 10;
    if(a=='L') return 50;
    if(a=='C') return 100;
    if(a=='D') return 500;
    if(a=='M') return 1000;
    return 0;
}


int romanToDecimal(string &str) {
    // code here
    // if(str.length()==1) return getValue(str[0]);
    int ans = getValue(str[0]);
    for(int i=1; i<str.length(); i++){
        int value = getValue(str[i]);
        if(getValue(str[i-1])<value) ans = ans + value - 2*getValue(str[i-1]);
        else ans+=value;
    }
    return ans;
}

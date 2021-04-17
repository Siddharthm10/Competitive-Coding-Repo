class Solution {
public:
    int romanToInt(string s) {
        std::map<std::string, int> Values; 

        // insert elements in random order 
        Values.insert(pair<std::string, int>("I", 1)); 
        Values.insert(pair<std::string, int>("V", 5)); 
        Values.insert(pair<std::string, int>("X", 10)); 
        Values.insert(pair<std::string, int>("L", 50)); 
        Values.insert(pair<std::string, int>("C", 100)); 
        Values.insert(pair<std::string, int>("D", 500)); 
        Values.insert(pair<std::string, int>("M", 1000)); 
        
        
        
        vector<int> numbers{};
        int sum=0;
        
        for(size_t i=0; i<s.length(); i++){
            numbers.push_back(Values[s[i]]);
        }
        sum = accumulate(numbers.begin(),numbers.end(),0);
        // std::cout<<Values[s[1]]<<std::endl;
        return sum ;
    }
};


// failed because of 
Line 24: Char 37: fatal error: no viable overloaded operator[] for type 'std::map<std::string, int>' (aka 'map<basic_string<char>, int>')
            numbers.push_back(Values[s[i]]);
                              ~~~~~~^~~~~
/usr/bin/../lib/gcc/x86_64-linux-gnu/8/../../../../include/c++/8/bits/stl_map.h:490:7: note: candidate function not viable: no known conversion from '__gnu_cxx::__alloc_traits<std::allocator<char>, char>::value_type' (aka 'char') to 'const std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > >::key_type' (aka 'const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >') for 1st argument
      operator[](const key_type& __k)
      ^
/usr/bin/../lib/gcc/x86_64-linux-gnu/8/../../../../include/c++/8/bits/stl_map.h:510:7: note: candidate function not viable: no known conversion from '__gnu_cxx::__alloc_traits<std::allocator<char>, char>::value_type' (aka 'char') to 'std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > >::key_type' (aka 'std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >') for 1st argument
      operator[](key_type&& __k)
      ^
1 error generated.

//Couldnt Find the solution to that so tried the basic if else statement: 

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int num = 0;
        int last = 0;
        
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == 'I'){
                cout << "I at: " << i << endl;
                num = 1;
            }
            else if(s[i] == 'V'){
                num = 5;
            }
            else if(s[i] == 'X'){
                num = 10;
            }
            else if(s[i] == 'L'){
                num = 50;
            }
            else if(s[i] == 'C'){
                num = 100;
            }
            else if(s[i] == 'D'){
                num = 500;
            }
            else if(s[i] == 'M'){
                num = 1000;
            }
            
            if(num < last){
                total -= num;
            }
            else {
                total += num;
            }
            last = num;
        }
        return total;
    }
};

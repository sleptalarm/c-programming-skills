#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool less_than(const string& str1, const string& str2);

int main(){
    vector<string> aString;
    string temp;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        aString.push_back(temp);
    }
    //sort(begin, end, sort solution);
    sort(aString.begin(), aString.end(),less_than);
    for(int i = 0; i < 5; i++){
        cout << aString[i] << " ";
    }
}
//bool is the sort solution
bool less_than(const string& str1, const string& str2){
    if(str1 < str2){
        return true;
    }
    return false;
}

//sample input: apple orange banana pear lemon
//sample output: apple banana lemon orange pear
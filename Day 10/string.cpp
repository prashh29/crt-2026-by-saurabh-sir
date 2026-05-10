#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1="Hello";
    string str2="jecrc";
    cout<<str1<<" "<<str2<<endl;
    //method of string
    //1 length of string
    cout<<"Length of str1: "<<str1.length()<<endl;
    //2 append string
    cout<<"after appending string is: "<<str1.append("students")<<endl;
    //3 empty string
    cout<<"Is str1 empty? "<<str2.empty()<<endl;
    //4 string concatenation
    cout<<"after concatenation string is: "<<str1+"bachcho"<<endl;
    cout<<"after concatenation string is 2: "<<str1<<endl;
    //push back
    str2.push_back('u');
    cout<<"after push back string is: "<<str2<<endl;
    //pop back
    str2.pop_back();
    cout<<"after pop back string is: "<<str2<<endl;

    //find() method
    int index=str1.find("ello");
    cout<<"index of 'ello' in str1: "<<index<<endl;

    //at method.str1[1];
    char ch=str1.at(1);
    cout<<"character at index 1 in str1: "<<ch<<endl;

    //swap method
    str1.swap(str2);
    cout<<"after swapping str1 and str2: "<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

    //substr()method
    string substr=str2.substr(5,6);
    cout<<"substring of str2 from index 5 with length 6: "<<substr<<endl;
    //getline() method
    string str3;
    cin>>str3;
    //getline(cin,str3);
    cout<<"you entered: "<<str3<<endl;
    return 0;
}

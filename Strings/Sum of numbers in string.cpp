#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    string temp="";
	    int ans=0;
	    int len = s.length();
	    for(int i =0; i<len; i++)
	    {
	        if(isdigit(s[i]))
	            temp += s[i];
	       else{
	           ans += atoi(temp.c_str());
	           temp="";
	       }
	    }
	    cout<<ans + atoi(temp.c_str())<<endl;
	}
	return 0;
}

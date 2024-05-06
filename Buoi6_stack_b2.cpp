//stack_b2
//push: them ptu vao cuoi stack
//pop: loai bo ptu cuoi stack
//top: tra ve gtri la ptu cuoi stack
//size: tra ve gtri nguyen la so ptu dag co trong stack
//empty: tra ve 1 gtri bool, true neu stack rong, false neu stack k rong

#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) 
{
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ']') 
            {
                st.push(s[i]);
            }
            else
            {
                string curr_str = "";                
                while(st.top() != '[')
                {
                    curr_str = st.top() + curr_str ;
                    st.pop();
                }               
                st.pop();  
                string number = "";
                while(!st.empty() && isdigit(st.top()))
                {
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);                   
                while(k_time--)
                {
                    for(int p = 0; p < curr_str.size() ; p++)
                        st.push(curr_str[p]);
                }
            }
        }       
        s = "";
        while(!st.empty())
        {
            s = st.top() + s;
            st.pop();
        }
        return s;
}
int main()
{
   string s;
   cin>>s;
   cout<<decodeString(s);
}

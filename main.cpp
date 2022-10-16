#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P,i,j,k,t, n;
    string s;
      cin>>t;
    for(P=0;P<t;P++){
            cin>>n>>s;
            int count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=i+1;k<j;k++){
                    if(s[i]==s[j] && s[i]!=s[k])
                        count+=1;
                }
            }
    }
                   if(count!=0)
                            cout<<"NO\n";
                        else
                            cout<<"YES\n";
}

}

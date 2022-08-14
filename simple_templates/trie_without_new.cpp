// trie data structure based on pointer without new object()
//deque idea : fishy15 mate <3 <3 UWU

#include<bits/stdc++.h>
using namespace std;

struct node{
    bool last_word;
    node *babies[10];
    node() : last_word(false){for(int i=0;i<10;i++) babies[i] =NULL;}
} *root;

deque<node> buffer;

template<typename... Args>
node *new_node(Args... args) {
        buffer.emplace_back(args...);
        return &buffer.back();
    }

int main(){
        string str,prefix="",a="GOOD SET" , b="BAD SET";
        auto insert=[&](string s){
                int n=s.size();
                node *curr=root;
                for(int i=0;i<n;i++){
                        int chr=s[i]-'a';
                        if(i==n-1 && curr->babies[chr]!=NULL) return 0;
                        if(curr->babies[chr]==NULL) curr->babies[chr]= new_node();
                        curr=curr->babies[chr];
                        if(curr->last_word) return 0;
                }
                curr->last_word=1;
                return 1;

        };
        bool fl=1;
        int time;
        cin>>time;
        root=new_node();
        for(int i=0;i<time;i++){
                cin>>str;
                if(not  fl) continue;
                fl=insert(str);
                if(not fl) 
                        prefix=str;
                       

        }
        if(fl) cout << a << endl;
        else cout << b << endl << prefix << endl;
        return 0;
}

#include <bits/stdc++.h>

using namespace std;

queue<string> q;
map<string,int> idx;

int main()
{
    for(char c = 'a'; c <= 'z'; c++){
        string ch = "";
        ch += c;
        q.push(ch);
    }

    int curIdx = 1;

    while(!q.empty()){
        string word = q.front();
        idx[word] = curIdx;
        curIdx ++;
        char lstLetter = word[word.size() - 1] + 1;
        if(word.size() < 5){
            for(char c = lstLetter; c <= 'z'; c++){
                string newWord = word;
                newWord += c;
                q.push(newWord);
            }
        }
        q.pop();
    }
    string x;
    while(cin>>x){
        if(idx.find(x) != idx.end()) cout<<idx[x]<<endl;
        else cout<<0<<endl;
    }

    return 0;
}